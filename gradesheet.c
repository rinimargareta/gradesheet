#include<stdio.h>
void main()
{
int n,p;
char name[25];
printf("enter the number of students in the class");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("enter the name of the student");
scanf("%s",name);
printf("enter the percentage of the student");
scanf("%d",&p);
printf("Name of the student: %s\n",name);
printf("Grade: ");
if(p>=95)
printf("O");
else if(p>=90)
printf("A+");
else if(p>=85)
printf("A");
else if(p>=80)
printf("B+");
else if(p>=75)
printf("B");
else if(p>=70)
printf("C+");
else if(p>=65)
printf("C");
else if(p>=60)
printf("D+");
else if(p>=55)
printf("D");
else if(p>=50)
printf("E");
else
printf("F");
printf("\n\n");
}
}
