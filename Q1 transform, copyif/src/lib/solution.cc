#include "solution.h"
#include<algorithm>
#include<functional>
#include<vector>
#include<iostream>
#include<numeric>

std::vector<int> Solution::Filter(const std::vector<int>&input){
  std::vector<int>New(input.size());
  auto it=std::copy_if(input.begin(),input.end(),New.begin(),[](int i){return (i%2==0);});
  New.resize(std::distance(New.begin(),it));
  return New;

}

std::vector<int> Solution::Map(const std::vector<int>&In){
  std::vector<int>Out(In.size());
  std::transform(In.begin(),In.end(),Out.begin(),[](int i){return (i*i);});
  return Out;
}


std::vector<int> Solution::Reduce(const std::vector<int>&input){
  std::vector<int>Sum;
  int sum=0;
  sum=std::accumulate(input.begin(),input.end(),0);
  Sum.push_back(sum);
  return Sum;
}


 

