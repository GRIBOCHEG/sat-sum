cmake_minimum_required(VERSION 3.5)
project(sat_sum)
option(build_test "Enables building executable with tests" OFF)

set(LIB_SRC src/sum.h 
            src/sum.c)

include_directories(src)

# add_library(sum SHARED ${LIB_SRC})
add_library(sum STATIC ${LIB_SRC})


if (build_test)
    add_definitions(-DMAIN_EXECUTABLE_TEST)
    add_executable(test test/main.c)
    target_link_libraries(test sum)
endif()

add_executable(sat_sum main/main.c)

if(build_test)
    add_dependencies(sat_sum test)
endif()

target_link_libraries(sat_sum sum)