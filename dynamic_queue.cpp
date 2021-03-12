//dynamic queue
#include<iostream>
using namespace std;

struct qnode
{
	int data;
	qnode *nextnode;
};

int n=0;
qnode *newnode,*front=NULL,*rear=NULL,*temp;

void getnode()
{
	newnode=new qnode;
	cout<<"Enter element ";
	cin>>newnode->data;
	newnode->nextnode=NULL;
}

void iEmptyq()
{
	getnode();
	rear=newnode;
	front=newnode;
}

void enqueue()
{
	getnode();
	rear->nextnode=newnode;
	rear=newnode;
	n++;
}

void dequeue()
{
	if(front==rear)
	{
		front=NULL,rear=NULL;
		n--;
		cout<<"Your list is empty\n";
	}
	else
	{
		front=front->nextnode;
		n--;
	}	
	
}
void traverse(){
	temp=front;
	cout<<"Elements are\n";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->nextnode;
	}
}
main()
{
	iEmptyq();
	char c;
	int choice;
	do{
		cout<<"Enter choice\n";
		cout<<"1 -> Enqueue\n";
		cout<<"2 -> Dequeue\n";
		cin>>choice;
		switch(choice){
			case 1:{
				enqueue();
				traverse();
				break;
			}
			case 2:{
				dequeue();
				traverse();
				break;
			}
		}
		cout<<"\nDo you want to continue? ";
		cin>>c;
	}
	while(c=='Y'||c=='y');
}
