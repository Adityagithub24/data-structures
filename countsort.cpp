#include<iostream>
using namespace std;

int countsort(int a[],int n,int max)
{
	int count[max+1]={0};
	int output[n];
	for(int i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for(int i=0;i<=max;i++)
	{
		count[i]+=count[i-1];
	}
	for(int i=n-1;i>=0;i--)
	{
		output[--count[a[i]]]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<output[i]<<" ";
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
	int max=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<"max :"<<max<<endl;
	countsort(a, n, max);
	
	
}
