set(BINARY ${CMAKE_PROJECT_NAME}_tst)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

set(SOURCES ${TEST_SOURCES})


# INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR} "../src")

# set(BOOST_ROOT "./lib/boost_1_77_0/gpad")
# find_package(Boost 1.77.0 REQUIRED COMPONENTS filesystem json)
# message("TEST Boost_FOUND: ${Boost_FOUND}")
# message("TEST boost lib: ${Boost_LIBRARY_DIRS}")
# message("TEST boost inc:${Boost_INCLUDE_DIR}")
# message("TEST Boost LIBRARIES:${Boost_LIBRARIES}")

# INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR} )

add_executable(${BINARY} ${TEST_SOURCES})

add_test(NAME ${BINARY} COMMAND ${BINARY})

target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest gmock)
# TARGET_LINK_LIBRARIES(${BINARY} LINK_PUBLIC ${Boost_LIBRARIES} Threads::Threads)
TARGET_LINK_LIBRARIES(${BINARY} LINK_PUBLIC Threads::Threads)

