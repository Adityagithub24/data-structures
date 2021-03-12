#include<iostream>
using namespace std;
int top=-1;

void display(int stk[])
{
	for(int i=0;i<=top;i++)
	cout<<stk[i]<<" ";
}

void push(int stk[],int n,int item)
{
	if(top==n)
	cout<<"Overflow";
	else
	{
		stk[++top]=item;
		display(stk);
	}
}

void pop(int stk[],int n)
{
	if(top==-1)
	cout<<"underflow";
	else
	{
		int temp=stk[top];
		top--;
		display(stk);
	}
}


int main()
{
	int n,item;
	char choice,c;
	
		char Y,y;
		cout<<"enter size";
		cin>>n;
		int stk[n];
	do
	{
	
		cout<<"ENTER CHOICE\n";
		cout<<"\n1 PUSH\n";
		cout<<"2 POP\n";
		cout<<"3 DISPLAY\n";
		cin>>choice;
		switch(choice){
			case '1':
				cout<<"enter no. to insert";cin>>item;
				push(stk,n,item);
				break;
			case '2':
				pop(stk,n);
				break;
			case '3':
				display(stk);
				break;
			default:
				cout<<"Invalid choice";			
		}
		cout<<"\nDo you want to continue?";
		cin>>c;
	}while((c=='Y')||(c=='y'));
	return 0;
}
