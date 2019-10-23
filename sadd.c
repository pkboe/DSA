/*
An m x n matrix is said to have a saddle point if some entry a[i][j] is the smallest value in
row i and the largest value in j. Write C/ C++ function that determines the location of a
saddle point if one exists
*/

#include <stdio.h>

#define M 3
#define N 3

int findMin( int a[][N], int row ) {
   /*
    * find min value in row of a.
    * return the value.
    */
   int min = a[row][0];
   int j;

   for( j=1; j<N; ++j )
      if( a[row][j] < min )
          min = a[row][j];
      return min;
}

int findMax( int a[][N], int col ) {
   /*
    * find max val in col of a.
    * return the value.
    */
   int max = a[0][col];
   int i;

   for( i=1; i<M; ++i )
      if( a[i][col] > max )
             max = a[i][col];
      return max;
}

void saddle( int a[][N] ) {
    /*
     * finds ALL saddle points of a if exist.
     */
    int i, j;

    for( i=0; i<M; ++i ) {
        int min = findMin( a, i );

        for( j=0; j<N; ++j ) {
            int max;
            max = findMax( a, j );
            if( min == max )
                printf( "\n\nSaddle point is: (%d)\n",a[i][j] );
        }
    }
}

int main() {
    int a[M][N];// = {5,7,3,7,7,9,7,1,2};
    int row, col;
	int i,j;	
printf("\n Enter no. of rows and no. of columns: ")	;
scanf("%d %d",&row,&col);
printf("\nEnter elements in matrix: ");
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		scanf("%d",&a[i][j]);
	}
}


printf("\nElements in matrix are: ");
for(i=0;i<row;i++)
{
	printf("\n");
	for(j=0;j<col;j++)
	{
		printf("\t%d",a[i][j]);
	}
}
    saddle(a);

    return 0; }

/*
------------OUTPUT----------------
 Enter no. of rows and no. of columns: 3 3

Enter elements in matrix: 1 1 1
                          1 2 1
                          1 2 2

Elements in matrix are: 
	1	1	1
	1	2	1
	1	2	2

Saddle point is: (1)
Saddle point is: (1)
Saddle point is: (1)


EXAMPLE 2:
  Enter no. of rows and no. of columns: 3 3

Enter elements in matrix: 1 2 3
                          4 9 1
                           6 4 7

Elements in matrix are: 
	1	2	3
	4	9	1
	6	4	7

*/
