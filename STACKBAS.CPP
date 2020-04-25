#include<iostream.h>
#include<conio.h>
#include<process.h>
int push(int[],int&,int);
void display(int[],int);
int pop(int [],int&);
const int size=20;
void main()
{
clrscr();
int stack[size],top=-1,item,press;
char ch='y';
while(ch=='y'||ch=='Y')
{
cout<<"enter element to be inserted:  ";
cin>>item;
press=push(stack,top,item) ;
if(press==-1)
{
cout<<"overflow:  ";
exit(1);
}
cout<<"the stack is :  "     ;
display(stack,top);

cout<<"\n"<<"do you want to enter more:  "   ;
cin>>ch;
}
cout<<" \n" <<"deletion starts:  ";
int thor,ITEM;
ch='y';
while(ch=='y'||ch=='Y')
{
thor=pop(stack,top);
if(thor==-1)
{
cout<<"overflow:  ";
exit(1);
}
else{
cout<<"\n"<<"element deleted is:  "<<thor;
cout<<"\n"<<"the stack is :  "     ;
display(stack,top);
}
cout<<"\n"<<"do you want to delete more:  "   ;
cin>>ch;
}
getch();
}
int push(int stack[],int&top,int ele)
{
if(top==size-1)return-1 ;
else
{
top++     ;
stack[top]=ele;
}
return 0;
}
void display(int stack[],int top)
{
if(top==-1)return;
cout<<stack[top]<<"     ";
for(int i=top-1;i>=0;i--)
cout<<stack[i]<<"   ";
}
int pop(int stack[],int&top)
{
int ret;
if(top==-1)return-1;
else
{
ret=stack[top];
top--;
}
return ret;
}

