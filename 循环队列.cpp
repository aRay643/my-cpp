#include <iostream>
using namespace std;

class myqueue{
    int k;
    int head;
    int tail;
    int* array;
    int count;
    public:
    myqueue(int capa){
        k=capa;
        array=new int[k];
        head=0;
        tail=-1;
        count=0;
    }

    bool full(){
        return count==k;
    }
    void enqueue(int x){
        if(full()){
            dequeue();
            enqueue(x);
        }
        tail=(tail+1)%k;
        array[tail]=x;
    }
    bool empty(){
        return count==0;
    }

    void dequeue(){
        if(!empty()){
            ++tail;
        }
    }

    void print(){
        int temp=head;
        while(temp!=tail){
            cout<<array[temp]<<" ";
            temp=(temp+1)%k;
        }
        cout<<array[temp];
    }
};

int main(){
    myqueue q(3);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.print();
    return 0;
}