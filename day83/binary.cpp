#include<iostream>
#include<vector>
using namespace std;

class node{
 public:
 int data;
 node* left;
 node* right;

 node(int val){
     data=val;
     left=right=NULL;
 }
};

static int idx=-1;
node* bulidTree(vector<int> preorder){
     idx++;
     if (preorder[idx]==-1)
     {
          return NULL;
     }

     node* root=new node(preorder[idx]);
     root->left= bulidTree(preorder);
     root->right= bulidTree(preorder);

     return root;
}

int main(){
     vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

     node* root=bulidTree(preorder);
     cout<<root->data<<endl;
     cout<<root->left->data<<endl;
     cout<<root->right->data<<endl;
     cout<<root->right->left->data<<endl;
     cout<<root->right->right->data<<endl;




     return 0;
}