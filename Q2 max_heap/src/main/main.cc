#include <iostream>
#include "src/lib/solution.h"

int main()
{

    MaxHeap heap;
    heap.push(2);
    heap.push(5);
    heap.push(6);
    heap.push(9);
    heap.push(4);
    heap.push(24);
    heap.push(3);
    heap.push(15);
    heap.push(23);
    heap.top();
    heap.pop();
    heap.pop();
    
    std::cout<<heap.top()<<std::endl;

    return EXIT_SUCCESS;
}