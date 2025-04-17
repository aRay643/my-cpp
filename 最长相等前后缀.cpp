#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream i("in.txt");
    string s1,s2,s3="";
    i>>s1>>s2;
    int size_1=s1.length();
    int size_2=s2.length();

    int times=min(size_1,size_2);
    for(int i=0;i<times;i++){
        string t1=s1.substr(0,i+1);
        string t2=s2.substr(size_2-i-1,i+1);
        if(t1==t2){
            s3=t1;
        }
    }
    

    if(s3.empty()){
        cout<<0<<endl;
    }
    else{
        cout<<s3<<" ";
        cout<<s3.length();
    }

    return 0;
}