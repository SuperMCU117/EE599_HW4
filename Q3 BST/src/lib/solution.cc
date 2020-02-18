#include "solution.h"



void BST::push(int key){
  root= push_helper(root,key);

}

bool BST::erase(int key){

  root= erase_helper(root,key);
  if(find(key)) return true;
  else return false;

}
bool BST::find(int key){
  root = find_helper (root, key);
  if (root==NULL) return false;
  else return true;


}




