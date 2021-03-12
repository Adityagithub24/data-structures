#include<iostream>
using namespace std;
int main()
{
	int i,n,A[n],l=-1,sl=-1;
	cout<<"Enter size";
	cin>>n;
	cout<<"Enter the values";
	for(i=0;i<=n-1;i++)
	{
		cin>>A[i];
	}
	cout<<"finding largest and secound largest\n\n";
	for(int j=0;j<=n-1;j++)
	{
		if(l<A[j])
		{
			sl=l;
			l=A[j];
		}
		else if(sl<A[j])
		{
			sl=A[j];
		}
		
	}
	cout<<"secound largest=\t\n"<<sl;
	cout<<"largest=\t"<<l;
return 0;	
}

