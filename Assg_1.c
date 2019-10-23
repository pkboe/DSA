/*
In Second year Computer Engineering class of M students, set A of students play cricket and set B of students play badminton. Write C/C++ program to find and display-
i. Set of students who play either cricket or badminton or both
ii. Set of students who play both cricket and badminton
iii. Set of students who play only cricket
iv. Set of students who play only badminton
v. Number of students who play neither cricket nor badminton
(Note- While realizing the set duplicate entries are to avoided)
*/
#include<stdio.h>
#include<string.h>

struct studentdata{


			char name[20];
			int type;
// 1=cri 2 =bad 3=not c not b

};

int main(){
	int m;
	int i=0;
	int j=0;
	int both=0;
	int cricket=0;
	int badminton=0;
	int none=0;
	int total=0;
	int flag=0;
	char temp[20];
	printf("Enter total student\n");
	scanf("%d",&m);

	struct studentdata stud[m]; 
		
	for(i=0;i<m;i++){

			printf("Enter name\n");
			scanf("%s",temp);

			flag=0;
			for(j=0;j<i;j++){
					
					if(strcmp(stud[j].name,temp)==0)  //TO AVOID DUPLICATE ENTRIES
							flag=1;

			}	

			if(flag==1){
				printf("Name Already Exist\n");
				i--;
			}
			else{
				strcpy(stud[i].name,temp);
				


			printf("Enter choice as 1.cricket 2. badminton 3.Both 4.None \n");
			scanf("%d",&stud[i].type);
		}
	}

	printf("**************Student DATA *******************\n");
	for(i=0;i<m;i++){

			printf("Enter name %s \n",stud[i].name);
			printf("choice as %d\n",stud[i].type);
			
	}



// Set of students who play both cricket and badminton 
for(i=0;i<m;i++){

	if(stud[i].type==3){
			both++;
	}
}

printf("Set of students who play both cricket and badminton  %d\n",both);

//Set of students who play only cricket 
for(i=0;i<m;i++){

	if(stud[i].type==1){
			cricket++;
	}
if(stud[i].type==2){
			badminton++;
	}

if(stud[i].type==4){
			none++;
	}

if(stud[i].type!=4){
			total++;
	}


}

printf("\n\nSet of students who play only cricket   %d\n",cricket);

printf("\n\nSet of students who play only badminton   %d\n",badminton);

printf("\n\nNumber of students who play neither cricket nor badminton   %d\n",none);

printf("\n\nSet of students who play either cricket or badminton or both   %d\n",total);




	
	return 0;
}

/*
--------------OUTPUT---------------
Enter total student
6
Enter name
aaa
Enter choice as 1.cricket 2. badminton 3.Both 4.None
1

Enter name
aaa
Name Already Exist

Enter name
bbb
Enter choice as 1.cricket 2. badminton 3.Both 4.None
2

Enter name
ccc
Enter choice as 1.cricket 2. badminton 3.Both 4.None
3

Enter name
ddd
Enter choice as 1.cricket 2. badminton 3.Both 4.None
4

Enter name
eee
Enter choice as 1.cricket 2. badminton 3.Both 4.None
1

Enter name
wwww
Enter choice as 1.cricket 2. badminton 3.Both 4.None
2
**************Student DATA *******************
Enter name aaa
choice as 1
Enter name bbb
choice as 2
Enter name ccc
choice as 3
Enter name ddd
choice as 4
Enter name eee
choice as 1
Enter name wwww
choice as 2


Set of students who play both cricket and badminton  1
Set of students who play only cricket   2
Set of students who play only badminton   2
Number of students who play neither cricket nor badminton   1
Set of students who play either cricket or badminton or both   5
*/