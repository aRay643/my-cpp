#include <stdio.h>
typedef struct
{
    int n;//盘子数
    char from;//起始柱
    char aux;//辅助柱
    char to;//目标柱
}Hanoi;

void hanoi(int N,char from,char aux,char to)
{
    Hanoi stack[200];
    int top=-1;
    stack[++top]={N,from,aux,to};//存入初始值
    while(top!=-1)//栈不为空
    {
        Hanoi now=stack[top--];//取出栈顶元素
        if(now.n==1)//盘子数为1时
        {
            printf("%c -> %c\n",now.from,now.to);
        }
        else
        {
            /*先将n-1个盘子从from挪到aux,再将from上的1个盘子挪到to上，最后把aux上的n-1个盘子挪到to上*/
            //因为是堆栈，先进后出，因此需要倒着压进堆栈
            stack[++top]={now.n-1,now.aux,now.from,now.to};//把aux上的n-1个盘子挪到to上
            stack[++top]={1,now.from,now.aux,now.to};//将from上的1个盘子挪到to上
            stack[++top]={now.n-1,now.from,now.to,now.aux};//将n-1个盘子从from挪到aux
        }
    }
}
int main()
{
    int N;
    scanf("%d",&N);
    char from='a';
    char aux='b';
    char to='c';
    hanoi(N,from,aux,to);
    return 0;
}
