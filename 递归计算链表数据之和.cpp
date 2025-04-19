#include <iostream>
#include <list>
using namespace std;

int sum(list<int> l0){
    if(l0.empty()){
        return 0;
    }
    else{
        list<int> temp=l0;
        temp.pop_front();
        return l0.front()+sum(temp);
    }
}

int main(){
    list<int> l;
    for(int i=1;i<=10;i++){
        l.push_back(i);
    }
    cout<<sum(l)<<endl;

    return 0;
}