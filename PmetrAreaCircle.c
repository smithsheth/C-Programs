#include<math.h>
main()
{
int length,breadth,radius;
float area,perimeter;

printf("Enter length of rectangle:");
scanf("%d" ,&length);
printf("\nEnter breadth of rectangle:");
scanf("%d",&breadth);

printf("\nEnter radius of circle:");
scanf("%d",&radius);

perimeter=2*(length + breadth);
area=3.14*radius*radius;

printf("The perimeter of rectangle is %f",perimeter);
printf("\nThe area of circle is %f",area);
return(0);

}
