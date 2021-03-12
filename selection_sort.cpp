#include<iostream>
using namespace std;

void traverse(int A[],int n)
{
	cout<<"sorted array";
	for(int i=0;i<n;i++)
	cout<<A[i];
}

void swap(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}

void selsort(int A[],int n)
{
		int sm;
		for(int i=0;i<n-2;i++)
		{
			sm=i;
			for(int j=1+i;j<n-1;j++)
			{
				if(A[j]<A[sm])
				sm=j;
			}
			if(sm!=i)
			swap(A[sm],A[i]);
		}
	traverse(A,n);	
}

int main()
{
	int x,n;
	cout<<"enter the size of array";	cin>>n;  int A[n];
	cout<<"enter the elements of array";
	for(int i=0;i<n;i++)
	cin>>A[i];
	selsort(A,n);
	return 0;
}
