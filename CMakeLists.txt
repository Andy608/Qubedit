cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

project(Qubedit)

add_subdirectory(ext/QubeEngine)  # this executes ext/QubeEngine/CMakeLists.txt for you

# On top of adding the path to nanogui/include, you may need extras
include_directories(ext/QubeEngine/include) # make sure you have this
include_directories(${QUBEENGINE_EXTRA_INCS}) # where glm, spdlog, etc come from

set(QUBEDIT_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/qubedit)

add_executable(Qubedit ${QUBEDIT_SRC}/core/Main.cpp)

# Lastly, additional libraries may have been built for you.  In addition to linking
# against NanoGUI, we need to link against those as well.
target_link_libraries(Qubedit ${QUBEENGINE_EXTRA_LIBS})

target_include_directories(Qubedit PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
