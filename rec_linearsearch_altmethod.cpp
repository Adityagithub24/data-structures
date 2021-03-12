#include<iostream>
using namespace std;

int recles(int A[],int n,int item,int l,int r)
{
	if(r<l) return -1;
		if(item==A[l]) return l+1;
		else if(item==A[r]) return r+1;
		else recles(A,n,item,l+1,r-1);
}

int main()
{
	int n,item;
	cout<<"enter size";cin>>n;int A[n];
	
	for(int i=0;i<n;i++)cin>>A[i];
	
	cout<<"enter element to search";cin>>item;
	int r=recles(A,n,item,0,n-1);
	if(r==-1)
	cout<<"element not found";
	else
	cout<<"found at"<<r;
	return 0;
	
}

