#include <stdlib.h>
#include <math.h>

void main()
{
    double a,b,c,ans1,ans2,chckSq;
    printf("Input the a,b,c of polynomials below in this form (a b c):\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    puts("");

    //if a and b are zero
    if(a==0 && b==0){
        printf("Answer to the polynomial provided is %.2f", c);

    //if a are zero
    }else if (a==0){
       ans1= (-c)/b;
       printf("Answer to the polynomial provided is %.2f", ans1);

    //all are non zero
    }else{
        chckSq= (pow(b,2))-(4*a*c);

        //undefined due to negative root
        if(chckSq<0){
            printf("Answer to the polynomial provided is UNDEFINE due to negative square root");
        //NORMAL define
        }else{
            ans1= (-b+(sqrt((pow(b,2))-(4*a*c))))/(2*a);
            ans2= (-b-(sqrt((pow(b,2))-(4*a*c))))/(2*a);
            if(ans1==ans2) printf("Answer to the polynomial provided is %.2f", ans1);
            else printf("Answer to the polynomial provided is %.2f and %.2f", ans1, ans2);
        }
    }
    puts("");
    return 0;
}
