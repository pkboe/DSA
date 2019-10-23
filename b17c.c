/*Second year Computer Engineering class, set A of students like Vanilla Ice-cream and set B
of students like butterscotch ice-cream. Write C/C++ program to store two sets using linked
list. compute and display-

i.Set of students who like either vanilla or butterscotch or both
ii.Set of students who like both vanilla and butterscotch
iii. Set of students who like only vanilla not butterscotch
iv.Set of students who like only butterscotch not vanilla
v.Number of students who like neither vanilla nor butterscotch  */

#include<stdio.h>
#include<stdlib.h>
struct node {
      int rno;
      struct node *next;
      int choice;// 4 none 1 butterscotch 2 vanila 3 both
};

struct node *head=NULL;
void create();
void printlist();
void both_B_V();
void like_v_notB();
void like_B_notV();
void either_v_b();
void none_v_b();
int main(){

      int ch=0;

      do{
printf("\n1.create list 2.exit 3.print list\n4.both_B_V\n 5. like_v_notB \n 6.like_B_notV \n 7.either_v_b\n8.none_v_b\n\n");
      scanf("%d",&ch);
      switch(ch){
              case 1 : create();
                       break;
              case 3: printlist();
                      break;
              case 4 : both_B_V();
                      break;
              case 5:like_v_notB();
                  break;
                case 6:like_B_notV();
                break;
                case 7:either_v_b();
                break;
                case 8:none_v_b();
                break;
                default:printf("Invalid Choice");
      }
    }while(ch!=2);

}

void create(){

        int rno;
        int choice;
        printf("\nEnter rno\n");
        scanf("%d",&rno );

        printf("\n1.butterscotch 2. vanila 3.both 4.none\n");
        scanf("%d",&choice );


      if(head==NULL){
            head=(struct node*)malloc(sizeof(struct node));
            head->rno=rno;
            head->choice=choice;
            head->next=NULL;
      }
      else{

        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->rno=rno;
        newnode->choice=choice;
        newnode->next=NULL;

        struct node *temp=head;
        while(temp->next!=NULL)
          temp=temp->next;

        temp->next=newnode;


      }

}

void printlist(){

    struct node *temp=head;
    while(temp!=NULL)
    {
          printf("[%d %d]=>",temp->rno,temp->choice );
          temp=temp->next;
    }
    printf("NULL");

}


// Set of students who like both vanilla and butterscotch
void both_B_V(){
  int cnt=0;
      struct node *temp=head;
      while(temp!=NULL){
        if(temp->choice==3)
        cnt++;
        temp=temp->next;
      }


      printf("Set of students who like both vanilla and butterscotch %d\n",cnt);
}

// Set of students who like only vanilla not butterscotch

void like_v_notB(){
  int cnt=0;
      struct node *temp=head;
      while(temp!=NULL){
        if(temp->choice==2)
        cnt++;
        temp=temp->next;
      }


      printf("Set of students who like only vanilla not butterscotch %d\n",cnt);

}

// Set of students who like only butterscotch not vanilla
void like_B_notV(){
  int cnt=0;
      struct node *temp=head;
      while(temp!=NULL){
        if(temp->choice==1)
        cnt++;
        temp=temp->next;
      }


      printf("Set of students who like only butterscotch not vanilla %d\n",cnt);

}

// Set of students who like either vanilla or butterscotch or both
void either_v_b(){
  int cnt=0;
      struct node *temp=head;
      while(temp!=NULL){
        if(temp->choice!=4)
        cnt++;
        temp=temp->next;
      }


      printf("Set of students who like either vanilla or butterscotch or both %d\n",cnt);
}

// Number of students who like neither vanilla nor butterscotch
void none_v_b(){
  int cnt=0;
      struct node *temp=head;
      while(temp!=NULL){
        if(temp->choice==4)
        cnt++;
        temp=temp->next;
      }


      printf("Number of students who like neither vanilla nor butterscotch %d\n",cnt);
}

/*
-----------------OUTPUT---------------------
1.create list 2.exit         3.print list
4.both_B_V    5.like_v_notB  6.like_B_notV
7.either_v_b  8.none_v_b
1
Enter rno 10
1.butterscotch 2. vanila 3.both 4.none
1

1.create list 2.exit         3.print list
4.both_B_V    5.like_v_notB  6.like_B_notV
7.either_v_b  8.none_v_b
1
Enter rno 20
1.butterscotch 2. vanila 3.both 4.none
2

1.create list 2.exit         3.print list
4.both_B_V    5.like_v_notB  6.like_B_notV
7.either_v_b  8.none_v_b
1

Enter rno 30
1.butterscotch 2. vanila 3.both 4.none
3

1.create list 2.exit         3.print list
4.both_B_V    5.like_v_notB  6.like_B_notV
7.either_v_b  8.none_v_b
1
Enter rno 40
1.butterscotch 2. vanila 3.both 4.none
4

1.create list 2.exit         3.print list
4.both_B_V    5.like_v_notB  6.like_B_notV
7.either_v_b  8.none_v_b
1
Enter rno 50
1.butterscotch 2. vanila 3.both 4.none
2

1.create list 2.exit         3.print list
4.both_B_V    5.like_v_notB  6.like_B_notV
7.either_v_b  8.none_v_b
1
Enter rno 60
1.butterscotch 2. vanila 3.both 4.none
1

1.create list 2.exit         3.print list
4.both_B_V    5.like_v_notB  6.like_B_notV
7.either_v_b  8.none_v_b
3
[10 1]=>[20 2]=>[30 3]=>[40 4]=>[50 2]=>[60 1]=>NULL

1.create list 2.exit         3.print list
4.both_B_V    5.like_v_notB  6.like_B_notV
7.either_v_b  8.none_v_b
4
Set of students who like both vanilla and butterscotch 1

1.create list 2.exit         3.print list
4.both_B_V    5.like_v_notB  6.like_B_notV
7.either_v_b  8.none_v_b
5
Set of students who like only vanilla not butterscotch 2

1.create list 2.exit         3.print list
4.both_B_V    5.like_v_notB  6.like_B_notV
7.either_v_b  8.none_v_b
6
Set of students who like only butterscotch not vanilla 2

1.create list 2.exit         3.print list
4.both_B_V    5.like_v_notB  6.like_B_notV
7.either_v_b  8.none_v_b
7
Set of students who like either vanilla or butterscotch or both 5

1.create list 2.exit         3.print list
4.both_B_V    5.like_v_notB  6.like_B_notV
7.either_v_b  8.none_v_b
8
Number of students who like neither vanilla nor butterscotch 1

*/