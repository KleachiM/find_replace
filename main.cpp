#include "Functions.h"

int main(int argc, char* argv[])
{
    // ParseArgs
    auto parsedArgs = ParseArgs(argc, argv);
    if (!parsedArgs)
    {
        std::cout << "Invalid argument!\n";//use consts
        std::cout << "Usage: ./find_replace <not empty search-string> <replace-string>";
        return EXIT_FAILURE;
    }

    std::string inputString;
    while (getline(std::cin, inputString))
    {
        std::cout << FindAndReplace(inputString, parsedArgs->searchString, parsedArgs->replaceString)  << "\n";
    }
    return EXIT_SUCCESS;
}
