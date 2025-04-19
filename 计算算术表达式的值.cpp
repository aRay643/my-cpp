#include <iostream>
#include <stack>
#include <string>
using namespace std;

string trans(string exp){
    int len = exp.length();
    string postexp;
    stack<char> sign_stack;
    int i=0;
    while(i<len){
        char ch=exp[i];
        if(ch=='('){
            sign_stack.push(ch);
        }
        else if(ch==')'){
            while(!sign_stack.empty()&&sign_stack.top()!='('){
                char temp=sign_stack.top();
                postexp+=temp;
                sign_stack.pop();
                
            }
            sign_stack.pop();
        }
        else if(ch=='+'||ch=='-'){
            while(!sign_stack.empty()&&sign_stack.top()!='('){
                char temp=sign_stack.top();
                postexp+=temp;
                sign_stack.pop();
            }
            sign_stack.push(ch);
        }
        else if(ch=='*'||ch=='/'){
            while(!sign_stack.empty()&&sign_stack.top()!='('&&(sign_stack.top()=='*'||sign_stack.top()=='/')){
                char temp=sign_stack.top();
                postexp+=temp;
                sign_stack.pop();
            }
            sign_stack.push(ch);
        }
        else if(ch>='A'&&ch<='z'){
            int value=ch;
            string temp=to_string(ch);
            temp+='#';
            postexp+=temp;
        }
        else{
            string temp="";
            while(ch>='0'&&ch<='9'){
                temp+=ch;
                i++;
                if(i<len){
                    ch=exp[i];
                }
                else break;
            }
            i--;
            postexp+=temp;
            postexp+='#';
        }
        i++;
       } 
       while(!sign_stack.empty()){
        postexp+=sign_stack.top();
        sign_stack.pop();
       } 
       return postexp;
}
//计算部分
    int calculate(string postexp){
        stack<int> num_stack;
        int i=0;
        int d;
        while(i<postexp.length()){
            char ch=postexp[i];
            switch(ch){
                case('+'):{
                    int a=num_stack.top(); num_stack.pop();
                    int b=num_stack.top(); num_stack.pop();
                    num_stack.push(b+a);
                    
                    break;
                }
                case('-'):{
                    int a=num_stack.top(); num_stack.pop();
                    int b=num_stack.top(); num_stack.pop();
                    num_stack.push(b-a);
                  
                    break;
                }
                case('*'):{
                    int a=num_stack.top(); num_stack.pop();
                    int b=num_stack.top(); num_stack.pop();
                    num_stack.push(b*a);
                    
                    break;
                }
                case('/'):{
                    int a=num_stack.top(); num_stack.pop();
                    int b=num_stack.top(); num_stack.pop();
                    num_stack.push(b/a);
                    
                    break;
                }
                default:{
                    d=0;
                    while(i<postexp.length()&&ch>='0'&&ch<='9'){
                        
                        int value=ch-'0';
                        d=d*10+value;
                        i++;
                        ch=postexp[i];
                    }
                    num_stack.push(d);
                    break;
                }
            }
            i++;
        }
        return num_stack.top();
    }
int main(){
    int m;
    cin>>m;
    while(m--){
        string s1,s2;
        cin>>s1>>s2;
        int r_1=calculate(trans(s1));
        int r_2=calculate(trans(s2));
        if(r_1==r_2) cout<<"TRUE"<<endl;
        else cout<<"FALSE"<<endl;
    }
    return 0;
}

