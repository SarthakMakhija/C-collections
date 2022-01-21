cmake_minimum_required(VERSION 3.14)

project(collections)

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Fetch Google test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# include linkedlist library
add_subdirectory(src/list)
add_subdirectory(src/dictionary)

# Enable testing
add_executable(collections_tests "")
target_sources(collections_tests
	PRIVATE
	test/list/LinkedList_unit_test.cpp
  test/list/LinkedListNode_unit_test.cpp
  test/dictionary/Dictionary_unit_test.cpp
)

target_link_libraries(collections_tests
  	PRIVATE
    linkedlist
    dictionary
    gtest_main
)

enable_testing()
add_test(
  	NAME google_test
  	COMMAND $<TARGET_FILE:collections_tests>
)