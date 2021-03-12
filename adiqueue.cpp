#include <iostream>
using namespace std;

void traverse(int Q[],int &r,int &f,int &num)
{
	for(int i=f;i<=r-1;i++)
	cout<<Q[i]<<"\n";	
}

void ENQ(int Q[],int n,int item,int &r,int &f,int &num)
{
	if(r==n)
	cout<<"overflow";
	else
	{
		Q[r]=item;
		r++;
		num++;

		traverse(Q,r,f,num);
	}
}

void DEQ(int Q[],int n,int item,int r,int f,int num)
{
	if(r==f)
	cout<<"underflow";
	else
	{
		f++;
		num--;
		traverse(Q,r,f,num);
	}
}

int main()
{
	int n;
	cout<<"enter size";cin>>n;
	int Q[n];
	int f=0,r=0,num=0,item;
	char ch1;
	int ch;
	do
	{
		cout<<"enter your choice\n";
		cout<<"\t\t 1.insertion\n";
		cout<<"\t\t 2.deletion\n";
		cout<<"\t\t 3.display\n";
		
		cin>>ch;
		switch(ch)
		{
			case 1:
					cout<<"enter the element to be inserted\n";
					cin>>item;
						 ENQ(Q,n,item,r,f,num);
					break;
			case 2:
					DEQ(Q,n,item,r,f,num);
					break;
			case 3:
					traverse(Q,r,f,num);
					break;
			default:
					cout<<"invalid choice";
					exit;
					break;
		}
		cout<<"do you want to conti...y/n";
		cin>>ch1;
	}
	while(ch1=='y'||ch1=='Y');
	return 0;
}
