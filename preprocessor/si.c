#include<stdio.h>
#include "interst.h"
int main()
{
    int p,r,t,si,amnt;
    printf("enter the principle, rate of interest and time:\n");
    scanf("%d%d%d",&p,&r,&t);
    si=SI(p,r,t);
    amnt=AMT(si,p);
    printf("simple interest is: %d\nAmount is: %d",si,amnt);
    return 0;
}