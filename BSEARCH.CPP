#include<iostream.h>
#include<conio.h>
int Bsearch(int[],int,int);
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
index=Bsearch(arr,n,item);
if(index==-1)
cout<<"The given element could not be found  ";
else
cout<<"Elements found at index are:"<<index<<"\n"<<"Position: "<<index+1;
getch();
}
int Bsearch(int arr[],int size,int item)
{
int beg,last,mid;
beg=0;
last=size-1;
while(beg<=last)
{
mid=(beg+last)/2;
if(item==arr[mid])
return mid;
else if(item>arr[mid])
beg=mid+1;
else
last=mid-1;
}
return -1;
}