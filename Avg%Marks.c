#include<math.h>
main()
{
int math,chem,eng,bio,it,aggregate;
float prcnt;

printf("Your marks in math:");
scanf("%d",&math);
printf("Your marks in chem :");
scanf("%d",&chem);
printf("Your marks in eng:");
scanf("%d",&eng);
printf("Your marks in bio:");
scanf("%d",&bio);
printf("Your marks in it:");
scanf("%d",&it);

aggregate = math+chem+eng+bio+it;
prcnt     = (aggregate*100)/500;

printf("Your aggregate marks are %d",aggregate);
printf("\nYour percentage marks are %f",prcnt);
}
