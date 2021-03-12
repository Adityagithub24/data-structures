#include<iostream>
using namespace std;
void traverse(int A[],int n)
{
	cout<<"array is";
	for(int i=0;i<=n;i++)
	cout<<A[i]<<"\t";
}
void swap(int &x,int &y)
{
	int temp;
	temp=x;	x=y; y=temp;
}
void smartbubble(int A[],int n)
{   int s=0;
	int pas,com;
	for(pas=0;pas<=n-2;pas++)
	{
		for(com=0;com<=n-pas-2;com++)
		{
			if(A[com]>A[com+1])
			{
			swap(A[com],A[com+1]);
			s=1;
			}
		}
		if(s==0)
		break;
	}
     traverse(A,n);
}

int main()
{
	int n;
	cout<<"enter size ";	cin>>n;	int A[n];
	cout<<"enter elements";
	for(int i=0;i<=n-1;i++)
	cin>>A[i];
	smartbubble(A,n);
	return 0;
}
