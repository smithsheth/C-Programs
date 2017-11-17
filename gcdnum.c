#include <stdio.h>
void main()

{

    int num1, num2, gcd, rem, numr, denom;

    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)

    {
       numr = num1;
       denom = num2;
    }

    else

    {
        num = num2;
        denom = num1;
    }

    rem = num % denom;

    while (rem != 0)
    {
        numr   = denom;
        denom = rem;
        rem = numr % denom;
       }

    gcd = denom;

    printf("GCD of %d and %d = %d\n", num1, num2, gcd);



}
