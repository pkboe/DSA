/*
Write C/C++ program for storing matrix. Write functions for
a) Check whether given matrix is upper triangular or not
b) Compute summation of diagonal elements
c) Compute transpose of matrix
d) Add, subtract and multiply two matrices
*/

#include<iostream>
using namespace std;

class mat
{
  int mat1[20][20];
int mat2[20][20];
int r[20][20];
int rm[20][20];
int r1,r2,c1,c2,i,j;
int k,sum,sum1;
int t[20][20];
public:
  mat()
  {
  rm[20][20]={0}; //you may get waring for this statement
  sum=0;
  sum1=0;
  }

  void input()
  {
    cout<<"enter size of first matrix(r c)"<<endl;
    cin>>r1>>c1;
    cout<<"enter elements of first matrix"<<endl;
      for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++) 
          {
            cin>>mat1[i][j];
    
          }
    }
    cout<<"enter size of second matrix(r c)"<<endl;
    cin>>r2>>c2;
    cout<<"enter elements of second matrix"<<endl;
        for(i=0;i<r2;i++)
        {
          for(j=0;j<c2;j++)
          {
            cin>>mat2[i][j];
    
          }
        }
  }


void add()
{
  //--------------add--------------------
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++) 
    {
    r[i][j]=mat1[i][j]+mat2[i][j];
    
    }
}
  cout<<"add of matrix is="<<endl;
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++) 
    {
    cout<<r[i][j]<<" ";    
    }
    cout<<endl;
  }
}


   void sub()
   {
     //----------------sub-------------------

      for(i=0;i<r1;i++)
      {
          for(j=0;j<c1;j++) 
          {
          r[i][j]=mat1[i][j]-mat2[i][j];
          
          }
      }
      cout<<"sub of matrix is="<<endl;
      for(i=0;i<r1;i++)
      {
        for(j=0;j<c1;j++) 
        {
        cout<<r[i][j]<<" ";    
        }
        cout<<endl;
      }
   }

   void multi()
   {
    //------------------------multi--------------
         if(c1==r2){

		for(i=0;i<r1;i++){
		   for(j=0;j<c2;j++){
			rm[i][j]=0;
		for(k=0;k<c1;k++){
		rm[i][j]=rm[i][j]+(mat1[i][k]*mat2[k][j]);
            }
	  }
	}	
    }
      cout<<"multi of matrix is="<<endl;
      for(i=0;i<r1;i++)
      {
          for(j=0;j<c1;j++) 
          {
            cout<<rm[i][j]<<" ";
          }
           cout<<endl;
      }

   }


   void daig_add()
   {
     //---------------------1st DAIGONAL ADDITION------------
          cout<<endl;
          for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)
        {
          if(i==j)
          sum=sum+mat1[i][j];
        }
        }
        cout<<"add of 1st daigonal elements[1st matrix] is="<<sum<<endl;

//---------------------2nd DAIGONAL ADDITION-------
  

      for(i=0;i<r1;i++){
      for(j=0;j<c1;j++)
      {
        if(i+j==r1-1)
        sum1=sum1+mat1[i][j];
      }
      }
      cout<<"add of 2nd daigonal elements[1st matrix] is="<<sum1<<endl<<endl;

   }


   void transpose()
   {
     //-------------------transpose-----------

      cout<<"transpose of 1st matrix ="<<endl;
      for(i=0;i<r1;i++)
      {
          for(j=0;j<c1;j++) 
          {
          t[i][j]=mat1[j][i];
          
          }
      }
      for(i=0;i<r1;i++)
      {
          for(j=0;j<c1;j++) 
          {
          cout<<t[i][j]<<" ";    
          }
          cout<<endl;
      }
   }


  void up_tri()
  {
    //---------------------upper traingular--------------
      cout<<"upper triangular of 1st matrix ="<<endl;

      if(r1==c1)
      {
           for(i=0;i<r1;i++)
             {
        
              for(j=0;j<c1;j++)
                 {
                    if(j>=i)
                     {
                       cout<<mat1[i][j]<<" ";
                     }
                     else
                     {
                     cout<<"0"<<" ";
                     }
                 }
                 cout<<endl;
             }
      }
  }


   void low_tria()
   {

//---------------------lowe traingular--------------
      cout<<"lower triangular of 1st matrix ="<<endl;

      if(r1==c1)
      {
           for(i=0;i<r1;i++)
             {
        
              for(j=0;j<c1;j++)
                 {
                    if(i>=j)
                     {
                       cout<<mat1[i][j]<<" ";
                     }
                     else
                     {
                     cout<<"0"<<" ";
                     }
                 }
                 cout<<endl;
             }
      }
   }

};



int main()
{
mat ob;
int ch;
do
{
   cout<<"\n1.ENTER_MAT  2.ADD_MAT  3.SUB_MAT \n4.MULTI_MAT  5.ADD_DIA  6.UPPER_TRIA \n7.LOW_TRIA   8.TRANPOSE 9.EXIT\n"; 
   cout<<"ENTER YOUR CHOICE: ";
   cin>>ch;
   switch(ch)
   {
    case 1:ob.input();
           break;
    case 2:ob.add();
           break;       
    case 3:ob.sub();
           break;
    case 4:ob.multi();
           break;      
     case 5:ob.daig_add();
           break;
     case 6:ob.up_tri();
           break;
     case 7:ob.low_tria();
           break;
    case 8:ob.transpose();
           break;                            
  }

}while(ch!=9);

return 0;
}
/*
-------------OUTPUT----------------

1.ENTER_MAT  2.ADD_MAT  3.SUB_MAT 
4.MULTI_MAT  5.ADD_DIA  6.UPPER_TRIA 
7.LOW_TRIA   8.TRANPOSE 9.EXIT
ENTER YOUR CHOICE: 1
enter size of first matrix(r c)
3 3
enter elements of first matrix
1 1 1
1 1 1
1 1 1
enter size of second matrix(r c)
3 3
enter elements of second matrix
1 1 1
1 1 1
1 1 1

1.ENTER_MAT  2.ADD_MAT  3.SUB_MAT 
4.MULTI_MAT  5.ADD_DIA  6.UPPER_TRIA 
7.LOW_TRIA   8.TRANPOSE 9.EXIT
ENTER YOUR CHOICE: 2
add of matrix is=
2 2 2 
2 2 2 
2 2 2 

1.ENTER_MAT  2.ADD_MAT  3.SUB_MAT 
4.MULTI_MAT  5.ADD_DIA  6.UPPER_TRIA 
7.LOW_TRIA   8.TRANPOSE 9.EXIT
ENTER YOUR CHOICE: 3
sub of matrix is=
0 0 0 
0 0 0 
0 0 0 

1.ENTER_MAT  2.ADD_MAT  3.SUB_MAT 
4.MULTI_MAT  5.ADD_DIA  6.UPPER_TRIA 
7.LOW_TRIA   8.TRANPOSE 9.EXIT
ENTER YOUR CHOICE: 4
multi of matrix is=
3 3 3 
3 3 3 
3 3 3 

1.ENTER_MAT  2.ADD_MAT  3.SUB_MAT 
4.MULTI_MAT  5.ADD_DIA  6.UPPER_TRIA 
7.LOW_TRIA   8.TRANPOSE 9.EXIT
ENTER YOUR CHOICE: 5

add of 1st daigonal elements[1st matrix] is=3
add of 2nd daigonal elements[1st matrix] is=3


1.ENTER_MAT  2.ADD_MAT  3.SUB_MAT 
4.MULTI_MAT  5.ADD_DIA  6.UPPER_TRIA 
7.LOW_TRIA   8.TRANPOSE 9.EXIT
ENTER YOUR CHOICE: 6
upper triangular of 1st matrix =
1 1 1 
0 1 1 
0 0 1 

1.ENTER_MAT  2.ADD_MAT  3.SUB_MAT 
4.MULTI_MAT  5.ADD_DIA  6.UPPER_TRIA 
7.LOW_TRIA   8.TRANPOSE 9.EXIT
ENTER YOUR CHOICE: 7
lower triangular of 1st matrix =
1 0 0 
1 1 0 
1 1 1 

1.ENTER_MAT  2.ADD_MAT  3.SUB_MAT 
4.MULTI_MAT  5.ADD_DIA  6.UPPER_TRIA 
7.LOW_TRIA   8.TRANPOSE 9.EXIT
ENTER YOUR CHOICE: 8
transpose of 1st matrix =
1 1 1 
1 1 1 
1 1 1 

*/





