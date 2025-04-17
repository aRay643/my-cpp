#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct Node{
    int address;
    int data;
    Node* next;
    Node(int p,int d,int n){
        address=p;
        data=d;
        next=nullptr;
    }
};

class list{
    Node* head;
    Node* tail;
    public:
    list(){
        
    }
    //尾插
    void insert_tail(Node* p,int d,Node* n){
        
        
    }
};

void arrange(){}

int main(){
    return 0;
}