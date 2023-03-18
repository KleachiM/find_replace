#include <catch2/catch_all.hpp>
#include <catch2/catch_test_macros.hpp>
#include "../Functions.h"

//TEST_CASE("bad args count")
//{
//    std::string stringToSearch = "string-to-search";
//    std::string replaceString = "replace-string";
//    char* args[] = {stringToSearch.data(), replaceString.data(), NULL};
//    REQUIRE(ParseArgs(2, args) == std::nullopt);
//}

TEST_CASE("test func FindReplace")
{
    REQUIRE(FindAndReplace("i have a cat", "cat", "dog") == "i have a dog");
    REQUIRE_FALSE(FindAndReplace("i have a cat", "cat", "dog") == "i have a cat");
    REQUIRE(FindAndReplace("", "cat", "dog") == "");
    REQUIRE(FindAndReplace("i have a", "cat", "dog") == "i have a");
    REQUIRE(FindAndReplace("a a", "a", "a a") == "a a a a");
    REQUIRE(FindAndReplace("a a|", "a", "") == " |");
    REQUIRE(FindAndReplace("", "", "") == "");
    REQUIRE(FindAndReplace("a a", "", "b") == "a a");
}
