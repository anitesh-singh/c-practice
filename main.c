/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("hello world");
    return 0;
}*/



/*#include<stdio.h>
int main()
{
    int u,c,total=21,rem,term=0;
    printf("total no. of matchstick: 21\n\n");
    printf("Rule\nwhoever is forced to pick the last matchstick loses the game\n\n");
    while (total>=1)
    {
        printf("pick the matchstick(either 1,2,3 or 4):\n");
        scanf("%d",&u);
        c=5-u;
        printf("computer picks:%d\n\n",c);
        printf("your turn\n\n");
        term=term+(u+c);
        rem=21-term;
        total=term;
        printf("remaining matchsticks: %d\n\n\n",rem);
        if (rem==1)
        {
            printf("pick the matchstick:\n");
            scanf("%d",&u);
            printf("\n\ncomputer wins!!");
           break;
        }
        total++;
    }
    
        
}*/



/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,rem, oct=0, rem1, rev=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    //converting decimal to octal
    while(num)
    {
    rem=num%8;
    oct=10*oct+rem;
    num=num/8;
    }
    printf("%d",oct);
    //reversing the octal
    while(oct)
    {
    rem1=oct%10;
    rev=rev*10+rem1;
    oct=oct/10;
    }
    printf("\nOctal equivalent of is: %d", rev);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int totnum,num,i=1,max,min,range;
    printf("how many numbers do you want to enter in the list:\n");
    scanf("%d",&totnum);
    printf("enter the number of the list:\n");
    scanf("%d",&num);
    max=num;
    min=num;
    while(i<totnum)
    {
        printf("enter the number of the list:\n");
        scanf("%d",&num);
        if(num>max)
        {
            max=num;
        }
        if(num<min){
            min=num;
        }
        i++;
    }
    range=max-min;
    printf("range:%d",range);
}*/