#include<iostream>
using namespace std;

int binsearch(int item,int A[],int n)
{
	int l=0,r=n-1,m;
	while(l<=r)
	{
		m=(l+r)/2;
		if(item==A[m])return m+1;
		else if(item>A[m]) l=m+1;
		else r=m-1;
	}
	return -1;
}

int main()
{
	int x,n,item,num;
	cout<<"enter size";	cin>>n; int A[n];
	cout<<"enter the elements of array ";
	for (int i=0;i<=n;i++)
	cin>>A[i];
	cout<<"enter the element to search"; cin>>item;
	int r=binsearch(item,A,n);
	if(r==-1)cout<<"itemnot found";
	else cout<<"item found at position "<<r;
	return 0;
}
