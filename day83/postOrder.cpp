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

//postorder
void postOrder(node* root){
     if (root==NULL)
     {
          return;
     }
     
     postOrder(root->left);
     postOrder(root->right);
     cout<<root->data<<" ";
}

int main(){
     vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

     node* root=bulidTree(preorder);
     postOrder(root);
     cout<<endl;

     return 0;
}