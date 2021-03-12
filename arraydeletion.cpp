

#include<iostream>
using namespace std;
void traverse(int a[],int num)
{
	cout<<"array after deletion";
	for(int i=0;i<=num-1;i++)
	{
		cout<<a[i]<<endl;
	}
}
void delfirst(int a[],int &num)
{
	for(int i=0;i<=num-2;i++)
	{
		a[i]=a[i+1];
	}
	num--;
	traverse(a,num);
}
void dellast(int a[],int &num)
{
	num--;
	traverse(a,num);
}
void delpos(int a[],int pos,int &num)
{
	for(int i=pos;i<=num-2;i++)
	{
		a[i]=a[i+1];
		a[i+1]=a[i+2];
	}
	num--;
	traverse(a,num);
	if(num==0)
	cout<<"underflow";
}
int main()
{
	int n,pos,item;
	char choice;
	cout<<"Enter size ofarray";
	cin>>n;
	int a[n];
	int num;
	num=0;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
		num++;
	}
	do
	{
		if(num==0)
		{
			cout<<"under flow";
			return 0;
		}
		 
		else
		{
			cout<<"Enter postion";
			cin>>pos;
			pos--;
		
			if(pos<0 || pos>=num)
			{
				cout<<"invalid position";
			}
			else
			{
				if(pos==0)
				{
					delfirst(a,num);
				}
				else if(pos==num-1)
				{
					dellast(a,num);
				}
				else
				{
					delpos(a,pos,num);		
				}
			}
			
		}
		cout<<"do you want to continue (y/n)";
		cin>>choice;
	}
	while(choice=='y' || choice=='Y');
	return 0;
}

