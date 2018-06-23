#include <cstring>
#include <iostream>
#include "hello.h"
#include "version.h"

int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        std::cout << say_hello() << std::endl;

        return 0;
    }

    if (argc == 2 && std::strcmp(argv[1], "--version") == 0)
    {
        std::cout << "A Hello World project. Version: " << PROJECT_VERSION_PATCH << std::endl;

        return 0;
    }
    else
    {
        std::cout << "Wrong arguments. See readme for details" << std::endl;
    }
}

