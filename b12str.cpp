/*
12.
Write C++ program for string operations- copy, concatenate, check substring, equal, reverse and length
SEA-71
STRiNG MANUPILATIONS
*/
#include<iostream>
using namespace std;

class manupilation
{
public:

int findlen(char str[])
{
int l=0,i;
for(i=0;str[i]!='\0';i++)
{
l++;
}
return l;
}

void concat(char str1[],char str2[])
{
int l1=findlen(str1);
int l2=findlen(str2);
for(int i=l1;i<l1+l2;i++)
{
str1[i]=str2[i-l1];
}
cout<<"concatenated string is: "<<str1<<endl;
}

int compstr(char str1[],char str2[])
{
int cout=0;
int l1=findlen(str1);
int l2=findlen(str2);
if(l1!=l2)
{return 1;}
for(int i=0;i<l1;i++)
{
if(str1[i]!=str2[i])
cout++;
}
if(cout==0)
return 0;
else
return 1;
}

char copystr(char d[],char s[])
{
int i,l3;
int l1=findlen(s);
int l2=findlen(d);

if(l1>l2)  // THIS IF ELSE IS USED TO FIND GREATER LENGTH FOR THE COPY OPERATION
l3=l1;
else
l3=l2;

for(i=0;i<l3;i++)
{
d[i]=s[i];
}
d[i]='\0';
cout<<"DESTINATION STRING IS:"<<d<<endl;
}

void reverse(char str[])
{
int l1=findlen(str);
int i,j=l1-1,temp=0;
for(i=0;i<j;i++,j--)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
}
cout<<"REVERESED OF 1ST STRING IS :"<<str<<endl;
}

};


int main()
{
manupilation obj;
int ch;
char str1[20],str2[20];
cout<<"enter 1st string\n";
cin>>str1;
cout<<"enter 2nd string\n";
cin>>str2;
do
{
cout<<"1.LENGTH 2.CONCATENATE 3.COMPARE 4.COPY  5.REVERSE 6.EXIT"<<endl;
cout<<"ENTER YOUR CHOICE"<<endl;
cin>>ch;
switch(ch)
{
case 1:  cout<<"length of 1st string is:"<<obj.findlen(str1)<<endl;
             cout<<"length of 2nd string is:"<<obj.findlen(str2)<<endl;
          break;
case 2:   obj.concat(str1,str2);
           break;
case 3:  if(obj.compstr(str1,str2)==0)
         {
          cout<<"STRINGS ARE EQUAL"<<endl;
         }
         else
         cout<<"STRINGS NOT EQUAL"<<endl;
           break;
case 4:   obj.copystr(str2,str1);
           break;
case 5 : obj.reverse(str1);
         break;
}
}while(ch!=6);
return 0;
}


/*
---------------OUTPUT-------------------
enter 1st string
shashank
enter 2nd string
gecoe

1.LENGTH 2.CONCATENATE 3.COMPARE 4.COPY  5.REVERSE 6.EXIT
ENTER YOUR CHOICE
3
STRINGS NOT EQUAL

1.LENGTH 2.CONCATENATE 3.COMPARE 4.COPY  5.REVERSE 6.EXIT
ENTER YOUR CHOICE
1
length of 1st string is:8
length of 2nd string is:5

1.LENGTH 2.CONCATENATE 3.COMPARE 4.COPY  5.REVERSE 6.EXIT
ENTER YOUR CHOICE
2
concatenated string is: shashankgecoe

1.LENGTH 2.CONCATENATE 3.COMPARE 4.COPY  5.REVERSE 6.EXIT
ENTER YOUR CHOICE
5
REVERESED OF 1ST STRING IS :eocegknahsahs

1.LENGTH 2.CONCATENATE 3.COMPARE 4.COPY  5.REVERSE 6.EXIT
ENTER YOUR CHOICE
5
REVERESED OF 1ST STRING IS :shashankgecoe

1.LENGTH 2.CONCATENATE 3.COMPARE 4.COPY  5.REVERSE 6.EXIT
ENTER YOUR CHOICE
4
DESTINATION STRING IS:shashankgecoe

1.LENGTH 2.CONCATENATE 3.COMPARE 4.COPY  5.REVERSE 6.EXIT
ENTER YOUR CHOICE
1
length of 1st string is:13
length of 2nd string is:13
*/
