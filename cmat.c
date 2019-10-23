/*
Write C/C++ program for storing matrix. Write functions for
a) Check whether given matrix is upper triangular or not
b) Compute summation of diagonal elements
c) Compute transpose of matrix
d) Add, subtract and multiply two matrices
*/
#include<stdio.h>
int main(){

	int r1,c1,r2,c2;
	int i=0,j=0,k=0;
	printf("Enter Mat1 Row & Cols\n");
	scanf("%d%d",&r1,&c1);

	printf("Enter Mat2 Row & Cols\n");
	scanf("%d%d",&r2,&c2);

	int mat1[r1][c1];
	int mat2[r2][c2];
	int add_mat[r1][c1];
	int sub_mat[r1][c1];
	int mul_mat[r1][c2];

	printf("Enter Mat1\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter Mat2\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&mat2[i][j]);
		}
	}

	printf("\nEnter Mat\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("%d\t",mat1[i][j]);
		}
		printf("\n");
	}

 printf("\nEnter Mat\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("%d\t",mat2[i][j]);
		}
		printf("\n");
	}


if(r1==r2 && c1==c2){


	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			add_mat[i][j]=mat1[i][j]+mat2[i][j];
			sub_mat[i][j]=mat1[i][j]-mat2[i][j];
		}
	}	


printf("\nAddt\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("%d\t",add_mat[i][j]);
		}
		printf("\n");
	}

	 printf("\nSub\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("%d\t",sub_mat[i][j]);
		}
		printf("\n");
	}



}
else{
	printf("Matrix Size Not Match!");
}



// multiplication
if(c1==r2){

				for(i=0;i<r1;i++){
					for(j=0;j<c2;j++){
							mul_mat[i][j]=0;
							for(k=0;k<c1;k++){
							mul_mat[i][j]=mul_mat[i][j]+(mat1[i][k]*mat2[k][j]);
							}
					}	
				}


	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d\t",mul_mat[i][j]);
		}
		printf("\n");
	}



}
else{
	printf("Not Valid for Multiplication");
}



 


	return 0;
}