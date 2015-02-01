file(GLOB TESTS_SRC
   "*.h"
   "*.cc"
)

set(TESTS_SRC ${TESTS_SRC}
  ${PROJECT_SOURCE_DIR}/3rdparty/gtest/gtest-all.cc
  ${PROJECT_SOURCE_DIR}/3rdparty/gtest/gtest_main.cc
)

add_definitions(-DGTEST_HAS_TR1_TUPLE=0)
add_definitions(-DGTEST_USE_OWN_TR1_TUPLE=1)

include_directories(${PROJECT_SOURCE_DIR}/src)
include_directories(${PROJECT_SOURCE_DIR}/3rdparty)

find_package (Threads)

add_executable(tests ${TESTS_SRC})
target_link_libraries(tests myproject ${CMAKE_THREAD_LIBS_INIT})

