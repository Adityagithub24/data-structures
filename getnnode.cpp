#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
}
*start=NULL,*end=NULL,*temp,*newn;

int num=0;

void traverse()
{
	temp=start;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}

void getnode()
{
	newn=new node;
	cout<<"enter no.";
	cin>>newn->data;
	newn->next=NULL;
}

void iaf()
{
	
	getnode();
	newn->next=start;
	start=newn;	
	num++;
	traverse();
}

void ial()
{
	
	getnode();
	end->next=newn;
	end=newn;
	num++;
	traverse();
}

void iap()
{	
	getnode();
	int p;
	cout<<"enter position"; cin>>p;
	if(p<1||p>num+1) cout<<"invalid position";
	else if(p==1) iaf();
	else if(p==num+1) ial();
	else
	{
		for(int i=1;i<p-2;i++)
		{
			temp=temp->next;
			newn->next=temp->next;
			temp->next=newn;
			num++;
		}
	}
	traverse();
	
}

int main()
{
	int x,y;
    char ch;
    do
    {
		cout<<"1.insert\n2.delete";
    	cin>>x;
    	if(x==1)
    	{
    		getnode();
    		if(newn==NULL)
    			cout<<"overflow";
    		else if(start==NULL)
    			{
    				start=newn;
    				end=newn;
    				num++;
				}
			else
			{
				cout<<"1.insert at first\n2.insert at last\n3.insert at possition";
				cin>>y;
				switch(y)
				{
					case 1:iaf();
							break;
					case 2:ial();
							break;
					case 3:iap();
							break;
					default: cout<<"wronge choice entered";				
				}
			}
		}
	
	cout<<"do you want to cotinue...(y/n)";
	cin>>ch;
	}while(ch=='Y'||ch=='y');
	return 0;
}
