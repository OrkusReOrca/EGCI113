#include <stdio.h>
#include <stdlib.h>

//Kunanon 6581163
//Diamond maker
int main()
{
    int m,ed,i,k,s,in,l,sn;
    printf("Diamond height: ");
    scanf("%d",&in);
    puts("");
    if (in%2==1) in-=1; //fix the odd input problem
    sn=((in*2)/2);
    ed=sn;
    l=1;

    //top diamond
    for(i=2;i<=in;i+=2){
        printf("i=%3d, sn=%3d, s=%4d",i,sn,s); //just for me to monitor the variables

        //space
        for(s=sn;s>=0;s--){
            printf(" ");
        }
        //the diamond top
        for(k=1;k<=i;k++){
            printf("* ");
        }
        sn=sn-2;
        l++;
        puts("");
    }
    sn=2;
    //bottom diamond
    for(i=in;i>=2;i-=2){
        printf("i=%3d, sn=%3d, s=%4d",i,sn,s);

        //space
        for(s=0;s<=sn;s++){
            printf(" ");
        }
        //the diamond bottom
        for(k=i;k>=1;k--){
            printf("* ");
        }
        sn=sn+2;
        l++;
        puts("");
    }
    puts("\nEnd");
}

