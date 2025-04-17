#include <iostream>
using namespace std;

//BF算法
// int match(string f, string s){
//     int i=0,j=0;
//     while(i<f.length()&&j<s.length()){
//         if(f[i]==s[j]){
//             i++;
//             j++;
//         }
//         else{
//             i=i-j+1;
//             j=0;
//         }
//     }
//     if(j==s.length()){
//         return i-j;
//     }
//     else {
//         return -1;
//     }
// }

//KMP算法

int match(string f, string s){
    //next数组
    int* next=new int[f.length()];
    next[0]=0;
    for(int i=1;i<f.length();i++){
        if(next[i-1]==0){
            if(f[i]==f[0]){
                next[i]=1;
            }
            else{
                next[i]=0;
            }
        }
        else{
            int temp=next[i-1]-1;
            
        }
    }


    //比对部分
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<match(s1,s2)<<endl;

}

