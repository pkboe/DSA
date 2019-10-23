/*
Write C++ program for storing binary number using doubly linked lists. Write functionsa) to compute 1‘s and 2‘s complement b) add two binary numbers
*/

#include<stdio.h>
#include<stdlib.h>
#define size 10


struct node{

  int data;
  struct node *next;
  struct node *prv;
};

int stack[size];
void push(int);
void pop();
int top=-1;
struct node *head=NULL;
// for 2nd list
struct node *head1=NULL;

void create();
// to create list
void create1();

void printList();
void printList1();

void onescomplement();
void twoscomplement();
void binaryaddition();

int main(){

int ch=0;
do{
printf("\n1.create 2.exit 3.printList 4.onescomplement 5.twoscomplement 6.Binary Addition 7.Print List2 8.Create List2\n\n");
scanf("%d",&ch);
switch(ch){
      case 1:create();  //One node of link-list in considered as 1-BIT
      break;
      case 3:printList();
      break;
      case 4:onescomplement();
      break;
      case 5:twoscomplement();
      break;
      case 6:binaryaddition();
      break;
      case 7:printList1();
      break;
      case 8: create1();
      
}
}while(ch!=2);


  return 0;
}


void create(){

int no;
printf("\nEnter Binary no\n");
scanf("%d",&no);

      if(head==NULL){

          head=(struct node *)malloc(sizeof(struct node));
          head->data=no;
          head->next=head->prv=NULL;
      }
      else{


            struct node *newnode=(struct node *)malloc(sizeof(struct node));
            newnode->data=no;
            newnode->next=newnode->prv=NULL;



            struct node *temp=head;
            while(temp->next!=NULL)
              temp=temp->next;


              temp->next=newnode;
              newnode->prv=temp;


      }


}

void create1(){

int no;
printf("\nEnter Binary no\n");
scanf("%d",&no);

      if(head1==NULL){

          head1=(struct node *)malloc(sizeof(struct node));
          head1->data=no;
          head1->next=head->prv=NULL;
      }
      else{


            struct node *newnode=(struct node *)malloc(sizeof(struct node));
            newnode->data=no;
            newnode->next=newnode->prv=NULL;



            struct node *temp=head1;
            while(temp->next!=NULL)
              temp=temp->next;


              temp->next=newnode;
              newnode->prv=temp;


      }


}


void printList(){
  struct node *temp=head;
  while(temp!=NULL)
  {
    printf("%d",temp->data);
    temp=temp->next;
  }
  printf("\n");
}

void printList1(){
  struct node *temp=head1;
  while(temp!=NULL)
  {
    printf("%d",temp->data);
    temp=temp->next;
  }
  printf("\n");
}


void onescomplement(){
  struct node *temp=head;
  printf("\n");

  while(temp!=NULL){

        if(temp->data==0){
          printf("1");
        }
        else{
          printf("0");
        }
    temp=temp->next;
  }
  printf("\n");


}


void push(int no){

    if(top+1==size){
      printf("stack is overflow\n");
    }
    else{
        top++;
        stack[top]=no;
  }
}

void pop(){
  if(top==-1){
    printf("Stack is Underflow\n\n");
  }
  else{
      while(top!=-1){
        printf("%d",stack[top]);
        top--;
      }
  }
}

void twoscomplement(){
int carry=1;
  //  1 1 0 0
  // t
  //  0 0 1 1
  //        1
  //        0
struct node *temp=head;
while(temp->next!=NULL){
      if(temp->data==1)
        temp->data=0;
      else
        temp->data=1;
  temp=temp->next;
}
// for last node
if(temp->data==1)
  temp->data=0;
else
  temp->data=1;

while(temp!=NULL){
          if(temp->data==1 && carry==1){
                      push(0);
                      carry=1;
          }
          else if(temp->data==0 && carry==1){
            push(1);
            carry=0;
          }
          else if(temp->data==0 && carry==0){
            push(0);
            carry=0;
          }
          else{
            push(1);
            carry=0;
          }

  temp=temp->prv;
}

// to print carry value
push(carry);
// to print 2's complement
pop();

}


void binaryaddition()
{
        int carry=0;
        int sum=0;
        top=-1;
        struct node *temp=head;
        struct node *temp1=head1;
// 1 1 0 1
         
// 0 0 1 1
         
        // goto to last node
        while(temp->next!=NULL)
          temp=temp->next;

        while(temp1->next!=NULL)
        temp1=temp1->next;


        while(temp!=NULL){

                    sum=(temp->data+temp1->data+carry)%2;
                    carry=(temp->data+temp1->data+carry)/2;
                    push(sum);
                    temp=temp->prv;
                    temp1=temp1->prv;
        }
        push(carry);
        pop();


}
/*
------------------OUTPUT-----------------

1.create 2.exit 3.printList 4.onescomplement 5.twoscomplement 6.Binary Addition 7.Print List2 8.Create List2
1
Enter Binary no
1

1.create 2.exit 3.printList 4.onescomplement 5.twoscomplement 6.Binary Addition 7.Print List2 8.Create List2
1
Enter Binary no
0

1.create 2.exit 3.printList 4.onescomplement 5.twoscomplement 6.Binary Addition 7.Print List2 8.Create List2
1
Enter Binary no
0

1.create 2.exit 3.printList 4.onescomplement 5.twoscomplement 6.Binary Addition 7.Print List2 8.Create List2
1
Enter Binary no
0

1.create 2.exit 3.printList 4.onescomplement 5.twoscomplement 6.Binary Addition 7.Print List2 8.Create List2
3
1000

1.create 2.exit 3.printList 4.onescomplement 5.twoscomplement 6.Binary Addition 7.Print List2 8.Create List2
8
Enter Binary no
0

1.create 2.exit 3.printList 4.onescomplement 5.twoscomplement 6.Binary Addition 7.Print List2 8.Create List2
8
Enter Binary no
1

1.create 2.exit 3.printList 4.onescomplement 5.twoscomplement 6.Binary Addition 7.Print List2 8.Create List2
8
Enter Binary no
1

1.create 2.exit 3.printList 4.onescomplement 5.twoscomplement 6.Binary Addition 7.Print List2 8.Create List2
8
Enter Binary no
1

1.create 2.exit 3.printList 4.onescomplement 5.twoscomplement 6.Binary Addition 7.Print List2 8.Create List2
7
0111

1.create 2.exit 3.printList 4.onescomplement 5.twoscomplement 6.Binary Addition 7.Print List2 8.Create List2
6
01111

1.create 2.exit 3.printList 4.onescomplement 5.twoscomplement 6.Binary Addition 7.Print List2 8.Create List2
3
1000

1.create 2.exit 3.printList 4.onescomplement 5.twoscomplement 6.Binary Addition 7.Print List2 8.Create List2
4
0111

1.create 2.exit 3.printList 4.onescomplement 5.twoscomplement 6.Binary Addition 7.Print List2 8.Create List2
5
01000

*/
