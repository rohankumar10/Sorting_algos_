#include<iostream.h>
#include<conio.h>
void Merge(int[],int,int[],int,int[]);
void main()
{
clrscr();
int A[20],B[20],C[20],m,n,MN=0;
cout<<"Enter the no. of elements of first array  "<<"\n";
cin>>m;
cout<<"Enter the elements of first array  "<<"\n";
for(int i=0;i<m;i++)
cin>>A[i];
cout<<"Enter the no. of elements of second array  "<<"\n";
cin>>n;
MN=m+n;
cout<<"Enter the elements of second array  "<<"\n";
for(i=0;i<n;i++)
cin>>B[i];
Merge(A,m,B,n,C);
cout<<"The Merged array is  "<<"\n";
for(i=0;i<MN;i++)
cout<<C[i]<<"  ";
getch();
}
void Merge(int A[],int M,int B[],int N,int C[])
{
int p,q,r;
for(p=0,q=N-1,r=0;p<M && q>=0;)
{
if(A[p]<=B[q])C[r++]=A[p++];
else C[r++]=B[q--];
}
if(p<M)
{
while(p<M)
C[r++]=A[p++];
}
else
{
while(q>=0)
C[r++]=B[q--];
}
}
