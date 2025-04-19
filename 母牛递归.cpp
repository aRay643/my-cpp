//in.txt
#include <iostream>
#include <fstream>
using namespace std;

int get_num(int x){
    int NumberInEachYear[55];
    NumberInEachYear[0]=2;
    NumberInEachYear[1]=3;
    NumberInEachYear[2]=4;
    for(int i=3;i<x;i++){
        NumberInEachYear[i]=NumberInEachYear[i-1]+NumberInEachYear[i-3];
    }
    return NumberInEachYear[x-2];
}

int main(){
    ifstream ifs("in.txt");
    int n;
    ifs>>n;
    cout<<get_num(n)<<endl;
    return 0;
}