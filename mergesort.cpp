#include<iostream>
using namespace std;
int traverse(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void merge(int a[],int l,int m,int r)
{
	int n1=m-l+1;
	int n2=r-m;
	int max=10000;
	int L[n1+1],R[n2+1];
	for(int i=0;i<n1;i++)
	{
		L[i]=a[i+l];
	}
	L[n1]= max;
	for(int i=0;i<n2;i++)
	{
		R[i]=a[i+m+1];
	}
	R[n2]=max;
	int i=0;
	int j=0;
	for(int  k=l;k<=r;k++)
	{
		if(L[i]<R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
	}
}
int MS(int a[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		MS(a,l,m);
		MS(a,m+1,r);
		merge(a,l,m,r);
	}
}


int main()
{
	int n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int l=0;
	int r=n-1;
	MS(a,l,r);
	traverse(a,n);
}

