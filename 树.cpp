#include <iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};

class myTree{
    TreeNode* ptr;
    public:
    myTree(int x){
        ptr=new TreeNode(x);
    }

    void create_tree(TreeNode* p){
        char c;
        cin>>c;
        
    }

};

int main(){
    return 0;
}