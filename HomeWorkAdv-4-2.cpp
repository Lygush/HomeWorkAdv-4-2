#include "List.h"
#include "catch2/catch_session.hpp"
#include "catch2/catch_test_macros.hpp"

TEST_CASE("Push_Pop", "List") {
List list;
list.PushFront(4);
CHECK(list.Size() == 1);
list.PushBack(-2);
CHECK(list.Size() == 2);
CHECK(list.Empty() == false);
list.PushBack(1);
CHECK(list.PopBack() == 1);
CHECK(list.PopFront() == 4);
list.Clear();
CHECK(list.Empty() == true);
CHECK(list.PopBack());
CHECK(list.PopFront());
}

int main() {
    return Catch::Session().run();
}