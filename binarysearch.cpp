#include<iostream>
using namespace std;

int BS(int A[],int n,int item)
{
	int l=0,r=n-1,m;
	while(l<=r)
	{
		m=(l+r)/2;
		if(item==A[m]) return m+1;
		else if(item>A[m])  l=m+1;
		else r=m-1;
	}
	return -1;
}

int main()
{
	int n,item;
	cout<<"enter size";cin>>n;int A[n];
	cout<<"enter elements ";
	for(int i=0;i<n;i++)
	cin>>A[i];
	cout<<"enter element to search";cin>>item;
	int r=BS(A,n,item);
	if(r==-1)
	cout<<"element not found";
	else
	cout<<"found at"<<r;
	return 0;
}

