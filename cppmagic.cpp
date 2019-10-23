#include<iostream>
using namespace std;
int main()
{
int r,c,i,j,radd=0,cnt=0,flag=0,prsum=0,sum=0;
int m[20][20];
cout<<"enter size of matrix(r c)\n";
cin>>r>>c;
cout<<"enter elements of matrix:\n";

for(i=0;i<r;i++)
{
  for(j=0;j<r;j++)
   {
      cin>>m[i][j];
    if(m[i][j]<=r*c)
     cnt++;
   } 

}
if(cnt==r*c)
cout<<endl;
else
cout<<"NOT A MAGIC MATRIX\n";

if(cnt==r*c)
{
   for(i=0;i<r;i++)
    {
       for(j=0;j<r;j++)
        {
	  radd=radd+m[i][j];
        } 
	  if(i==0)
	  {
	   prsum=radd;
	  }
	  else if(prsum!=radd)
	     { flag=1;}
	radd=0;
   }
	if(flag==1)
	cout<<"NOT A MAGIC MATRIX\n";
      else
     {
//---------------daigonal-----------
	for(i=0;i<r;i++)
	{
	sum=sum+m[i][i];
	}
	if(prsum==sum)
        {
	cout<<"ITS A MAGIC MATRIX\n";
	}
        else
	cout<<"NOT A MAGIC MATRIX\n";
	}      

   }


return 0;
}

/*
----------------OUTPUT------------------
EXAMPLE 1:	
enter size of matrix
5 5
enter elements of matrix
15 8 1 24 17
16 14 7 5 23
22 20 13 6 4
3 21 19 12 10
9 2  25 18 11
ITS A MAGIC MATRIX


EXAMPLE 2:
enter size of matrix
3 3
enter elements of matrix
1 1 1
1 1 1
1 1 1
ITS A MAGIC MATRIX

EXAMPLE 3:
enter size of matrix
3 3
enter elements of matrix
1 2 1
1 1 1
3 1 1
NOT A MAGIC MATRIX
*/
