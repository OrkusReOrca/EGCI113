#include <stdlib.h>
#include <math.h>

//By Kunanon 6581163
void main()
{
    double ans1,ans2;
    int a,b,c;
    printf("Input the a,b,c of polynomials below in this form (a b c):\n");
    scanf("%d %d %d",&a,&b,&c);
    double aP=a,bP=b,cP=c;
    puts("");

    puts("The root of polynomial:");
    //EQUATION printed
    //print a
    switch(a){
        case 0: break;
        case 1: printf("x^2"); break;
        case -1: printf("-x^2"); break;
        default: printf("%dx^2",a);
    }

    //print b
    if(a!=0 && b>0) printf("+");
    switch(b){
        case 0: break;
        case 1: printf("x"); break;
        case -1: printf("-x"); break;
        default: printf("%dx",b);
    }

    //print c
    if((a!=0 || b!=0)&&c>0) printf("+");
    switch(c){
        case 0: break;
        default: printf("%d",c);
    }

    //print root of polynomial behind
    double chckSq= (pow(bP,2))-(4*aP*cP);
    double Sq=sqrt(chckSq);
    if(chckSq<0){ //UNDEFINE
        printf(" does not exist (due to negative root) \n\n");
    }else{
        printf(" is %.2f \n\n",Sq);
    }

    //OUTPUT print behind below
    //ZERO a and b

    printf("The X of the polynomial is ");
    if(a==0 && b==0){
        printf("%d", c);

    //ZERO a
    }else if (a==0){
       ans1= (-cP)/bP;
       printf("%.2f", ans1);

    //NO ZERO conditions
    }else{

        //undefine or normal
        if(chckSq<0){ //UNDEFINE
            printf("DNE");
        }else{ //DEFINED
            ans1= (-bP+(sqrt((pow(bP,2))-(4*aP*cP))))/(2*aP);
            ans2= (-bP-(sqrt((pow(bP,2))-(4*aP*cP))))/(2*aP);
            if(ans1==ans2) printf("%.2f", ans1); //ONE ANSWER
            else printf("%.2f and %.2f", ans1, ans2); // TWO ANSWER
        }
    }
    puts("");
    return 0;
}
