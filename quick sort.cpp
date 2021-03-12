#include<iostream>
using namespace std;
int traverse(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
int partition(int a[],int l,int r)
{
	int pivot=a[r];
	int i=l-1;
	for(int j=l;j<r;j++)
	{
		if(pivot>a[j])
		{
			swap(a[++i],a[j]);
		}
	}
	swap(a[++i],a[r]);
	return i;
}
int QS(int a[],int l,int r)
{
	if(l<r)
	{
		int pos=partition(a,l,r);
		QS(a,l,pos-1);
		QS(a,pos+1,r);
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
	QS(a,l,r);
	traverse(a,n);
	
}

