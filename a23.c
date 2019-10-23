/*
A palindrome is a string of character that‘s the same forward and backward. 
Typically, punctuation, capitalization, and spaces are ignored. For example,
 ‖Poor Dan is in a droop‖ is a palindrome, as can be seen by examining the characters ―poor danisina droop‖ and 
observing that they are the same forward and backward. One way to check for a palindrome is to
reverse the characters in the string and then compare with them the original-in a palindrome, 
the sequence will be identical. Write C++ program with functions-
1. To check whether given string is palindrome or not that uses a stack to determine 
whether a string is a palindrome.
2. to remove spaces and punctuation in string, convert all the Characters to lowercase,
and then call above Palindrome checking function to check for a palindrome
3. to print string in reverse order using stack  
*/
//FOR CASE 2: CHECK 23_1.c
#include<stdio.h>
#define size 10
char stack[size];
char name[20];
int top=-1;

void push(char);
void pop();
void printrev();
void readinput();
void checkPalindrome();
void filterandcompare();

int main(){

                int ch;
               
                do
                {
                printf("\n1.Add Input 2.print rev 3.check palindrome  5.exit\n");
                scanf("%d",&ch);


                    switch(ch)
                    {
                        case 1: readinput();
                                break;
                        case 2: printrev();
                                break;
                        case 3: checkPalindrome();
                                break;
                    }
                }while(ch!=5);

return 0;
}


void readinput(){

        printf("Enter Input String: ");
        //scanf("%[^\n]%*c",name);
         scanf("%s",name);
}

void push(char input){

            if(top+1==size){
                printf("stack is overflow\n\n");
            }
            else{
                top++;
                stack[top]=input;
            }
}


void printrev(){

            int i=0;
            top=-1;
            while(name[i]!='\0'){
                push(name[i]);
                i++;
            }

            while(top!=-1){
                printf("%c",stack[top]);
                top--;
            }

}
 
void checkPalindrome(){

 int i=0;
 int flag=0;
 top=-1;
            while(name[i]!='\0'){
                push(name[i]);
                i++;
            }

            i=0;
            while(top!=-1){

                if(stack[top]!=name[i])
                {
                        flag=1;
                        break;
                }
                i++;
                top--;
            }

            if(flag==0){
                printf("String is Palindrome\n");
            }
            else{
                printf("String is Not Palindrome\n");
            }
 
}
//FOR CASE 2: CHECK 23_1.c


/*
-------------------OUTPUT------------------------------
1.Add Input 2.print rev 3.check palindrome  5.exit
1
Enter Input String: gescoe

1.Add Input 2.print rev 3.check palindrome  5.exit
2
eocseg
1.Add Input 2.print rev 3.check palindrome  5.exit
3
String is Not Palindrome

1.Add Input 2.print rev 3.check palindrome  5.exit
1
Enter Input String: aabbbaa

1.Add Input 2.print rev 3.check palindrome  5.exit
2
aabbbaa
1.Add Input 2.print rev 3.check palindrome  5.exit
3
String is Palindrome


*/



