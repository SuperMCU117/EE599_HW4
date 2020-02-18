#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

struct TreeNode{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x):val(x),left (NULL),right(NULL){}
  };



class BST{
  public:
  //TreeNode* root;
  
  BST(){root=NULL;};
  /*BST(std::vector<int> initial_values={1,2,3,4,5,6,7}){
    
    for (int n : initial_values){
    push(n);
    }
  };*/
  ~BST(){root = makeEmpty(root);};
  

  void push (int key);
  bool find (int key);
  bool erase (int key);
  
  //TreeNode* makeEmpty(TreeNode* root){};
   
  
  private:
  TreeNode *root;
  TreeNode* findMin (TreeNode* root){
  if(root == NULL)
    return NULL;
  else if(root->left == NULL)
    return root;
  else
    return findMin(root->left);

}

  TreeNode* findMax (TreeNode* root){
   if(root == NULL)
            return NULL;
    else if(root->right == NULL)
            return root;
    else
            return findMax(root->right);

}


  TreeNode* find_helper(TreeNode* root, int key){
    if(root == NULL)
      return NULL;
    else if(key < root->val)
      return find_helper(root->left, key);
    else if(key > root->val)
      return find_helper(root->right, key);
    else
      return root;

  }
  TreeNode* push_helper(TreeNode* root, int key){
    if(root == NULL)
        {
            root = new TreeNode(key);
            root->val = key;
            root->left = root->right = NULL;
        }
        else if(key < root->val)
            root->left = push_helper(root->left,key );
        else if(key > root->val)
            root->right = push_helper(root->right,key);
        return root;


  }
  TreeNode* erase_helper(TreeNode* root, int key){
    TreeNode* temp;
    if(root == NULL)
        return NULL;
    else if( key < root->val)
        root->left = erase_helper(root->left,key);
    else if(key > root->val)
        root->right = erase_helper(root->right,key);
    else if(root->left && root->right)
    {
        
        temp = findMin(root->right);
        root->val = temp->val;
        root->right = erase_helper(root->right,root->val);
    }
    else
    {
        temp = root;
        if(root->left == NULL)
            root = root->right;
        else if(root->right == NULL)
            root = root->left;
        delete temp;
    }

    return root;
    }

    TreeNode* makeEmpty(TreeNode* t) {
        if(t == NULL)
            return NULL;
        {
            makeEmpty(t->left);
            makeEmpty(t->right);
            delete t;
        }
        return NULL;
    }

  

};
#endif