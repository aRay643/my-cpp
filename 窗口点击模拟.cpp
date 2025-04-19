#include <iostream>
#include <vector>
#include <list>
using namespace std;

bool in_window(int x,int y,vector<int>v){
    if(x>=v[1]&&x<=v[3]&&y>=v[2]&&y<=v[4]){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int n;
    cin>>n;
    list<int>sequence;
    for(int i=1;i<=n;i++){
        sequence.push_back(i);
    }
    vector<vector<int>> windows;
    while(n--){
        int num;
        int a,b,c,d;
        cin>>num>>a>>b>>c>>d;
        windows.push_back({num,a,b,c,d});
    }
    int m;
    cin>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        vector<int>temp_windows;
        for(int i=0;i<n;i++){
            if(in_window(x,y,windows[i])){
                temp_windows.push_back(windows[i][0]);
            }
        }

        int flag=0;

        for(int i:sequence){
            for(int j:temp_windows){
                if(j==i){
                    flag=i;
                    break;
                }
            }
        }

        if(flag){
            sequence.remove(flag);
            sequence.push_front(flag);
        }


    }



    for(int i:sequence){
        cout<<i<<" ";
    }
    return 0;
}