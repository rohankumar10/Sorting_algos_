#include<iostream.h>
#include<conio.h>
void sum(int[20][20],int,int);
void main()
{
clrscr();
int arr[20][20];
int y,r;
int i,j;
cout<<"Enter no. rows and columns  ";
cin>>y>>r;
cout<<"Enter arraay elements  ";
for(i=0;i<y;i++)
for(j=0;j<r;j++)
cin>>arr[i][j];
sum(arr,y,r);
getch();
}
void sum(int arr[20][20],int Y,int R)
{
int sum=0;
for(int i=0;i<Y;i++)
for(int j=0;j<R;j++)
{
if(i=j || i>j)
{
sum=sum+arr[i][j];
}
}
cout<<"The sum is  "<<sum;
for(i=0;i<Y;i++)
{
cout<<"\n";
for(j=0;j<R;j++)
{
cout<<arr[i][j]<<"\t";
}
}
}