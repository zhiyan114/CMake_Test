# Configure CMake Requirement
cmake_minimum_required(VERSION 3.13)
set(MAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Setup the projects
project(cmake_test VERSION 1.0)
#set(SrcDir ${PROJECT_SOURCE_DIR}/src)

# Setup the configurations
# Force Crashpad for sentry as it the recommended options
SET(SENTRY_BACKEND crashpad CACHE STRING "Sentry Backend" FORCE)

# Setup the output dir
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Start the build stuff
add_subdirectory(external)
add_definitions(-DSENTRY_BACKEND=breakpad)
add_subdirectory(src)

#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin/$<CONFIG>)
