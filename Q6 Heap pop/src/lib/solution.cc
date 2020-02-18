#include "solution.h"

  int Solution::ReturnKthLargest(int k, std::vector<int>&input){
  std::make_heap(input.begin(),input.end());
  int value;
  
  for (int i=0; i<k;i++){
    
    value = input[0];
    std::pop_heap(input.begin(),input.end());
    input.pop_back();
    
    

  }
  return value;
  }

