//Mac传出的文件1
#include <iostream>
using namespace std;
int n,P[200],hashTable[200]={false};
//当前处理的第index号位 
void generateP(int index){
	//假设index-1项已经处理完，正准备填第index项 
	 if(index==n+1){//递归边界，已经处理完了n项 
	 	for(int i=1;i<=n;i++){
	 		cout<<P[i];
		 } 
		 cout<<endl;
		 return;
	 }
	 //枚举1~n,判断哪个数没有填到P中，找到并将其填入P中index的位置 
	 for(int i=1;i<=n;i++){
	 	if(hashTable[i]==false){
	 		P[index]=i;
	 		hashTable[i]=true;//记i已经记在P中
			generateP(index+1);//处理下一个位置
			hashTable[i]=false;//还原状态 
		 }
	 } 
}
int main(){	
	n=3;
	generateP(1);//从index为1的位置开始 
	return 0;
} 
