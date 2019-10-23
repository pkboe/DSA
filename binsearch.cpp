/*Write C++ program to store roll numbers of student in array who attended training program in random order.
 Write function for-
 a) Searching whether particular student attended training program or not using linear search and sentinel search. 
 b) Searching whether particular student attended training program or not using binary search and Fibonacci search.  */
#include<iostream>
using namespace std;

class Search
{
int n;
int a[50];
public:
void intake()
{
cout<<"HOW MANY VALUES DO YOU WANT TO ENTER"<<endl;
cin>>n;
cout<<"ENTER ROLL NO"<<endl;
for(int i=0;i<n;i++)
  cin>>a[i];
}

   void sort()
   {
    int i,j;
         int temp;
        for(i=0;i<n;i++)
         {
            for(j=0;j<n-i-1;j++)
             {
                if(a[j]>a[j+1])
                {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                }
             }
             
        }
     cout<<"SORTED ROLL NO ARE: ";
     for(int i=0;i<n;i++)
     cout<<a[i]<<" ";  
     cout<<endl;
   }
   
   void sentinel()
   {
    int d,i;
    cout<<"ENTER ROLL NO TO SEARCH: "<<endl;
    cin>>d;

    while(a[i]!=d && i<=n)
    {
      i++;
    }

    if(i<=n)
      cout<<"ATTENDED PROGRAM"<<endl;
    else 
      cout<<"NOT ATTENDE"<<endl;


   }
   
  void linearsearch()
  {
  	int d;
  	cout<<"ENTER ROLL NO TO SEARCH: "<<endl;
  	cin>>d;
     int flag=0;
   for(int i=0;i<n;i++)
     if(a[i]==d)
       flag=1;
       
       if(flag==1)
      cout<<"ATTENDED TRAINING"<<endl;
      else
        cout<<"NOT ATTENDED TRAINING"<<endl;
  }
  
  void binsearch()
  {
  	int d;
  	cout<<"ENTER ROLL NO TO SEARCH: "<<endl;
  	cin>>d;
  int l=0,u=n-1,m;
 
  int flag=0;
   
  while(l<=u)
  {
   m=(l+u)/2;
  if(a[m]==d)
    {
     flag=1;
   break;
    }
  else if(d<a[m])
      u=m-1; 
   else
    l=m+1; 
  
  }
      if(flag==1)
      cout<<"ATTENDED TRAINING"<<endl;
      else
        cout<<"NOT ATTENDED TRAINING"<<endl;
 
  }
};



int main()
{


Search s;
int ch;
do
{
cout<<"1.ENTER ROLL NUMBERS  2.SORT  3.LINEAR SEARCH  4.BINARY SEARCH  5.SENTINAL SEARCH 6.EXIT"<<endl;
cout<<"ENTER YOUR CHOICE: ";
cin>>ch;
switch(ch)
{
	case 1: s.intake();
	        break;
	case 2: s.sort();
            break;
	case 3: s.linearsearch();
	        break;
	case 4: s.binsearch();
	        break; 
  case 5: s.sentinel();
          break;           
	default : cout<<"INVALID CHOICE"<<endl;
}

}while(ch!=6);

return 0;
}

/*
--------------------------------OUTPUT--------------------------------------

1.ENTER ROLL NUMBERS  2.SORT  3.LINEAR SEARCH  4.BINARY SEARCH  5.SENTINAL SEARCH 6.EXIT
ENTER YOUR CHOICE: 1
HOW MANY VALUES DO YOU WANT TO ENTER
6
ENTER ROLL NO
8 2 11 18 7 12
1.ENTER ROLL NUMBERS  2.SORT  3.LINEAR SEARCH  4.BINARY SEARCH  5.SENTINAL SEARCH 6.EXIT
ENTER YOUR CHOICE: 2
SORTED ROLL NO ARE: 2 7 8 11 12 18
1.ENTER ROLL NUMBERS  2.SORT  3.LINEAR SEARCH  4.BINARY SEARCH  5.SENTINAL SEARCH 6.EXIT
ENTER YOUR CHOICE: 5
ENTER ROLL NO TO SEARCH:
18
ATTENDED PROGRAM
1.ENTER ROLL NUMBERS  2.SORT  3.LINEAR SEARCH  4.BINARY SEARCH  5.SENTINAL SEARCH 6.EXIT
ENTER YOUR CHOICE: 4
ENTER ROLL NO TO SEARCH:
7
ATTENDED TRAINING
1.ENTER ROLL NUMBERS  2.SORT  3.LINEAR SEARCH  4.BINARY SEARCH  5.SENTINAL SEARCH 6.EXIT
ENTER YOUR CHOICE: 3
ENTER ROLL NO TO SEARCH:
6
NOT ATTENDED TRAINING

*/