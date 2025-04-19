#include <iostream>
#include <sstream>
using namespace std;

class myqueue{
    public:
    const int size=500;
    int head,tail;
    int* array;
    int count;
    
    myqueue(){
        array=new int[size];
        head=0;
        tail=0;
        count=0;
    }

    bool empty(){
        return count==0;
    }
    void enqueue(int x){
        if(empty()){
            array[tail]=x;
        }
        else{
        array[++tail]=x;
        }
        count++;
    }

    void dequeue(){
        head++;
        count--;
    }

    int front(){
        return array[head];
    }
};

int main(){
    myqueue q;
    myqueue result;
    string s;
    getline(cin,s);
    stringstream ss(s);
    int n;
    while(ss>>n){
        q.enqueue(n);
    }
    int m=q.count;
    for(int i=0;i<m;i++){
        int temp=q.front();
        if(temp%2!=0){
            q.dequeue();
            q.enqueue(temp);
        }
        else{
            q.dequeue();
            result.enqueue(temp);
        }
    }
    while(!q.empty()){
        int temp=q.front();
        result.enqueue(temp);
        q.dequeue();
    }
    //output
    while(!result.empty()){
        int temp=result.front();
        cout<<temp<<" ";
        result.dequeue();
    }
    cout<<endl;
    return 0;
}