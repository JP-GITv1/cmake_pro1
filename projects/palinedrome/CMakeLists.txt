# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.22.1)


# Set the project name
project(palinedrome)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/pal.cpp
   
)

# Add an executable with the above sources
add_executable(palinedrome ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(palinedrome
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/inc
)