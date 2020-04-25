#include<iostream.h>
#include<conio.h>
int Lsearch(int[],int,int);
void main()
{
clrscr();
int arr[50],index,n,item;
cout<<"Enter the desired array size  ";
cin>>n;
cout<<"Enter the array elements  ";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"Enter elements to be searched for  ";
cin>>item;
index=Lsearch(arr,n,item);
if(index==-1)
cout<<"The given element could not be found  ";
else
cout<<"Elements found at index are:"<<index<<"\n"<<"Position: "<<index+1;
getch();
}
int Lsearch(int arr[],int size,int item)
{
for(int i=0;i<size;i++)
{
if(arr[i]==item)
return i;
}
return -1;
}
