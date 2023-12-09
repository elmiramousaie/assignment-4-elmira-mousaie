#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter some numbers  then press 0:");
    int x,i=0;
    printf("enter some numbers then press 0:");
    while (x!=0){
    scanf("%d",&x);
    i+=x;}
    printf("the sum of numbers entered is:%d\n",i);




    return 0;
}
