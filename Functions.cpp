#include "Functions.h"

std::string FindAndReplace(std::string const& subject, std::string const& search, std::string  const& replace)
{
    std::string outStr;
    if (subject.empty()) return outStr;
    return outStr;
}

std::optional<Args> ParseArgs(int argc, char **argv) {
    if (argc != 3) return std::nullopt;
    Args args;
    args.searchString = argv[1];
    args.replaceString = argv[2];
    return args;
}
