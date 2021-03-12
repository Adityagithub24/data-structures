#include<iostream>
using namespace std;

void traverse(int Q[],int n,int f,int num)
{   int j;
	if(num==0)
	cout<<"empty queue";
	else
	j=f+1;
	for(int i=0;i<num;i++)
	{
		cout<<Q[j];
		j=(j+1)%n;
	}
}

void enqueue(int Q[],int n,int &f,int &r,int &num)
{int item; 
    cout<<"enter item to insert";
    cin>>item;
    if(num==n) cout<<"overflow";
    else
    {
    	r=(r+1)%n;
    	Q[r]=item;
    	num++;
	}
	traverse(Q,n,f,num);
	
}

void dequeue(int Q[],int n,int &f,int &r,int &num)
{
	if(num==0) cout<<"underflow";
	else
	{
		f=(f+1)%n;
		f--;
		num--;
	}
	traverse(Q,n,f,num);
}

int main()
{
  int n,num=0,f,r;
  int ch;char ch2;
  cout<<"size of array";
  cin>>n;
  int Q[n];
  f=-1;
  r=-1;
  do{
  
  		cout<<"1.insertion in queue\n2.deletion in queue\n3.traverse";
  		cin>>ch;
  			switch(ch)
  			{
  				case 1:enqueue(Q,n,f,r,num);
  						break;
  				case 2:dequeue(Q,n,f,r,num);
		  				break;
				case 3:traverse(Q,n,f,num);
						break;  		
				default:cout<<"wronge choice entered";		  		
  			};
  		cout<<"\ndo you want to continue...(y/n)";
  		cin>>ch2;
  	}
	while(ch2=='y'||ch2=='Y');
	return 0;
}

