#include<iostream.h>
#include<conio.h>
int pos(int[],int,int);
void main()
{
int arr[50],item,n,index;
cout<<"Enter the no. of elements of the array  ";
cin>>n;
cout<<"Enter array elements  ";
for(int i=0;i<n;i++)
cin>>arr[i];
char ch='y';
while(ch=='y'||ch=='Y')
{
cout<<"Enter elements to be inserted  ";
cin>>item;
if(n==50)
{
cout<<"Overflow!!";
exit(1);
}
index=pos(arr,n,item);
for(i=n;i>index;i--)
{
arr[i]=arr[i-1];
}
arr[index]=item;
n+=1;
cout<<"Want to insert more elements  ";
