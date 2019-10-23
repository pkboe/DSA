
#include<stdio.h>
int main(){

char name[10];
char sub_name[10];
int len_name=0;
int len_subname=0;
int i=0;
int k=0;

printf("Enter String");
scanf("%s",name);

printf("Enter String to search");
scanf("%s",sub_name);

while(name[len_name]!='\0')
		len_name++;

while(sub_name[len_subname]!='\0')
		len_subname++;


printf("Name Len is %d\n",len_name);	
printf("Name Len is %d\n",len_subname);	

if(len_subname>len_name){
	printf("Not Substring\n");
}
else{
// gescoe\0   == i= 1 2 3 4
// coe  == k     0 1 2

while(i<=len_name){

	if(name[i]==sub_name[k] && name[i]!='\0'){
			k=0;
			while(sub_name[k]==name[i] && sub_name[k]!='\0'){
 				      k++;
				      i++;
				  }
	}
	else
		i++;

}
  	if(k!=len_subname){
				printf("Not Substring");
			}
			else{
				printf("Substirng");
			}


}

   return 0;
}

/*
--------------OUTPUT-----------------
EXAMPLE 1:
Enter String
gescoe
Enter String to search
esc
Name Len is 6
Name Len is 3
Substirng

EXMAPLE 2:
Enter String
gescoe
Enter String to search
esoe
Name Len is 6
Name Len is 4
Not Substring
*/