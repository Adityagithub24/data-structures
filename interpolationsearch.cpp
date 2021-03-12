#include<iostream>
using namespace std;

int interpolation(int a[],int n,int item)
{
	int f=0,l=n-1,m;
			while(item>=a[f]||item<=a[l])
			{
				m=f+((item-a[f])*(l-f))/(a[l]-a[f]);
				
				if(a[m]==item)
				{
					cout<<"\nItem found at position "<<m+1;
					return m+1;
				}				
				if(a[m]>item)
				l=m-1;
				if(a[m]<item)
				f=m+1;
			}
	return -1;
}

int main()
{
	int n,item;
	cout<<"enter the size of array ";
		cin>>n;int a[n];
		cout<<"Enter array elements\n";
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<"enter item to search";cin>>item;
		int r=interpolation(a,n,item);
		if(r==-1) cout<<"item not found";
		else cout<<"item found at position"<<r;

return 0;
}
