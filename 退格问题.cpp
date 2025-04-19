#include <iostream>
using namespace std;

class mystack{
    int top;
    char* array;
    const int capacity=1000;

    public:
    mystack(){
        top=-1;
        array=new char[capacity];
    }

    void push(char c){
        array[++top]=c;
    }

    void pop(){
        top--;
    }

    void print(){
        int temp=0;
        while(temp<=top){
            cout<<array[temp];
            temp++;
        }
    }

};

int main(){
    string s;
    cin>>s;
    mystack st;

    for(char c:s){
        if(c=='#'){
            st.pop();
        }
        else{
            st.push(c);
        }
    }

    st.print();


    return 0;
}