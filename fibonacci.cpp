/*
FIBONACCI SEARCH
*/

#include<iostream>
using namespace std;
void fab(int *a,int start,int end,int *fib,int index,int item);

void fab(int *a,int start,int end,int *fib,int index,int item)
{
int i,mid;
mid=start+fib[index-2];
if(item==a[mid])
cout<<"item found\n";

else if(item==a[start])
cout<<"item found\n";

else if(item==a[end])
cout<<"item found\n";

else if(mid==start || mid==end)
{
cout<<"item not found\n";
return;
}
else if(item>a[mid])
   fab(a,mid,end,fib,index-1,item);
   else
    fab(a,start,mid,fib,index-2,item);
}
int main()
{
int fib[21];
int i,n,a[]={1,5,6,8,11,12,16,18,20,22,23,29,34,39,41,43,47,52,62,78};  //ENTER SORTED VALUES

fib[0]=0;
fib[1]=1;
i=1;
while(fib[i]<20)
{
i++;
//cout<<i<<" ";
fib[i]=fib[i-1]+fib[i-2];
//cout<<fab[i]<<endl;
}
cout<<" enter element to search: ";
cin>>n;
fab(a,0,19,fib,i,n);           


  return 0;
  }


/*
----------------OUTPUT-----------------
 enter element to search: 52
item found


 enter element to search: 8
item found

 enter element to search: 79
item not found

*/