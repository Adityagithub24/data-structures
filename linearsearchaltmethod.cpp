#include<iostream>
using namespace std;

int ls2(int A[],int n,int item)
{
	int l=0,r=n-1;
	while(l<r)
	{
		if(item==A[l]) return l+1;
		else if(item==A[r]) return r+1;
		else 
		{
		  	l++;
			r--;		
		}
	return -1;
	}
}

int main()
{
	int n,item;
	cout<<"enter size"; cin>>n; int A[n];
	cout<<"enter elements ";
	for(int i=0;i<=n;i++)
	cin>>A[i];
	cout<<"enter the element to search"; cin>>item;
	int r=ls2(A,n,item);
	if(r==-1) cout<<"element not found";
	else
	cout<<"element found at "<<r;
return 0;
}

