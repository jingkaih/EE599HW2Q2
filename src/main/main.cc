#include <iostream>
#include "src/lib/solution.h"
#include <string>
int main()
{
    Solution solution ;

    std::cout <<solution.c_FindSize()<<std::endl;
    std::cout <<solution.i_FindSize()<<std::endl;
    std::cout <<solution.f_FindSize()<<std::endl;
    return EXIT_SUCCESS;
}