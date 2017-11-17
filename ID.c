#include<stdio.h>
#include<stdlib.h>
struct student{
  char name[20];
  long roll;
  float marks;
};
 int main()
{
struct student s1;
printf("Enter Details:\n");
printf("Enter name\n");
scanf("%s",s1.name);
printf("Enter Roll no.\n");
scanf("%ld",&s1.roll);
printf("Enter marks\n");
scanf("%f",&s1.marks);
 printf("\nEntered Details are:\n");
printf("Name: %s\n",s1.name);
printf("Roll No.: %ld\n",s1.roll);
printf("Marks: %f\n",s1.marks);
}
