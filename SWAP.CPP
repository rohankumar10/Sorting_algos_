#include<iostream.h>
#include<conio.h>
void swap(int[20][20],int,int);
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
swap(arr,y,r);
getch();
}
void swap(int arr[20][20],int Y,int R)
{
int swap;
for(int i=0;i<Y;i++)
for(int j=0;j<R;j++)
if(i==0)
{
swap=arr[0][j];
arr[0][j]=arr[1][j];
arr[1][j]=swap;
}
for(i=0;i<Y;i++)
{
cout<<"\n";
for(j=0;j<R;j++)
cout<<arr[i][j]<<"\t";
}
}


