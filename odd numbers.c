#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("enter two numbers:");
    scanf("%d%d",&x,&y);
    if (x>y && y%2==0) {int i=y+1;
                        while (i<=x){printf("%d\t",i);
                        i=i+2;}}
    else if (x>y && y%2==1){int i=y+2;
                            while (i<=x){printf("%d\t",i);
                            i=i+2;}}
    else if (y>x && x%2==0) {int i=x+1;
                             while (i<=y) {printf("%d\t",i);
                             i=i+2;}}
    else if (y>x && x%2==1) {int i=x+2;
                             while (i<=y){printf("%d\t",i);
                             i=i+2;}}


    return 0;}

