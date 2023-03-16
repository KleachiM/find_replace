#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include "../Functions.h"

TEST_CASE("bad args count")
{
    std::string stringToSearch = "string-to-search";
    std::string replaceString = "replace-string";
    char* args[] = {stringToSearch.data(), replaceString.data(), NULL};
    REQUIRE(ParseArgs(2, args) == std::nullopt);
}

TEST_CASE("")