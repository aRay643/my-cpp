#include <iostream>
#include <string>
#include <stack>
#include <cmath>
using namespace std;

//flip string2int stack
string flip(string s0){
    stack<char> char_stack;
    string result;
    for(int i=0;i<s0.size();i++){
        char_stack.push(s0[i]);
    }
    while(!char_stack.empty()){
        result.push_back(char_stack.top());
        char_stack.pop();
    }
    return result;
}

//is_prime both
bool is_prime(string s0) {
    int num=stoi(s0);
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    if(is_prime(s)&&is_prime(flip(s))) cout<<"yes"<<endl;
    else{cout<<"no"<<endl;}
    return 0;
}