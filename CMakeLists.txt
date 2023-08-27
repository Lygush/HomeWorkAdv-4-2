cmake_minimum_required(VERSION 3.20)
project(HomeWorkAdv-4-2)

set(SOURCES HomeWorkAdv-4-2.cpp List.cpp ListNode.cpp)
set(HEADERS List.h ListNode.h)

add_executable(HomeWorkAdv-4-2 ${SOURCES} ${HEADERS})
add_subdirectory(../Catch2 Catch2-build)
target_link_libraries(HomeWorkAdv-4-2 PRIVATE Catch2::Catch2)
