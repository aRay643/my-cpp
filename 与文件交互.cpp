#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream o("/Users/Ray_/Desktop/test.txt");
    // ifstream o("test.txt");
    o<<"Hello,this is Mac!I made a revise."<<endl;
    o.close();

    ifstream i("/Users/Ray_/Desktop/test.txt");
    string s;
    getline(i,s);
    cout<<s<<endl;
    return 0;
}