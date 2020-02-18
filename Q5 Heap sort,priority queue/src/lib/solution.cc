#include "solution.h"
#include<queue>
#include<functional>
#include<vector>

void Solution::HeapSort(std::vector<int>&inputs){
  std::priority_queue<int,std::vector<int>,std::greater<int>>queue;
  for(auto n : inputs){
    queue.push(n);
  }
  int counter= inputs.size();
  for (int i=0; i<counter;i++){
    inputs[i]=queue.top();
    queue.pop();
  }
  return;





}
