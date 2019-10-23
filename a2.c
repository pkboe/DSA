/*
Write C/C++ program to store marks scored for first test of subject 'Data Structures and Algorithms' 
for N students. Compute
I. The average score of class
ii. Highest score and lowest score of class
iii. Marks scored by most of the students
iv. list of students who were absent for the test
*/

#include<stdio.h>

struct studentdata{

	char name[20];
	int dsa_marks;
	int att; 
	// 1 present 2 Absent

};

int main(){
	int cnt=0;
	int m;
	int i=0;
	float avg=0;
	int present=0;
	int min=9999;
	int max=0;
	int no=0;
	int j=0;
	printf("Enter total no student: ");
	scanf("%d",&m);

	struct studentdata stud[m];

	for(i=0;i<m;i++)
	{
		printf("Enter Name: ");
		scanf("%s",stud[i].name);

		printf("1.Present 2. Absent\n");
		scanf("%d",&stud[i].att);

		if(stud[i].att==1){

			printf("Enter DSA Marks: ");
			scanf("%d",&stud[i].dsa_marks);
		}	
		else{

			stud[i].dsa_marks=0;
		}

	}

	// The average score of class

	for(i=0;i<m;i++)
	{
		printf("student name %s\tmarks %d\tAtt %d\n",stud[i].name,stud[i].dsa_marks,stud[i].att);

		if(stud[i].att==1){
			present++;
			avg=avg+stud[i].dsa_marks;
		}
		else{

			printf("Abset Student Name : %s\n",stud[i].name);
		}

		if(min>stud[i].dsa_marks)
			min=stud[i].dsa_marks;

		if(max<stud[i].dsa_marks)
			max=stud[i].dsa_marks;




	}


	avg=avg/present;
	printf("\n\nAvg Score is %f",avg);
	printf("\n\nMax is %d Min is %d",max,min);
//    i
// 20 10 30 10 10 30
// 	            j

// cnt=3
// max=3

// 10 3  => 10
// 20 1
// 30 2

	max=0;
	for(i=0;i<m;i++)
	{		
			cnt=0;
			for(j=0;j<m;j++)
			{
				if(stud[i].dsa_marks==stud[j].dsa_marks){
					cnt++;
				}
			}

			if(max<cnt)
			{
				max=cnt;
				no=stud[i].dsa_marks;
			}

	}

printf("\nMarks score by most of student is %d",no);


	return 0;
}


/*
------------OUTPUT-----------------
Enter total no student: 6
Enter Name: a
1.Present 2. Absent
1
Enter DSA Marks: 60
Enter Name: b
1.Present 2. Absent
2
Enter Name: c
1.Present 2. Absent
1
Enter DSA Marks: 88
Enter Name: d
1.Present 2. Absent
1
Enter DSA Marks: 90
Enter Name: e
1.Present 2. Absent
1
Enter DSA Marks: 98
Enter Name: q
1.Present 2. Absent
1
Enter DSA Marks: 77

student name a  marks 60        Att 1
student name b  marks 0         Att 2
Abset Student Name : b
student name c  marks 88        Att 1
student name d  marks 90        Att 1
student name e  marks 98        Att 1
student name q  marks 77        Att 1


Avg Score is 82.599998

Max is 98 Min is 0
Marks score by most of student is 60
*/

