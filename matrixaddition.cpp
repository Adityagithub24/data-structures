#include<iostream>
using namespace std;
int main()
{
	int m1,n1;
	cout<<"enter the rows of matrix 1\n";
	cin>>m1;
	cout<<"Enter colomns of matrix 1\n";
	cin>>n1;
	int x[m1][n1],y[m1][n1],z[m1][n1];
	cout<<"enter elements of matrix 1";
	for(int i=0;i<m1;i++)
	{
		for(int j=0;j<n1;j++)
		{
			cin>>x[i][j];
		}
	}
	cout<<"matrix is =";
	for(int i=0;i<m1;i++)
	{
		for(int j=0;j<n1;j++)
		{
			cout<<x[i][j];
		}
	cout<<"\n";
	}
	cout<<"enter elements of matrix 2";
	for(int i=0;i<m1;i++)
	{
		for(int j=0;j<n1;j++)
		{
			cin>>y[i][j];
		}
	}
	cout<<"matrix is =";
	for(int i=0;i<m1;i++)
	{
		for(int j=0;j<n1;j++)
		{
			cout<<y[i][j];
		}
	cout<<"\n";
	}
	for(int i=0;i<m1;i++)
	{
		for(int j=0;j<n1;j++)
		{
			z[i][j]=x[i][j]+y[i][j];
		}
	}
	cout<<"ADDITION IS=";
	for(int i=0;i<m1;i++)
	{
		for(int j=0;j<n1;j++)
		{
			cout<<"\t"<<z[i][j];
		}
		cout<<"\n";
    }
	
return 0;
}

