
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
	cout<<"\nno of nodes are\n"<<num<<"\n";
	temp=start;
	while(temp!=NULL)
	{
		cout<<"  "<<temp->data;
		temp=temp->next;
	}
}

void getnode()
{
	newn=new node;
	cout<<"\nenter no.\n";
	cin>>newn->data;
	newn->next=NULL;
}

void iaf()
{
	
	newn->next=start;
	start=newn;	
	num++;
	traverse();
}

void ial()
{
	end->next=newn;
	end=newn;
	num++;
	traverse();
}

void iap()
{
	int p;
	cout<<"\nenter position"; cin>>p;
	if(p<1 || p>num+1) cout<<"\ninvalid position";
	else if(p>=1 && p<=num+1)
	{
		if(p==1) iaf();
		else if(p==num+1) ial();
		else
		{ 	temp=start;
			for(int i=1;i<=p-2;i++)
			{
				temp=temp->next;
			}
			newn->next=temp->next;
			temp->next=newn;
			num++;	traverse();
		}	
	}
}


void dff()
{	if(start==end)
	end=NULL;
	start=start->next;
	num--;
	traverse();
}

void dfl()
{
		if(start==end)
		{
			start=NULL;
			end=NULL;
		}
		else
		{
			temp=start;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=NULL;
			end=temp;
			num--;
		}
	traverse();
}

void dfp()
{
	if(start==end)
	{
		start=NULL;
		end=NULL;
	}
	else
	{
		int pos;
		cout<<"\n enter possition";
		cin>>pos;
		temp=start;
		for(int i=1;i<pos-2;i++)
		{
			temp=temp->next;
		}
		temp->next=temp->next->next;
		num--;
	}
	traverse();
}

int main()
{
	int x,y,z;
    char ch;
    do
    {
		cout<<"1.insert\n2.delete\n";
    	cin>>x;
      	if(x==1)
    	{
    			getnode();
				if(newn==NULL)
    			cout<<"\t\toverflow";
    		else if(start==NULL)
    			{
    				start=newn;
    				end=newn;
    				num++;
				}
			else
			{
				cout<<"\n1.insert at first\n2.insert at last\n3.insert at possition";
				cin>>y;
				switch(y)
				{
					case 1:iaf();
							break;
					case 2:ial();
							break;
					case 3:iap();
							break;
					default: cout<<"\nwronge choice entered";				
				}
			}
		}
		
		else if(x==2)
		{
			if(start==NULL&&end==NULL)
			cout<<"\ndeletion not possible";
			else
			cout<<"\n1.delete from first\n2.delete from last\n3.delete fro position";
			cin>>z;
			switch(z)
			{
				case 1:dff();
						break;
				case 2:dfl();
						break;
				case 3:dfp();
						break;
				default : cout<<"\ninvalid choice";				 		
			}
		}
			cout<<"\ndo you want to cotinue...(y/n)";
			cin>>ch;
	}		
	while(ch=='Y'||ch=='y');
	return 0;
 }

