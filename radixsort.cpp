#include<iostream>
using namespace std;
int countsort(int a[],int n,int d)
{
	int count[10]={0};
	int output[n];
	for(int i=0;i<=n-1;i++)
	{
		count[(a[i]/d)%10]++;
	}
	
	for(int i=1;i<=9;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(int i=n-1;i>=0;i--)
	{
		output[--count[(a[i]/d)%10]]=a[i];
		
	}
	for(int i=0;i<=n-1;i++) a[i]=output[i];
	for(int i=0;i<n;i++ )
	cout<<output[i]<<" ";
	cout<<endl;
	
}
int getmax(int a[],int n)
{
	int l=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
		}
	}
	return l;
	
}
int radix(int a[],int n)
{
	int max=getmax(a,n);
	
	for(int d=1;max/d>0;d=d*10)
	{
		countsort(a,n,d);
	}
	
}
int main()
{
	int n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	radix(a,n);
	
}
