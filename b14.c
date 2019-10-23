/*
Department of Computer Engineering has student's club named 'Pinnacle Club'. 
Students of Second, third and final year of department can be granted membership on request. 
Similarly one may cancel the membership of club. First node is reserved for president of club and 
last node is reserved for secretary of club. Write C++ program to maintain club member‘s information 
using singly linked list. Store student PRN and Name. 
Write functions to
a) Add and delete the members as well as president or even secretary.
b) Compute total number of members of club
c) Display members
d) Display list in reverse order using recursion
e) Two linked lists exists for two divisions. Concatenate two lists.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node {
	int prn;
	char name[20];
	struct node *next;
};


struct stack{
	int prn;
	char name[20];
};
int top=-1;

struct node *president_A=NULL;
struct node *president_B=NULL;


void createList();
void createList_B();
void printList();
void add_president_A();
void delete_secretary();
void add_members();
void delete_memeber();
void count_member();
void print_reverse_list();
void concat_list();
int main(){

		int ch=0;
		do{
		printf("1.create\n 2. print \n3.exit \n 4.add_president_A \n 5. delete_secretary \n 6.add members \n7.delete members \n 8.count member \n 9. print reverse list \n10.concat_list\n");
		scanf("%d",&ch);
		switch(ch){

				case 1: createList();
						break;
				case 2: printList();
						break;
				case 4:add_president_A();
						break;
				case 5:delete_secretary();
						break;
				case 6:add_members();
					break;
				case 7:delete_memeber();
						break;
				case 8: count_member();
						break;
				case 9:print_reverse_list();
				break;

				case 10:concat_list();
				break;
		}
	}while(ch!=3);


	return 0;
}


void createList(){
	int no,i,prn;
	char name[20];
	printf("Enter total nodes in linked list\n");
	scanf("%d",&no);

	for(i=0;i<no;i++){

				printf("Enter Prn\n");
				scanf("%d",&prn);

				printf("Enter Name\n");
				scanf("%s",name);
				
			if(president_A==NULL){
				president_A=(struct node*)malloc(sizeof(struct node));
				president_A->prn=prn;
				strcpy(president_A->name,name);
			}
			else{

				struct node *temp=president_A;
				while(temp->next!=NULL)
						temp=temp->next;


				struct node *nn=(struct node*)malloc(sizeof(struct node));
				nn->prn=prn;
				strcpy(nn->name,name);


				temp->next=nn;


			}

	}





}


void createList_B(){
	int no,i,prn;
	char name[20];
	printf("Enter total nodes in linked list\n");
	scanf("%d",&no);

	for(i=0;i<no;i++){

				printf("Enter Prn\n");
				scanf("%d",&prn);

				printf("Enter Name\n");
				scanf("%s",name);
				
			if(president_B==NULL){
				president_B=(struct node*)malloc(sizeof(struct node));
				president_B->prn=prn;
				strcpy(president_B->name,name);
			}
			else{

				struct node *temp=president_B;
				while(temp->next!=NULL)
						temp=temp->next;


				struct node *nn=(struct node*)malloc(sizeof(struct node));
				nn->prn=prn;
				strcpy(nn->name,name);


				temp->next=nn;


			}

	}





}


void printList(){
	struct node *temp=president_A;
	while(temp!=NULL){
		printf("Prn %d Name %s\n",temp->prn,temp->name);
		temp=temp->next;
	}
}

void add_president_A(){
				int no,i,prn;
				char name[20];
				printf("Enter Prn\n");
				scanf("%d",&prn);

				printf("Enter Name\n");
				scanf("%s",name);

				struct node *nn=(struct node*)malloc(sizeof(struct node));
				nn->prn=prn;
				strcpy(nn->name,name);

				nn->next=president_A;
				president_A=nn;
				printf("List after adding new president_A\n");
				printList();

}

void delete_secretary(){


struct node *temp=president_A;
while(temp->next->next!=NULL)
	temp=temp->next;

temp->next=NULL;
printf("List after delete_secretary");
printList();

}

void add_members(){
int no,i,prn,data;
				char name[20];
				printf("Enter Prn\n");
				scanf("%d",&prn);

				printf("Enter Name\n");
				scanf("%s",name);

				struct node *nn=(struct node*)malloc(sizeof(struct node));
				nn->prn=prn;
				strcpy(nn->name,name);

	printf("enter prn after which data insert\n");
	scanf("%d",&data);

	struct node *temp=president_A;
	while(temp->prn!=data)
			temp=temp->next;
	
	nn->next=temp->next;
	temp->next=nn;		
			
	printf("list after new members added\n");		
	printList();			 


}

void delete_memeber(){

	int data;
	printf("Enter prn node to delete\n");
	scanf("%d",&data);

	struct node *temp=president_A;
	while(temp->next->prn!=data)
		temp=temp->next;
	temp->next=temp->next->next;
	printf("Node after delete member\n");
	printList();
 
}

void count_member(){
	int cnt=0;
		struct node *temp=president_A;
			while(temp!=NULL){
				temp=temp->next;
					cnt++;
				}
		printf("total nodes %d\n", cnt);
}	


void print_reverse_list(){

		struct stack st[20];
		int i=0;
		struct node *temp=president_A;
		while(temp!=NULL){

			top++;
			st[top].prn=temp->prn;
			strcpy(st[top].name,temp->name);
		 	temp=temp->next;
		}


		for(i=top;i>=0;i--){
			printf("Name = %s Prn = %d\n",st[i].name,st[i].prn);
		}


}

void concat_list(){
createList_B();

struct node *temp=president_A;
while(temp->next!=NULL)
	temp=temp->next;

temp->next=president_B;


printf("List after concat operation is \n\n");
printList();




}

/*
----------------------OUTPUT-----------------------
1.create 2. print 3.exit 4.add_president_A
5. delete_secretary 6.add members 7.delete members
8.count member 9. print reverse list 10.concat_list
1
Enter total nodes in linked list
5
Enter Prn 10
Enter Name aaa
Enter Prn 20
Enter Name bbb
Enter Prn 30
Enter Name ccc
Enter Prn 40
Enter Name ddd
Enter Prn 50
Enter Name eee

1.create 2. print 3.exit 4.add_president_A
5. delete_secretary 6.add members 7.delete members
8.count member 9. print reverse list 10.concat_list
2
Prn 10 Name aaa
Prn 20 Name bbb
Prn 30 Name ccc
Prn 40 Name ddd
Prn 50 Name eee

1.create 2. print 3.exit 4.add_president_A
5. delete_secretary 6.add members 7.delete members
8.count member 9. print reverse list 10.concat_list
4
Enter Prn
100
Enter Name
ppp
List after adding new president_A
Prn 100 Name ppp
Prn 10 Name aaa
Prn 20 Name bbb
Prn 30 Name ccc
Prn 40 Name ddd
Prn 50 Name eee

1.create 2. print 3.exit 4.add_president_A
5. delete_secretary 6.add members 7.delete members
8.count member 9. print reverse list 10.concat_list
5
List after delete_secretary
Prn 100 Name ppp
Prn 10 Name aaa
Prn 20 Name bbb
Prn 30 Name ccc
Prn 40 Name ddd

1.create 2. print 3.exit 4.add_president_A
5. delete_secretary 6.add members 7.delete members
8.count member 9. print reverse list 10.concat_list
8
total nodes 5

1.create 2. print 3.exit 4.add_president_A
5. delete_secretary 6.add members 7.delete members
8.count member 9. print reverse list 10.concat_list
9
Name = ddd Prn = 40
Name = ccc Prn = 30
Name = bbb Prn = 20
Name = aaa Prn = 10
Name = ppp Prn = 100
*/


