#include <iostream>
using namespace std;

class CircularQueue{
    int head;
    int tail;
    int* array;
    int count;
    int capacity;

    public:

    CircularQueue(int k){
        head=0;
        tail=-1;
        capacity=k;
        array=new int[k];
    }
    
    bool empty(){
        return count==0;
    }

    bool full(){
        return count==capacity;
    }

    void enqueue(int x){

        if(full()){
            head=(head+1)%capacity;
            tail=(tail+1)%capacity;
            array[tail]=x;
        }
        else{
            tail=(tail+1)%capacity;
            array[tail]=x;
            count++;
        }
    }

    int dequeue(){
        if(empty()){
            return -1;
        }
        else{
            int temp=array[head];
            head=(head+1)%capacity;
            count--;
            return temp;
        }
        
    }

    int get_oldest(){
        if(empty()){
            return -1;
        }
        else{
            return array[head];
        }
    }

    int get_latest(){
        if(empty()){
            return -1;
        }
        else{
            return array[tail];
        }
    }
};

int main(){

    int k,m;
    cin>>k>>m;
    CircularQueue queue(k);
    for(int i=0;i<m;i++){
        string s;
        cin>>s;
        if(s[0]=='e'){
            int n;
            cin>>n;
            queue.enqueue(n);
        }
        else if(s=="get_oldest"){
            cout<<queue.get_oldest()<<endl;
        }
        else if(s=="get_latest"){
            cout<<queue.get_latest()<<endl;
        }
        else{
            cout<<queue.dequeue()<<endl;
        }
    }

    return 0;
}