#include "Functions.h"

int main(int argc, char* argv[])
{
    // ParseArgs
    auto parsedArgs = ParseArgs(argc, argv);
    if (!parsedArgs)
    {
        std::cout << "Invalid argument!\n";
        std::cout << "Usage: ./find_replace <search-string> <replace-string>";
        return 1;
    }

    std::string inputString;
    while (getline(std::cin, inputString))
    {
        std::cout << FindAndReplace(inputString, parsedArgs->searchString, parsedArgs->replaceString)  << "\n";
    }
    return 0;
}
