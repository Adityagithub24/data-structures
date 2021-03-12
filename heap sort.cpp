#include<iostream>
using namespace std;
int traverse(int a[],int n)
{
	cout<<"resultant array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
int swap(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
int heapify(int i,int a[],int n,int &hss)
{
	int max,l,r;
	max=i;
	 l=2*i+1;
	 r=2*i+2;
	 if(a[max]<a[l]&&l<=hss)
	 max=l;
	 if(a[max]<a[r]&&r<=hss)
	 max=r;
	 if(i!=max)
	 {
	 	swap(a[i],a[max]);
	 	heapify(max,a,n,hss);
	 }
}
int builtheap(int a[],int n,int hss)
{
	for(int i=(n/2)-1;i>=0;i--)
	{
		heapify(i,a,n,hss);
	}
}
int hs(int a[],int n)
{
	 int hss=n-1;
	builtheap(a,n,hss);
	while(hss>=1)
	{
		swap(a[0],a[hss]);
		hss--;
		heapify(0,a,n,hss);
	}
}
int main()
{
	int n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter the elements of array"<<endl;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	hs(a,n);
	traverse(a,n);
}
