#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    int a,b,c,min,max;
    printf("Input 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b && a<=c) min=a;
    else if(b<=c) min=b;
    else min=c;

    if(a>=b && a>=c) max=a;
    else if(b>=c) max=b;
    else max=c;

    printf("Min is %d\n",min);
    printf("Mas is %d\n",max);
    return main;
}
