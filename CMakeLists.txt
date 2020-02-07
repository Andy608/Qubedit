cmake_minimum_required(VERSION 3.15)
project(Qubedit)
set(CMAKE_CXX_STANDARD 17)

#find_package(nanovg CONFIG REQUIRED)
#find_package(glfw3 CONFIG REQUIRED)
#find_package(glad CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)
find_package(Eigen3 CONFIG REQUIRED)

set(BASE_PATH "${CMAKE_SOURCE_DIR}/src/com/header")
set(LIBRARY_PATH "${CMAKE_SOURCE_DIR}/lib")
set(SOURCE "src/com/impl/qubedit")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/out/build")


add_executable(Qubedit "${SOURCE}/core/Qubedit.cpp")

#add_custom_command(TARGET Qubedit POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy "${LIBRARY_PATH}/nanogui.dll" "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
#set(CMAKE_MSVCIDE_RUN_PATH ${LIBRARY_PATH})

target_link_libraries(Qubedit PRIVATE spdlog::spdlog)
target_link_libraries(Qubedit PRIVATE glm)
#target_link_libraries(Qubedit PRIVATE nanovg::nanovg)
#target_link_libraries(Qubedit PRIVATE glfw)
#target_link_libraries(Qubedit PRIVATE glad::glad)
target_link_libraries(Qubedit PRIVATE Eigen3::Eigen)

target_link_libraries(Qubedit PRIVATE "${CMAKE_SOURCE_DIR}/lib/QubeEngine.lib")
target_link_libraries(Qubedit PRIVATE "${CMAKE_SOURCE_DIR}/lib/nanogui.lib")
target_link_libraries(Qubedit INTERFACE NativeLib)

target_include_directories(Qubedit PUBLIC ${BASE_PATH})
target_include_directories(Qubedit PUBLIC "${CMAKE_SOURCE_DIR}/../QubeEngine/src/com/header")

include_directories("${CMAKE_SOURCE_DIR}/../QubeEngine/include")
#include_directories("${CMAKE_SOURCE_DIR}/../QubeEngine/include/nanovg")

#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ext/nanogui/include)
#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ext/nanogui/ext/glfw/include)
#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ext/nanogui/include/glad/include)


#message(STATUS "dll: ${CMAKE_MSVCIDE_RUN_PATH}")

#cmake .. -DCMAKE_TOOLCHAIN_FILE="C:\vcpkg\scripts\buildsystems\vcpkg.cmake" -DVCPKG_TARGET_TRIPLET="x64-windows"