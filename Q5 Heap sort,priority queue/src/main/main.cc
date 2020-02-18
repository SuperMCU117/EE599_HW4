#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int>input{5,9,3,1,7};
    solution.HeapSort(input);
    for (auto n : input){
        std::cout<<n<<" ";
    }
    std::cout<<std::endl;

    return EXIT_SUCCESS;
}