#include <stdlib.h>
#include <math.h>

void main()
{
    double ans1,ans2;
    int a,b,c;
    printf("Input the a,b,c of polynomials below in this form (a b c):\n");
    scanf("%d %d %d",&a,&b,&c);
    double aP=a,bP=b,cP=c;
    ans1= (-bP+(sqrt((pow(bP,2))-(4*aP*cP))))/(2*aP);
    ans2= (-bP-(sqrt((pow(bP,2))-(4*aP*cP))))/(2*aP);
    switch(a){
        case 0: break;
        case 1: printf("x^2"); break;
        case -1: printf("-x^2"); break;
        default: printf("%dx^2",a);
    }
    if(b>0) printf("+");
    switch(b){
        case 0: break;
        case 1: printf("x"); break;
        case -1: printf("-x"); break;
        default: printf("%dx",b);
    }
    if(c>0) printf("+");
    switch(c){
        case 0: break;
        default: printf("%d",c);
    }
    printf(" = %lf and %lf",ans1,ans2);
    puts("");
    return 0;
}
