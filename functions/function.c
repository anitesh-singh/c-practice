// function code example
//1.without argument without return value
/*#include<stdio.h>
void func() //defination --void for not having a return value
{
    int a,b;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
}
int main()
{
    func();   //calling of function
    return 0;
}
*/
//2.without argument with return
/*#include<stdio.h>
int takenumber();  //declaration
int main()
{
    int a;
    a=takenumber();  //call
    printf("\n%d",a);
    return 0;
}
int takenumber()  //defination
{
    int i;
    printf("\nenter the number");
    scanf("%d",&i);
    return i;
}*/
// 3.with argument without return value 
/*#include<stdio.h>
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n%c",'*');
    }
    
}
int main()
{
    printstar(6);
    return 0;
}*/
// 4.with argument with return value
/*#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,c;
    a=3;
    b=5;
    c=sum(a,b);
    printf("%d",c);
    return 0;
}*/

//decimal to roman equialent
/*#include<stdio.h>
int roman(int,int,char);
int main()
{
    int year,reqv;
    printf("\nenter the year:");
    scanf("%d",&year);
    year=roman(year,1000,'M');
    year=roman(year,500,'D');
    year=roman(year,100,'C');
    year=roman(year,50,'L');
    year=roman(year,10,'X');
    year=roman(year,5,'V');
    roman(year,1,'I');
    return 0;
}
int roman(int y,int n,char ch)
{
    int q,i;
    q=y/n;
    for ( i = 1; i <= q; i++)
    {
        printf("%c",ch);
    }
    return (y%n);
}
*/

//function to determine a year is leap year or not
/*#include<stdio.h>
void leapyear(int);           //function prototype declaration
int main(int argc, char const *argv[])   //calling function 
{
    int yr;
    printf("enter the year:\n");
    scanf("%d",&yr);
    leapyear(yr);             //calling 
    return 0;
}
void leapyear(int y)    //function prototype defination/called function
{
    if((y%400==0)||(y%100!=0)&&(y%4==0))
        printf("\nthe year is a leap year");
    else
        printf("\nthe year is not a leap year");
}   
*/



//printing prime factors
/*#include<stdio.h>
void factor(int num)  //declaration and defination ,,, called function
{
    int i;
    for ( i = 2; i <=num;)     //i=2 smallest prime no. loop will continue till num doesnot become less than i
    {  
        if(num%i==0) // remainder=0
        {
            printf("%d\n",i);
            num=num/i; //new number 
        }
        else  
            i++; //the above condition doesnot satisfied then increment i 
    }
    
    
}
int main(int argc, char const *argv[])   //calling function
{
    int number;
    printf("enter the number:\n");
    scanf("%d",&number);
    factor(number); //call
    return 0;
}
*/
