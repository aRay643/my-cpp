#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

class mystr{
    int length;
    char* data;
    public:
    mystr(){
        length=0;
        data=new char[1000];
    }

    void push(char c){
        data[length++]=c;
    }

    int get_size(){
        return length;
    }

    string get_frag(int pos, int len){
        string result;
        for(int i=pos;i<pos+len;i++){
            result.push_back(data[i]);
        }
        return result;
    }
};

int main(){
    ifstream ifs("in.txt");
    mystr s,s1,s2;
    string data_s1,data_s2;

    char c1,c2;
    getline(ifs,data_s1);
    getline(ifs,data_s2);

    // stringstream ss1(data_s1);
    // stringstream ss2(data_s2);

    // while(ss1>>c1){
    //     s1.push(c1);
    // }
    // while(ss2>>c2){
    //     s2.push(c2);
    // }

    for(int i=0;i<data_s1.size();i++){
        s1.push(data_s1[i]);
    }

    for(int i=0;i<data_s2.size();i++){
        s2.push(data_s2[i]);
    }

    int size_2=s2.get_size();
    int size_1=s1.get_size();

    bool match=false;
    int pos;

    for(int i=0;i<size_1-size_2+1;i++){
        string temp=s1.get_frag(i,size_2);
        if(temp==data_s2){
            match=true;
            pos=i;
            break;
        }
    }

    if(match){
        cout<<pos<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    return 0;
}