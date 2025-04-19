#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x=-1){
        data=x;
        next=nullptr;
    }
};

class linklist{
    Node* head;
    public:
    linklist(){
        head=new Node;
    }
    void insert_head(int x){
        Node* new_node=new Node(x);
        new_node->next=head->next;
        head->next=new_node;
    }

    void insert_tail(int x){
        Node* new_node=new Node(x);
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=new_node;
    }

    void delete_head(){
        Node* temp=head->next;
        head->next=temp->next;
        delete temp;
    }

    void delete_tail(){
        Node* prev;
        Node* tail;
        if(!empty()){
            tail=head->next;
            prev=head;
        }
        while(tail->next!=nullptr){
            tail=tail->next;
            prev=prev->next;
        }
        prev->next=nullptr;
        delete tail;
    }

    void print(){
        
        Node* temp=head->next;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    bool empty(){
        return head->next==nullptr;
    }
};

int main(){
    linklist l;
    for(int i=0;i<5;i++){
        l.insert_tail(i);
        l.insert_head(i);
    }
    l.print();
    return 0;
}