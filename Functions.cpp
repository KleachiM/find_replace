#include "Functions.h"

std::string FindAndReplace(std::string const& subject, std::string const& search, std::string  const& replace)
{
    std::string outStr = subject;
    if (subject.empty() || search.empty()) return outStr; // empty string return empty string
    size_t pos = 0;
    size_t countSearchSymbols = search.size();
    size_t countReplaceSymbols = replace.size();
    while (true)
    {
        pos = outStr.find(search, pos);
        if (pos == subject.npos) break;
        outStr.replace(pos, countSearchSymbols, replace.data());
        pos += countReplaceSymbols;
    }
    return outStr;
}

std::optional<Args> ParseArgs(int argc, char **argv) {
    if (argc != 3) return std::nullopt;
    Args args;

    args.searchString = argv[1];
    if (args.searchString.empty()) return std::nullopt; // searched string cannot be empty

    args.replaceString = argv[2];
    return args; // asdf
}
