#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int counter = 5;
    std::vector<int>inputs{1,9,5,23,6,8,22,4,43,19};
    std::cout<<"The fifth largest is "<<solution.ReturnKthLargest(counter,inputs)<<std::endl;
    for(auto n : inputs){
        std:: cout<<n<<" ";
    }
    return EXIT_SUCCESS;
}