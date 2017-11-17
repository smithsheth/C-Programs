#include<math.h>
main()
{
int gross,basic,da,ta;

printf("Enter your salary,");
scanf("%d",&basic);

da=(40*basic)/100;
ta=(20*basic)/100;

gross=basic + da + ta;
printf("\nYour Gross Salary is :%d ", gross);
return(0);

}
