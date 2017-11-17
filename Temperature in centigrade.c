#include<stdio.h>
main()
{
int far;
float temp;

printf("Enter the temperature(in fahrenheit) :");
scanf("%d",&far);

temp=(far-32)/1.8;

printf("The temperature is (in centigrade):%f Degrees ",temp);

}
