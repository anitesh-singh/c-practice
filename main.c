/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("hello world");
    return 0;
}*/


//matchstick game
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


//decimal to octal
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
    //assinging a value to max and min for comparison  
    max=num;
    min=num;
    while(i<totnum)
    {
        printf("enter the number of the list:\n");
        scanf("%d",&num);
        //if the input num gets bigger than specified value of max then change value of max
        if(num>max)
        {
            max=num;
        }
        //if the input num gets lesser than specified value of min then change value of min
        if(num<min){
            min=num;
        }
        i++;
    }
    range=max-min;
    printf("range:%d",range);
}*/

/*#include<stdio.h>
int main()
{
    int i,num,j;
    for (i=1;i<=300;i++)
    {
        num=i;
        for(j=2;j<num;j++)
        {
            if(num%j==0)
            {
                break;
            }
        }
        if(j==num)
        {
            printf("%d\t",num);
        }
    }
}*/

/*#include<stdio.h>
int main(){
    int i=1,j;
    float fact, sum=0.0;
    for ( ; i <=7; i++)        
    {
        fact=1.0;
        for (j = 1; j <=i; j++)
        {
            fact=fact*j;
        }
        sum=sum+i/fact;
    }
    printf("sum of first seven terms of series: %f",sum);
    
}*/

/*#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    for ( a = 1; a <= 30; a++)
    {
        for(b=a;b<=30;b++)
        {
            for(c=b;c<=30;c++)
            {
                if(a*a+b*b==c*c)
                {
                    printf("%d %d %d\n ",a,b,c);
                }
            }
            
        }
    }
    
    
}*/

/*#include<stdio.h>
int main()
{
    int i,pop=100000,poplastyear,rev=0,unit;
    for ( i = 1; i <=10; i++)
    {
        poplastyear=pop-(pop*0.10);
        pop=poplastyear;
        printf("%d\n",poplastyear);
    }
  
}*/

/*#include<stdio.h>
int main(){
    int a,b,c,d,num;
    for ( a = 1; a <=20; a++)
    {
        for ( b = a+1; b <=20; b++)
        {
            num=a*a*a+b*b*b;
            for ( c = a+1; c <=20; c++)
            {
                for ( d =c+1; d <=20; d++)
                {
                    if(num==c*c*c+d*d*d)
                    {
                        printf("%d %d: %d \n%d %d: %d\n",a,b,num,c,d,num);
                    }
                }
                
            }
            
        }
        
    }
    
}*/

//FUNCTION
//FACTORIAL USING FUNCTION
// a function with argument and return value
/*#include<stdio.h>
int fact(int);   //declaration, telling compiler that there exist a function fact
int main()
{
    int num,facto;
    printf("enter the number:\n");
    scanf("%d",&num);
    facto=fact(num);             //calling function
    printf("factorial of %d is %d",num,facto);
}
int fact(int num)      //function defination or called function, calculating factorial
{
    int i,fact=1;         
    for ( i =1; i <= num; i++)
    {
        fact=fact*i;
    }
    return fact;
    
}

*/

//any year  to roman no.
/*#include<stdio.h>

void romane(int);

int main()
{
    int yr;
    printf("enter the year:\n");
    scanf("%d",&yr);
    romane(yr);
    return 0;
}

void romane(int yr)
{
    while(yr)
    {
        if(yr>=1000)
        {
            printf("M");
            yr=yr-1000;
        }
        if (yr<1000 && yr>=500)
        {
            printf("D");
            yr=yr-500;
        }
        if (yr<500 && yr>=100)
        {
            printf("C");
            yr=yr-100;
        }
        if (yr<100 && yr>=50)
        {
            printf("L");
            yr=yr-50;
        }
        if (yr<50 && yr>=10)
        {
            printf("X");
            yr=yr-10;
        }
        if (yr<10 && yr>=5)
        {
            printf("V");
            yr=yr-5;
        }
        if (yr<5 && yr>=1)
        {
            printf("I");
            yr=yr-1;
        }
        
    }
}*/


//function to obtain prime factors 
/*#include<stdio.h>
int prime(int);
int main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    prime(num);
    return 0;
}
int prime(int num)
{
    int i;
    for ( i = 2; i <= num; )
    {
        if(num%i==0)
        {
            printf("%d ",i);
            num=num/i;
        }
        else
        {
            i++;
        }
       
    }

    
}*/

//pointers
/*#include<stdio.h>
#include<math.h>
int calculate(int *,int *, double *);
int main()
{
    int sum,avg;
    double stdev;
    calculate(&sum,&avg,&stdev);
    printf("sum=%d average=%d satndard deviation=%lf\n",sum,avg,stdev);
    return 0;
}
int calculate(int *sum, int *avg, double *stdev)
{
    int a,b,c,d,e;
    printf("enter the five numbers:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    *sum=a+b+c+d+e;
    *avg=*sum/5;
    *stdev=sqrt((pow((a-*avg),2.0)+pow((b-*avg),2.0)+pow((c-*avg),2.0)+pow((d-*avg),2.0)+pow((e-*avg),2.0))/4);
}*/


/*#include<stdio.h>
int main()
{
    float x=3.14;
    float *y;
    float **z;
    y=&x;
    z=&y;
    printf("%p  %p  %p\n",&x,&y,&z);
    printf("%p  %p\n",y,z);
    printf("%f  %f  %f",x,*y,**z);

}*/

//circular shifting of values
/*#include<stdio.h>
void circular_shift(int *, int *, int *);
int main()
{
    int x,y,z;
    char ch='y';
    printf("enter the values of x, y ,z:\n");
    scanf("%d%d%d",&x,&y,&z);
    while(ch=='y')
    {
        printf("values before circular shift:   x=%d y=%d z=%d\n\n",x,y,z);
        circular_shift(&x,&y,&z);
        printf("values after circular shift:    x=%d y=%d z=%d\n",x,y,z);
        printf("\ndo you want to circular shift again?(y/n):\n");
        fflush(stdin);
        scanf("%c",&ch);
    }
    return 0;
}
void circular_shift(int *a,int *b,int *c)
{
    int t;
    t=*a;
    *a=*c;
    *c=*b;
    *b=t;
   
}*/

//recursion
//factorial
/*#include<stdio.h>
int facto(int);
int main()
{
    int num,fact;
    printf("enter the number for calculating factorial:\n");
    scanf("%d",&num);
    fact=facto(num);
    printf("factorial of %d is %d",num,fact);
    return 0;
}
int facto(int num)
{
    if(num==1)    //base condition, where fuction stops calling itself
    {
        return 1;
    }
    else
        return (num*facto(num-1)); //direct recursive call 
}*/

//sum of digits of 5-digit number
/*#include<stdio.h>
int sum(int);
int main()
{
     int num,calculation;
    printf("enter the 5-digit number:\n");
    scanf("%d",&num);
    calculation=sum(num);
    printf("sum of the digits of the number:%d is %d\n",num,calculation);
}
int sum (int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return ((num%10)+sum(num/10));
    }
}*/

//fibonacci series
/*#include<stdio.h>
void fibo(int , int,int);
int main()
{
    printf("0 1 ");
    fibo(0,1,1);
    return 0;
}

void fibo(int a,int b,int i)
{
     int sum;
    if(i<=24)
    {
        sum=a+b;
        printf("%d ",sum);
    }
    
    fibo(b,sum,i+1);
}*/


/*#include<stdio.h>
int fibo(int);
int main()
{
    int i,n=0,num=25;
    for(i=1;i<=num;i++)
    {
        printf("%d\t",fibo(n));
        n++;
    }
    return 0;
}
int fibo(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else
    {
        return (fibo(n-1)+fibo(n-2));
    }
}
*/