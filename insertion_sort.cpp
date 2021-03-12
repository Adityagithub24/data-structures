#include<iostream>
using namespace std;

void traverse(int A[],int n)
{
	cout<<"sorted array";
	for(int i=0;i<n;i++)
	cout<<A[i];
}

void inssort(int A[],int n)
{
		int sm;
		for(int i=1;i<n-1;i++)
		{
			int t=A[i];
			int j=i-1;
			while(j>=0&&A[j]>=t)
			{
				A[j+1]=A[j];
				j--;
					
			}
			A[j+1]=t;
		
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
    inssort(A,n);
	return 0;
}
