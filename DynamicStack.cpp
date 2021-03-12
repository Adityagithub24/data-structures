//Dynamic Stack
#include<iostream>
using namespace std;

struct stk
{
	int data;
	stk *nextnode;
};
stk *newnode,*top=NULL,*bottom=NULL,*temp;

int n=0;

void getnode()
{
	newnode=new stk;
	cout<<"Enter element ";
	cin>>newnode->data;
	newnode->nextnode=NULL;
}

void iEmptylist()
{
	getnode();
	top=newnode;
	bottom=newnode;
	n++;
}

traverse()
{
	cout<<"Elements are\n";
	temp=bottom;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->nextnode;
	}
	
}
void push()
{
	getnode();
	top->nextnode=newnode;
	top=newnode;
	n++;
}

void pop()
{
	temp=bottom;
	while(temp->nextnode!=NULL)
	{
		temp=temp->nextnode;
	}
	temp->nextnode=NULL;
	top=temp;
	n--;
}
main()
{
	iEmptylist();
	char c;
	int choice;
	do{
		cout<<"Enter choice\n";
		cout<<"1 -> push\n";
		cout<<"2 -> pop\n";
		cin>>choice;
		switch(choice){
			case 1:{
				push();
				traverse();
				break;
			}
			case 2:{
				pop();
				traverse();
				break;
			}
		}
		cout<<"\nDo you want to continue? ";
		cin>>c;
	}
	while(c=='Y'||c=='y');
}


