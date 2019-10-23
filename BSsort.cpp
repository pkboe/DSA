/*NAME: SHASHANK 
  YEAR/DIVISION/ROLLNO= SE A 71  
wite C++ program to store first year percentage of students in array. 
Write function for sorting array of floating point numbers in ascending order using
 a)Selection Sort  b) Bubble sort and display top five scores.*/

#include<iostream>
using namespace std;

class marks
{
  float temp;
  int i,j,n;
  
 public:      
void bsort(float a[],int n)
{
         
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
    topper(a,n);    
}

void topper(float a[],int n)
{
cout<<"TOP SCORES ARE SCORE: ";
for(int i=n-1;i>=0;i--)
cout<<a[i]<<" ";
cout<<endl;
}


void ssort(float a[],int n)
{

 for(int i=0;i<n-1;i++)
 {
  int min=i;
    for(j=i+1;j<n;j++)
     {
       if(a[j]<a[min])
       {
        min=j;
       }
   
    }
  temp=a[i];
  a[i]=a[min];
  a[min]=temp;
 }
topper(a,n);
}


};



int main()
{
marks obj;

int ch,ch1,n;
float a[n];
 cout<<"ENTER NO OF STUDENTS :";
          cin>>n;
          for(int i=0;i<n;i++)
          {
           cout<<"ENTER PERCENTAGE OF STUDENT "<<i+1<<":";
           cin>>a[i];
           }

do
{	
cout<<"\nENTER YOUR CHOICE\n";
cout<<" 1.DO SORTING  2.EXIT"<<endl;
cin>>ch;

switch(ch)
{

  
   case 1:cout<<"ENTER YOUR CHOICE"<<endl;
          cout<<"1.BUBBLE SORT 2.SELECTION SORT"<<endl;
          cin>>ch1;
          switch(ch1)
          {
             case 1: obj.bsort(a,n); break;
             case 2: obj.ssort(a,n); break;
             default : cout<<"INVALID CHOICE"<<endl;
          }

         break;
      
   default: cout<<"INVALID CHOICE"<<endl;   

}

}while(ch!=2);

return 0;
}

/*
-----------------OUTPUT------------------

ENTER NO OF STUDENTS :5
ENTER PERCENTAGE OF STUDENT 1:60.33
ENTER PERCENTAGE OF STUDENT 2:90.44
ENTER PERCENTAGE OF STUDENT 3:94.84
ENTER PERCENTAGE OF STUDENT 4:88.62
ENTER PERCENTAGE OF STUDENT 5:77.77

ENTER YOUR CHOICE
 1.DO SORTING  2.EXIT
1
ENTER YOUR CHOICE
1.BUBBLE SORT 2.SELECTION SORT
2
TOP SCORES ARE SCORE: 94.84 90.44 88.62 77.77 60.33

ENTER YOUR CHOICE
 1.DO SORTING  2.EXIT
1
ENTER YOUR CHOICE
1.BUBBLE SORT 2.SELECTION SORT
1
TOP SCORES ARE SCORE: 94.84 90.44 88.62 77.77 60.33
*/