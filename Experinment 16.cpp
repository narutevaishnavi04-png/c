#include<stdio.h>

struct Student
{
	int rollNo;
	char name[50];
	float marks[3];
};

int main ()
{ 
struct Student s;
float total=0,average;
int i;

printf("Enter roll number:");
scanf("%d",&s.rollNo);

printf("Enter name:");
scanf("%s",s.name);

printf("Enter marks in 3 subjects:");
for(i=0;i<3;i++);

{
	scanf("%f",&s.marks[i]);
	total+=s.marks[i];

}
average=total/3;

printf("\n-------Students Details-----\n");
printf("Roll Number:%d\n",s.rollNo);
printf("Name:%s\n",s.name);
printf("Marks:%.2f,%.2f,%.2f\n",s.marks[0],s.marks[1],s.marks[2]);
printf("Total Marks:%.2f\n",total);
printf("Average:%.2f\n",average);

return 0;
}





