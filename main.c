#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    double a,b,c,ans1,ans2;
    printf("Input the a,b,c of polynomials below in this form (a b c):\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    ans1= (-b+(sqrt((pow(b,2))-(4*a*c))))/(2*a);
    ans2= (-b-(sqrt((pow(b,2))-(4*a*c))))/(2*a);
    printf("Answer to the polynomial provided is \nx1 = %.2f\nand\nx2 = %.2f", ans1, ans2);
    return 0;
}
