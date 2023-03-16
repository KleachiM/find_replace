#ifndef FIND_REPLACE_FUNCTIONS_H
#define FIND_REPLACE_FUNCTIONS_H

#include <iostream>
#include <optional>
#include <vector>

#endif //FIND_REPLACE_FUNCTIONS_H

struct Args
{
    std::string searchString;
    std::string replaceString;
};

std::string FindAndReplace(std::string const& subject, std::string const& search, std::string  const& replace);

std::optional<Args> ParseArgs(int argc, char* argv[]);
