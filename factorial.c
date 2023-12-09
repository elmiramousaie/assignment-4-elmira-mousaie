#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,i;
    printf("enter the number:");
    scanf("%d",&n);
    int f=1;
    for (i=1;i<=n;i++){f=f*i;printf("%d\t",f);}


    return 0;
}
