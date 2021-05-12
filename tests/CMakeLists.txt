include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../src)

set(CHECK_INSTALL_DIR check-0.15.2)

find_package(Check REQUIRED)
include_directories(${CHECK_INCLUDE_DIRS})
link_directories(${CHECK_LIBRARY_DIRS})

set(TEST_SOURCES
        check_array.c
        )

set(TEST_SOURCES
        check_array.c
        )

add_executable(check_array ${TEST_SOURCES})