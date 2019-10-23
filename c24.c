/*
In any language program mostly syntax error occurs due to unbalancing delimiter such as (),{},[].
 Write C++ program using stack to check whether given expression is well parenthesized or not.
*/

#include<stdio.h>

char stack[10];
char expression[10];
int top=-1;
void push(char);
char pop();
void input();
void comp_exp();
char exp_br(char);
int main(){

	int ch=0;
	do{
	printf("1.Input 2.Check 3.exit\n");
	scanf("%d",&ch);


	switch(ch)	{


			 case 1:input();
			 		break;
			 case 2:comp_exp();
			 		break;

	}
}while(ch!=3);


	return 0;
}

void input(){
	printf("Entrr the expersiion\n");
	scanf("%s",expression);
}

void push(char ip){
	 
    
    if(top==9){
    		printf("Stack is overflow\n");
    }
    else{
    			top++;
    			stack[top]=ip;
    }

}


char pop(){
		char op;
		if(top==-1){
			printf("stack is underflow\n");
		}
		else{
			// printf("output is %d",stack[top]);
			op=stack[top];
			top--;
			return op;
		}

}


void comp_exp(){
// (a+b)
int i=0;       
char temp;  
int flag=0;
	while(expression[i]!='\0'){


				if(expression[i]=='{' || expression[i]=='(' || expression[i]=='[')
					push(expression[i]);

				if(expression[i]=='}' || expression[i]==')' || expression[i]==']')
				{
					temp=pop();
					if(exp_br(temp)!=expression[i]){
							 flag=1;
							 break;
					}
				}

		i++;			

	}
    if(top>-1) //For input in which the no of opening and closing brackets are not equal
   {
    flag=1;
   }
	if(flag==1){
		printf("expression is not parenthesized\n");
	}
	else{
		printf("expression is well parenthesized\n");
	}


}

char exp_br(char ip){

	switch(ip){
		  case '{':return '}';
		  case '[':return ']';
		  case '(':return ')';
	}

}

/*

------------OUTPUT-------------------
1.Input 2.Check 3.exit
1
Entrr the expersiion
[(c=a+b}]
1.Input 2.Check 3.exit
2
expression is not parenthesized
-------------------------------------------
1.Input 2.Check 3.exit
1
Entrr the expersiion
[(c=a+b)]
1.Input 2.Check 3.exit
2
expression is well parenthesized

---------------------------------
1.Input 2.Check 3.exit
1
Entrr the expersiion
(sajkg))
1.Input 2.Check 3.exit
2
stack is underflow
expression is not parenthesized
--------------------------------------

1.Input 2.Check 3.exit
1
Entrr the expersiion
({[safh]}
1.Input 2.Check 3.exit
2
expression is not parenthesized

*/
