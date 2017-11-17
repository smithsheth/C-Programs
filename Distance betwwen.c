#include<math.h>
main()
{
int distance,meter,inches;
float feet,cm;

printf("Distance between cities is = ");
scanf("%d",&distance);

meter  = distance*1000;
feet   = meter*3.37;
inches = feet*12;
cm     = inches*2.54;

printf("\nDistance in meter =%d m",meter);
printf("\nDistance in feet =%f ft",feet);
printf("\nDistance in inches =%d inch",inches);
printf("\nDistance in cm =%f cm",cm);
}
