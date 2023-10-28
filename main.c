#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float trigo(float,float);

int main()
{
    float a,b,c;
    puts("Trigonometry Finder");
    puts("a^2 + b^2 = c^2");
    printf("Insert your a and b:");
    scanf("%f %f",&a,&b);
    c=trigo(a,b);
    printf("\nThe opposite side (c) is: %.2f\n",c);
    return 0;
}

float trigo(float x,float y){
    float z=sqrt(x*x + y*y);
    return(z);
}
//by Kunanon Thappawong 6581163 28/10/2023
