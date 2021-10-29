cmake_minimum_required(VERSION 3.0)
project(MasterCrupt)

set(CMAKE_CXX_STANDARD 20)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)


include_directories(src)

add_subdirectory(src)
add_subdirectory(tst)
add_subdirectory(lib/googletest)


# set(BOOST_ROOT "./lib/boost_1_77_0/gpad")
# find_package(Boost 1.77.0 REQUIRED COMPONENTS filesystem json)
# message("Boost_FOUND: ${Boost_FOUND}")
# message("boost lib: ${Boost_LIBRARY_DIRS}")
# message("boost inc:${Boost_INCLUDE_DIR}")
# message("Boost LIBRARIES:${Boost_LIBRARIES}")

# INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR} )


# include(FetchContent)

# FetchContent_Declare(json  GIT_REPOSITORY https://github.com/ArthurSonzogni/nlohmann_json_cmake_fetchcontent.git  GIT_TAG v3.10.4)

# FetchContent_GetProperties(json)
# if(NOT json_POPULATED)
#   message("fetching")
#   FetchContent_Populate(json)
#   add_subdirectory(${json_SOURCE_DIR} ${json_BINARY_DIR} EXCLUDE_FROM_ALL)
# endif()

# target_link_libraries(foo PRIVATE nlohmann_json::nlohmann_json)





# add_executable(Pos Pos.cpp)

# install(TARGETS Pos DESTINATION bin)

