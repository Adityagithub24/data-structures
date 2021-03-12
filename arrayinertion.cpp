#include<iostream>
using namespace std;
void traverse(int a[],int num)
{
	cout<<"array after insertion"<<endl;
	for(int i=0;i<=num-1;i++)
	{
		cout<<a[i]<<endl;
	}
}
void insertfirst(int a[],int &num, int item)
{
	for(int i=num-1;i>=0;i--)
	{
		a[i+1]=a[i];
		a[0]=item;
		
	}num++;
	traverse(a,num);
}
void insertlast(int a[],int &num,int item)
{
	a[num]=item;
	num++;
	traverse(a,num);
}
void insertatpos(int a[],int pos,int &num,int item)
{
	for(int i=num-1;i>=pos;i--)
	{
		a[i+1]=a[i];
		a[pos]=item;
		
	}num++;
		traverse(a,num);
}
int main()
{
	int n,pos,item;
	char choice;
	cout<<"Enter size ofarray";
	cin>>n;
	int a[n];
	int num=0;
	do
	{
		if(num==n)
		{
			cout<<"over flow"<<endl;
		}
		else if(num==0)
		{
			cout<<"Enter element";
			cin>>a[0];
			num++;
		} 
		else
		{
			cout<<"Enter postion";
			cin>>pos;
			pos--;
		
			if(pos<0 || pos>num)
			{
				cout<<"invalid position";
			}
			else
			{
				cout<<"Enter item";
				cin>>item;
				if(pos==0)
				{
					insertfirst(a,num,item);
				}
				else if(pos==num)
				{
					insertlast(a,num,item);
				}
				else
				{
					insertatpos(a,pos,num,item);		
				}
			}
		}
		cout<<"do you want to continue (y/n)";
		cin>>choice;
	}
	while(choice=='y' || choice=='Y');
	return 0;
}
