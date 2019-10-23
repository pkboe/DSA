/*
Queues are frequently used in computer programming, and a typical example is 
the creation of a job queue by an operating system. If the operating system does not use priorities, 
then the jobs are processed in the order they enter the system. 
Write C++ program for simulating job queue. Write functions to add job and delete job from queue.
*/

#include<iostream>
using namespace std;
#define max 10
struct queue1
{
	
	int front,rear;
	int data[max];
};

class Q
{
	struct queue1 q;
public:
	Q()
	{
		q.front=q.rear=-1;
	}

	int isfull()
	{
		return((max-1==q.rear)?1:0);
	
	}

	int isempty()
	{
		return((q.front==-1 && q.rear==-1)?1:0);
		
	}
   
   void enqueue()
   {
   	if(isfull())
   		cout<<"QUEUE IS FULL";
   	else
   	{
   		if(q.front==-1)
   			q.front++;
   		int x;
   		cout<<"ENTER ELEMENT TO INSERT: ";
   		cin>>x;
        q.data[++q.rear]=x;
   	}
   }

   void delqueue()
   {
   	if(isempty())
   		cout<<"QUEUE IS EMPTY";
   	else if(q.front==q.rear)       //to delete a single remaining element
   		{
   			int p=q.data[q.front];
   			cout<<"DELTED ELEMENT FROM QUEUE IS:"<<p;
   			q.rear=q.front=-1;
   		}
   	else
   	{	
   		int b=q.data[q.front];
   		cout<<"DELTED ELEMENT FROM QUEUE IS:"<<b;
   		++q.front;
   	}
   	cout<<endl;
   }

   void print()
   {
   	if(q.front==-1 &&  q.rear==-1)
   		cout<<"QUEUE IS EMPTY"<<endl;
   	else
   	 {	
   	    cout<<"CURRENT QUEUE IS: ";
   	    for(int i=q.front;i<=q.rear;i++)
   		cout<<q.data[i]<<" ";
        cout<<endl;
     }
   }
};


int main()
{
	Q obj;
  int ch;	
do
{
	cout<<"1.ENTER ELEMENT 2.DELETE ELEMENT 3.PRINT 4.EXIT\n";
	cout<<"ENTER YOUR CHOICE: ";
	cin>>ch;
	switch(ch)
	{
		case 1: obj.enqueue();
		        break;
		case 2: obj.delqueue();
		        break;
		case 3: obj.print();
		        break;                
	}

}while(ch!=4);

 return 0;
}


/*
------------------OUTPUT-------------------------------
1.ENTER ELEMENT 2.DELETE ELEMENT 3.PRINT 4.EXIT
ENTER YOUR CHOICE: 2
QUEUE IS EMPTY
1.ENTER ELEMENT 2.DELETE ELEMENT 3.PRINT 4.EXIT
ENTER YOUR CHOICE: 1
ENTER ELEMENT TO INSERT: 10
1.ENTER ELEMENT 2.DELETE ELEMENT 3.PRINT 4.EXIT
ENTER YOUR CHOICE: 1
ENTER ELEMENT TO INSERT: 20
1.ENTER ELEMENT 2.DELETE ELEMENT 3.PRINT 4.EXIT
ENTER YOUR CHOICE: 1
ENTER ELEMENT TO INSERT: 30
1.ENTER ELEMENT 2.DELETE ELEMENT 3.PRINT 4.EXIT
ENTER YOUR CHOICE: 3
CURRENT QUEUE IS: 10 20 30
1.ENTER ELEMENT 2.DELETE ELEMENT 3.PRINT 4.EXIT
ENTER YOUR CHOICE: 2
DELTED ELEMENT FROM QUEUE IS:10
1.ENTER ELEMENT 2.DELETE ELEMENT 3.PRINT 4.EXIT
ENTER YOUR CHOICE: 2
DELTED ELEMENT FROM QUEUE IS:20
1.ENTER ELEMENT 2.DELETE ELEMENT 3.PRINT 4.EXIT
ENTER YOUR CHOICE: 2
DELTED ELEMENT FROM QUEUE IS:30
1.ENTER ELEMENT 2.DELETE ELEMENT 3.PRINT 4.EXIT
ENTER YOUR CHOICE: 2
QUEUE IS EMPTY
*/
