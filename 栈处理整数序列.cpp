#include <iostream>
#include <sstream>
using namespace std;
//文件输入输出暂不考虑
//满
//空
//入栈正常
//出栈正常
class mystack{
    const int capacity=20;
    int top;
    int count=0;
    int* array;
    public:
    mystack(){
        array=new int[30];
        top=-1;
    }
    
    void push(int x){
        array[++top]=x;
        count++;
    }

    void pop(){
        top--;
        count--;
    }

    bool empty(){
        return top==-1;
    }

    bool full(){
        return count==capacity;
    }

    int get_top(){
        return array[top];
    }
};

int main(){
    mystack s;
    string seq;
    getline(cin,seq);
    stringstream ss(seq);
    int n;
    while(ss>>n){
        if(n!=-1){
            if(s.full()){
                cout<<999<<endl;
            }
            else {
                s.push(n);
            }
        }
        else {
            if(s.empty()){
                cout<<"-999"<<endl;
            }
            else{
                cout<<s.get_top()<<endl;
                s.pop();
            }
        }
    }
    return 0;
}