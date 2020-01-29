cmake_minimum_required(VERSION 3.10)
project(Qubedit)
set(CMAKE_CXX_STANDARD 17)

find_package(glfw3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)

set(BASE_PATH "${CMAKE_SOURCE_DIR}/src/com/header")
set(SOURCE "src/com/impl/qubedit")

add_executable(Qubedit "${SOURCE}/core/Qubedit.cpp")

#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:CONSOLE")

target_include_directories(Qubedit PUBLIC ${BASE_PATH})

target_link_libraries(Qubedit PRIVATE "${CMAKE_SOURCE_DIR}/lib/QubeEngine.lib")
target_link_libraries(Qubedit PRIVATE glfw)
target_link_libraries(Qubedit PRIVATE glad::glad)
target_link_libraries(Qubedit PRIVATE spdlog::spdlog)
target_link_libraries(Qubedit PRIVATE glm)
target_link_libraries(Qubedit INTERFACE NativeLib)

target_include_directories(Qubedit PRIVATE "${CMAKE_SOURCE_DIR}/../QubeEngine/src/com/header")

#cmake .. -DCMAKE_TOOLCHAIN_FILE="C:\vcpkg\scripts\buildsystems\vcpkg.cmake" -DVCPKG_TARGET_TRIPLET="x64-windows"