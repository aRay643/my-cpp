#include <iostream>
#include <list>
#include <queue>
using namespace std;

void get_and_print(int n){
    list<int> l;
    queue<int> q;
    while(n){
        q.push(n);
        for(int i=0;i<n;i++){
            int temp=q.front();
            q.pop();
            q.push(temp);
        }
        n--;
    }
    while(!q.empty()){
        l.push_front(q.front());
        q.pop();
    }
    //print
    while(!l.empty()){
        cout<<l.front()<<" ";
        l.pop_front();
    }
    cout<<endl;
}

int main(){
    int m;
    cin>>m;
    while(m--){
        int a;
        cin>>a;
        get_and_print(a);
    }
    return 0;
}