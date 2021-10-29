set(BINARY ${CMAKE_PROJECT_NAME})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})

# set(BOOST_ROOT "./lib/boost_1_77_0/gpad")
# find_package(Boost 1.77.0 REQUIRED COMPONENTS filesystem json)
# message("Boost_FOUND: ${Boost_FOUND}")
# message("boost lib: ${Boost_LIBRARY_DIRS}")
# message("boost inc:${Boost_INCLUDE_DIR}")
# message("Boost LIBRARIES:${Boost_LIBRARIES}")

# INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR} )
# target_link_libraries(my_app PRIVATE Threads::Threads)

# TARGET_LINK_LIBRARIES(${BINARY}_run LINK_PUBLIC ${Boost_LIBRARIES} Threads::Threads)
TARGET_LINK_LIBRARIES(${BINARY}_run LINK_PUBLIC Threads::Threads)

# target_link_libraries(${BINARY}_run PRIVATE nlohmann_json::nlohmann_json)


add_library(${BINARY}_lib STATIC ${SOURCES})
