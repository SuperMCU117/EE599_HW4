#include <iostream>
#include "src/lib/solution.h"
#include<vector>

int main()
{
    Solution solution ;
    std::vector<int>temp={1,2,3,4,5,6,7,8,9,0};
    std::vector<int>New;
    std::vector<int>Out;
    std::vector<int>sum;
    New=solution.Filter(temp);
    Out=solution.Map(temp);
    sum=solution.Reduce(temp);

    for(auto i : sum){
        std::cout<<i<<" "<<std::endl;
    }

    return EXIT_SUCCESS;
}