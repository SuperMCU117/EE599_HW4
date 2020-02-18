#include <iostream>
#include "src/lib/solution.h"

int main()
{
    BST tree;
    tree.push(2);
    tree.push(4);
    tree.push(5);
    tree.push(7);
    tree.push(9);
    tree.push(11);
    tree.push(12);
    tree.push(21);
    
    std::cout<<tree.find(2)<<std::endl;
    tree.erase(2);
    std::cout<<tree.find(2)<<std::endl;
    
  

    return EXIT_SUCCESS;
}