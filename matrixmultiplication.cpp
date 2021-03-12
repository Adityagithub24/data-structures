#include<iostream>
using namespace std;
int main()
{
	int m1,n1,m2,n2;
	cout<<"ENter the rows of matrix 1";
	cin>>m1;
	cout<<"Enter colomns of matrix 1";
	cin>>n1;
	int x[m1][n1];
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
	cout<<"ENter the rows of matrix 2";
	cin>>m2;
	cout<<"Enter colomns of matrix 2";
	cin>>n2;
	int y[m2][n2];
	cout<<"enter elements of matrix 2";
	for(int i=0;i<m2;i++)
	{
		for(int j=0;j<n2;j++)
		{
			cin>>y[i][j];
		}
	}
	cout<<"matrix is =";
	for(int i=0;i<m2;i++)
	{
		for(int j=0;j<n2;j++)
		{
			cout<<y[i][j];
		}
	cout<<" \n";
	}
	int z[m1][n2];
	if(n1!=m2)
	{
	cout<<"multiplication not possible";
	}
	else
	{
		for(int i=0;i<=m1-1;i++)
		{
			for(int j=0;j<=n1-1;j++)
			{
				for(int k=0;k<=n2-1;k++)
				{
					z[i][k]=z[i][k]+(x[i][j]*y[j][k]);
				}
			}
		}
	}
		for(int i=0;i<=m1-1;i++)
		{
			for(int k=0;k<=n2-1;k++)
				{
					cout<<z[i][k];
				}
			cout<<endl;
		}
return 0;
}

