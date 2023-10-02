//simple interest
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int p,n;
    float si,r;
    for ( int i = 1; i <= 3;i++)
    {
        printf("\nenter the value p,n,r:\n");
        scanf("%d%d%f",&p,&n,&r);
        si=p*n*r/100;
        printf("\nsimple interest is:%f",si);
    }
    return 0;
}*/

//nested loops
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for ( i = 1; i <= 3; i++)
    {
        for ( j = 1; j <= 2; j++)
        {
            printf("\ni=%d j=%d sum=%d",i,j,i+j);
        }
        
    }
    
    return 0;
}*/

//do-while (exit control loop-the condition is checked after the executuion of the statement
//even if the condition is false the statement within the loop is executed at least once)
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    do
    {
        printf("\nswami ");
    } while (4<1);     //the condition is wrong but the statement is still executed once
    
    return 0;
}*/

//a number is a prime or not, prime no. is either divisible by itself or 1
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,i;
    printf("\nenter the number:\n");
    scanf("%d",&num);
    for (i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            printf("\n%d is Not a Prime number",num);
            break;
        }
    }
    if(num==i)
    {
        printf("\n%d is a Prime number",num);
    }
    
    return 0;
}*/

//12
//21 pattern
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for ( i = 1; i <=2; i++)
    {
        for ( j =1 ; j <=2; j++)      
        {
            if (i==j)
            {
                continue; //it gives the control back to the loop or at the begining of the loop.
            }             //when continue is encountered in for loop it takes the control over iterate or increment counter part
            printf("\n%d %d",i,j); //in while and do-while continue takes control over condition part
        }
        
    } 
    return 0;
}*/

//the odd loop
//the loops in which we don't know how many times the statements within it are going to be executed.
//here we ask the user every time, if the user want to continue then the user will tell yes and no for other case
//it is simpler to do in do-while loop
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    char more;
    int num;
    do
    {
        printf("\nEnter the number:\n"); //when scanf assing the num to the variable the enter key is kept unread
        scanf("%d",&num); //when we input char value then scanf takes the enter key as it value so fflush() is used to remove the buffer
        printf("\nsquare of %d is %d",num,num*num);
        printf("\ndo you want to enter another number (y/n):\n");
        fflush(stdin); //this function out any data remaining in the buffer in this case keyboard buffer(stdin:buffer related with standard input device)
        scanf("%c",&more);//
    } while (more=='y'); //do-while will continue till user enters y
    
    return 0;
}*/

//the odd loop using while   /in the above do-while loop, statement gets executed once before the condition is checked  
/*#include<stdio.h>          /but in while condition is checked first so that we need to specify the value of var more
int main(int argc, char const *argv[])
{
    int num;
    char more='y'; //here more='y' is defined earlier so that to satisfy the condition and the while loop will executed once
    //more='y'; 
    while (more=='y')
    {
        printf("\nEnter the number:\n");
        scanf("%d",&num);
        printf("\nsquare of %d is %d",num,num*num);
        printf("\ndo you want to enter another number (y/n):\n");
        fflush(stdin);
        scanf("%c",&more);
    }
    
    return 0;
}*/

//6.1 prime number between 1-300
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;       //defining variables 
    printf("\nthe prime numbers are:\n1\b");  // \n1 for printing 1 in new line and \b for getting the output after backspace 
    for ( i = 1; i<=300; i++)                //i is the number, the loop will begin from 1 till 300, it's the outer loop  
    {
        for ( j =2; j <i; j++)               //the inner loop: j is defined as 2, as to prove a prime number a number is either is divisible 
        {                        // by itself or 1 (ii)to check the no. is not divisible by other no. between it, so we will start it by 2
            if (i%j==0)          //to check the no.i is divisible by other no. or not
            {                    // break:it breaks the control of the loop
                break;          //if the no. is divisible by other no. between it then break, as it is not a prime and there is no need 
            }                   //of further checking
        }
        if (i==j)               //if the above condition fails i.e the no. is not divisible by any other no. between it
        {                       //then to check if it is prime it should be equal to itself
            printf("\t %d",j);
        } 
        
    }
    
    return 0;
}*/

//6.2 add first 7 terms of series 1/1!+2/2!+3/3!
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    float fact,sum=0;
    for ( i = 1; i <=7; i++)
    {
        for ( fact=j = 1; j <=i; j++) //j will iterate to i as the i is the number here on which the facto depend
        {
            fact=fact*j;   //fact is 1 as the loop iterates the value of fact*j will be assing to fact
        }
        sum=sum+i/fact; //sum is 0 and the value i/fact is assing first to sum then it is added to next value of i/fact
        printf("\nthe series is %f",i/fact);
    }     
    printf("\nthe sum of series is:%f",sum); //the printf function to print sum is used outside the for loop to avioid iteration or getting the o/p in row manner
    return 0;
}
*/

//sum of n number of elements
//sum of n numbers formlua n(n+1)/2 another formula s=n(a+l)/2,
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum,i;
    for (int i = 1; i <= 7; i++)
    {
     //here value of i is comming 8 it should come to 7 as per the number of elements   
    }
    sum=(i-1)*(i)/2; // as the value is comming 1 more than orignal element
    printf("\n%d",sum);
    return 0;
}
*/

//all the combination of 1 2 3
//nesting of loops the contol get transfered when the condition gets false
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k;
    for ( i = 1; i <=3; i++)
    {
        for ( j = 1; j <= 3; j++)
        {
            for ( k = 1; k <=3; k++)
            {
                printf("\n%d%d%d\n..\n..\n",i,j,k);
            }
            
        }
        
    }
    
    return 0;
}*/

//b.1 multiplication table of the number entered by the user.  
//output should be displayed like,
//29*1=29
//29*2=58
//...
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,i,mul;
    printf("\nenter the number:\n");
    scanf("%d",&num);
    for ( i = 1; i <= 10; i++)
    {
        mul=num*i; //value of 2*1
        printf("\n%d*%d=%d",num,i,mul); // \n..\n
    }
    return 0;
}
*/

//b.2 approximate level of intelligence of a person can be calculated using i=2+(y+0.5x)
//wap that will produce a table of output of i,y,x
//y varies from 1-6,for each value of y, x varies from 5.5 to 12.5 in step of 0.5
//so y will be in outer loop and x in inner  loop within x loop the value of i will be calculated
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int y;
    float i,x;
    printf("\nThe table for the values of \ni          y           x\n");
    for ( y = 1; y <= 6; y++)
    {
        for ( x = 5.5; x <= 12.5; x+=0.5)
        {
            i=2+(y+0.5*x);
            printf("\n%.4f    %d      %.4f\n.....\n",i,y,x);
        }
        
    }
    
    return 0;
}*/
