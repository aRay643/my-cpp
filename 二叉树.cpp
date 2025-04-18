// #include <iostream>
// #include <vector>
// using namespace std;

// struct TreeNode{
//     char data;
//     TreeNode* lchild;
//     TreeNode* rchild;
//     TreeNode(char c):data(c),lchild(nullptr),rchild(nullptr){}

// };



// //创建二叉树
// void CreateTree(TreeNode*& Tree){
//      char c;
//      cin>>c;
//      if(c=='*'){
//         Tree=nullptr;
//         return;
//      }
//      else{
//         Tree=new TreeNode(c);
//         CreateTree(Tree->lchild);
//         CreateTree(Tree->rchild);
//      }
// }

// void Pre_Traversal(TreeNode*& Tree,vector<char>& v){
//     if(Tree==nullptr){
//         return;
//     }
//     else{
//         v.push_back(Tree->data);
//         Pre_Traversal(Tree->lchild,v);
//         Pre_Traversal(Tree->rchild,v);
//     }
// }

// void In_Traversal(TreeNode*& Tree,vector<char>& v){
//     if(Tree==nullptr){return;}
//     else{
//         In_Traversal(Tree->lchild,v);
//         v.push_back(Tree->data);
//         In_Traversal(Tree->rchild,v);
//     }
// }

// void Post_Traversal(TreeNode*& Tree,vector<char>& v){
//     if(Tree==nullptr){return;}
//     else{
//         Post_Traversal(Tree->lchild,v);
//         Post_Traversal(Tree->rchild,v);
//         v.push_back(Tree->data);
//     }
// }

// int main(){

//     vector<char> v_pre,v_in,v_post;
//     TreeNode* Tree;
//     CreateTree(Tree);
//     Pre_Traversal(Tree,v_pre);
//     In_Traversal(Tree,v_in);
//     Post_Traversal(Tree,v_post);

//     for(char c:v_pre){
//         cout<<c<<" ";
//     }
//     cout<<endl;

//     for(char c:v_in){
//         cout<<c<<" ";
//     }
//     cout<<endl;

//     for(char c:v_post){
//         cout<<c<<" ";
//     }
//     cout<<endl;

//     return 0;
// }


 // Definition for a binary tree node.
 #include <vector>
 using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
  right(right) {}
  };
 
class Solution {
    public:
    vector<int> v;
    void preorderTraversal(TreeNode* root) {
        
        if(root==nullptr){
            return;
        }
        else{
            v.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
    }
    
    };