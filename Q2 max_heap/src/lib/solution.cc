#include "solution.h"
#include<vector>
#include<iostream>

MaxHeap::MaxHeap(){data_={};};

int MaxHeap::GetParentIndex(int i){
  return (i - 1) / 2;
}

int MaxHeap::GetLeftIndex(int i){
  return (2*i+1);
}

int MaxHeap::GetRightIndex(int i){
  return (2*i+2);
}

int MaxHeap::GetLargestChildIndex(int i){
  if (data_[2*i+1]>data_[2*i+2]) return (2*i+1);
  else return (2*i+2);
}

int MaxHeap::GetLeft(int i){
  return data_[GetLeftIndex(i)];
}

int MaxHeap::GetRight(int i){
  return data_[GetRightIndex(i)];
}
int MaxHeap::GetParent(int i){
  return data_[GetParentIndex(i)];
}
int MaxHeap::top(){
  

  return data_[0];
}



void MaxHeap::push(int v){
  data_.push_back(v);
  int index = data_.size()-1;
  TrickleUp(index);

}
void MaxHeap::pop(){
  if(data_.size()!= 0){
    data_[0]=data_.back();
    data_.pop_back();
    TrickleDown(0);
  }
}
void MaxHeap::TrickleUp(int i){
  if (i && data_[GetParentIndex(i)]<data_[i]){
    std::swap(data_[i],data_[GetParentIndex(i)]);
    TrickleUp(GetParentIndex(i));
  }

}
/*
void MaxHeap::TrickleDown(int i){
  int left = GetLeftIndex(i);
  int right = GetRightIndex(i);
  int largest = GetLargestChildIndex(i);
  std::swap(data_[i],data_[largest]);
  TrickleDown(largest);
  }
*/
void MaxHeap::TrickleDown(int i)
	{
		int left = GetLeftIndex(i);
		int right =GetRightIndex(i);

		int largest = i;

		if (left < data_.size() && data_[left] > data_[i])
			largest = left;

		if (right < data_.size() && data_[right] > data_[largest])
			largest = right;

		if (largest != i) {
			std::swap(data_[i], data_[largest]);
			TrickleDown(largest);
		}
	}


