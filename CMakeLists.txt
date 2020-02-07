cmake_minimum_required(VERSION 3.15)
project(Qubedit)
set(CMAKE_CXX_STANDARD 17)

find_package(glm CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)
find_package(Eigen3 CONFIG REQUIRED)

set(BASE_PATH "${CMAKE_SOURCE_DIR}/src/com/header")
set(LIBRARY_PATH "${CMAKE_SOURCE_DIR}/lib")
set(SOURCE "src/com/impl/qubedit")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/out/build")

add_executable(Qubedit "${SOURCE}/core/Qubedit.cpp")

target_link_libraries(Qubedit PRIVATE spdlog::spdlog)
target_link_libraries(Qubedit PRIVATE glm)
target_link_libraries(Qubedit PRIVATE Eigen3::Eigen)
target_link_libraries(Qubedit PRIVATE "${CMAKE_SOURCE_DIR}/lib/QubeEngine.lib")
target_link_libraries(Qubedit PRIVATE "${CMAKE_SOURCE_DIR}/lib/nanogui.lib")
target_link_libraries(Qubedit INTERFACE NativeLib)

target_include_directories(Qubedit PUBLIC ${BASE_PATH})
target_include_directories(Qubedit PUBLIC "${CMAKE_SOURCE_DIR}/../QubeEngine/src/com/header")

include_directories("${CMAKE_SOURCE_DIR}/../QubeEngine/include")
