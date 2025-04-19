#include <iostream>
using namespace std;

// class mystr{
//     public:
//     const int size=100;
//     int length;
//     char* data;

//     mystr(){
//         data=new char[size];
//         length=0;
//     }
//     void push(char c){
//         data[length++]=c;
//     }

//     void pop(){
//         --length;
//     }

//     char get(int a){
//         return data[a];
//     }

//     void print(){
//         int temp=0;
//         while(temp!=length){
//             cout<<data[temp]<<" ";
//             temp++;
//         }
//         cout<<endl;
//     }

// };

//链串

struct Node{
    char c;
    Node* next;
    Node(char c0=' '):c(c0),next(nullptr){}
};

class mystr{
    Node* head;
    Node* pre;
    Node* tail;
    public:
    mystr(){
        head=new Node;
        pre=tail=head;
    }

    void push(char c){
        Node* new_node=new Node(c);
        if(head->next!=nullptr){
            tail->next=new_node;
            tail=new_node;

        }
        else{
            tail->next=new_node;
            tail=new_node;
            pre=pre->next;

        }
    }

    void pop(){
        Node* temp=tail;
        tail=pre;
        delete temp;
    }

    void print(){
        Node* temp=head->next;
        while(temp!=nullptr){
            cout<<temp->c<<" ";
            temp=temp->next;
        }
    }
    
    char find(int x){
        unsigned int temp=x;
        Node* temp_ptr=head->next;
        while(temp--){
            temp_ptr=temp_ptr->next;
            return temp_ptr->c;
        }
    }


    //链串的查询
};

int main(){
    mystr s;
    s.push('m');
    s.push('a');
    s.push('c');
    cout<<s.find(1)<<endl;
    s.pop();
    s.print();
}