#include<iostream>
using namespace std;

void traverse(int A[],int n)
{
	cout<<"The sorted Elements by Shell sort : \n";
	for(int j=0;j<n;j++)
    cout<<A[j]<<"  ";
	cout<<endl;   
}

void shellsort(int A[],int n)
{
	int gap,i,j,temp;
	gap=n/2;
	while(gap>0)
	{
		for(i=gap;i<n;i++)
		{
			j=i;
			temp=A[i];
			while((A[j-gap]>temp)&&(j>=gap))
			{
				A[j]=A[j-gap];
				j=j-gap;
			}
			A[j]=temp;
		}
		gap=gap/2;
	}
	traverse(A,n);
}

int main()
{
	int x,n;
	cout<<"enter the size of array";	cin>>n;  int A[n];
	cout<<"enter the elements of array";
	for(int i=0;i<n;i++)
	cin>>A[i];
	shellsort(A,n);
	return 0;
}
