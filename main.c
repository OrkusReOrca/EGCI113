#include <stdio.h>
#include <stdlib.h>

//Kunanon 6581163
int main()
{
    int m,i,k,s,in,l,sn;
    printf("Pyramid height: ");
    scanf("%d",&in);
    puts("");
    sn=((in*4)/2);
    l=1;
    for(i=1;i<=in;i++){
        printf("%3d ",i);

        //space
        for(s=sn;s>=0;s--){
            printf(" ");
        }
        //the pyramid
        for(k=1;k<=i;k++){
            printf("%4d",l);
        }
        sn=sn-2;
        l++;
        puts("");
    }
    puts("\nEnd");
}
