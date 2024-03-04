//do-while loop
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=0;
    do
    {
        i=i+1;
        printf("%d\n",i);
    } while (i<10);
    
    return 0;
}*/

//while loop
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=0;
    while (i<20)
    {
        printf("%d\n",i);
        i++;
    }
    
    return 0;
}
*/

//for loop
/*#include<stdio.h>
int main(int argc, char const *argv[])
{   
    
    for ( int i = 0; i < 10; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}
*/

//overtime pay of 10 employees 
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int hrs,i=1,pay;
    while (i<=10)
    {   
        printf("\nhours worked:\n");
        scanf("%d",&hrs);
        if (hrs<=40)
        {
            printf("\n''no overtime payed''");
        }
        else
        {
            pay=(hrs-40)*120;
            printf("\nhours worked=%d \novertime payed=%d",hrs,pay);
        }
        i++;
    }
    
    return 0;
}
*/

//factorial
/*#include<stdio.h>
int main()
{
    int i=1,num,fact=1;  //or i=fact =1
    printf("enter the number:");
    scanf("%d",&num);
    while (i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("\nfactorial of %d is %d",num,fact);
    return 0;
}
*/

//one number raised to the power of another
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a,c;
    int b,i=1;
    printf("\nenter the two numbers a and b:");
    scanf("%f%d",&a,&b);
    c=i;
    while (i<=b)
    {
        c=c*a;
        i++;
    }
    printf("\n%f to the power %d is %f",a,b,c);
    return 0;
}
*/


//print all the ascii value 
/*#include<stdio.h>
int main()
{
    int ch=0;                   //taking it in int because character only takes 0-9 digits
    while(ch<255)
    {
        printf("%d of %c\n",ch,ch);
        ch=ch+1;
    }
    return 0;
} 
*/



//armstrong number   sum of cube of each digit is equal to no. itself
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=1,a,b,c;
    printf("The numbers are  \n");
    while (i<=500)
    {
        a=i%10;
        b=i%100;
        b=(b-a)/10;
        c=i/100;
        if (((a*a*a)+(b*b*b)+(c*c*c))==i)
        {
            printf("%d\n",i);
        }
       
        i=i+1;

    }
    
    return 0;
}*/
/*
#include <stdio.h>
#include <math.h>

int main()
{
    int num = 1, digit1, digit2, digit3;

    printf("Armstrong numbers between 1 and 500:\n");

    while (num <= 500)
    {
        digit1 = num / 100;         // extract hundreds digit
        digit2 = (num / 10) % 10;   // extract tens digit
        digit3 = num % 10;          // extract ones digit

        if ((pow(digit1, 3) + pow(digit2, 3) + pow(digit3, 3)) == num)
        {
            printf("%d\n", num);
        }

        num++;
    }

    return 0;
}*/



//enter numbers till the users wants
//display the count of positive negative and zeros entered
/*
#include<stdio.h>
int main(){
    int num, pos=0, neg=0, zer=0;
    int y=1;
    while(y)   //loop will check if the value of y is non-zero. if it is non-zero(true) then it will iterate, if it is zero(false) then it will not-iterate or get to the following statement after while block 
    {
        printf("enter the number:\n");
        scanf("%d",&num);
        if(num>0)
        {
            pos=pos+1;
        }
        if(num<0)
        {
            neg=neg+1;
        }
        if(num==0)
        {
            zer=zer+1;
        }   
        printf("\ndo you want to enter another no(1-for yes/0-for no):\n");
        scanf("%d", &y);  
        
    }
     printf("\npoitive count:%d\nnegative count:%d\nzeros count:%d",pos,neg,zer);
     return 0;
}


//ascii values
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ch=0;
    while (ch<=255)
    {
        printf("\n%d is %c",ch,ch);
        ch++;
    }
    
    return 0;
}
*/

//armstrong between 1-500
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a,b,c,num,arnum;
    i=1;
    printf("\narmstrong number between 1-500 is:");
    while (i<=500)
    {
        a=i%10;   //unit digit
        b=i%100;  //last two digit
        b=b/10;     //middle digit
        c=i/100;  //first digit
        arnum=(c*c*c)+(b*b*b)+(a*a*a);
        if (arnum==i)
        {
            printf("\n%d",arnum);
        }
        i++;
    }
    
    return 0;
}
*/

