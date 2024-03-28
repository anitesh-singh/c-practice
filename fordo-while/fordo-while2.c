//b.3 no. of year=n , interest compound q times per year, at annual roi r %
//principal p compounds to a
//a=p(1+r/q)^nq, read 10 sets of p,n,r,q and calculate corresponding a
/*#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int i;
    float p,n,q;
    float a,r;
    for ( i = 1; i <= 10; i++)
    {
        printf ("\nEnter the principal amount:");

        scanf ("%f", &p);

        printf ("\nEnter the rate of interest:");

        scanf ("%f", &r);

        printf ("\nEnter the number of years:");

        scanf ("%f", &n);

        printf ("\nEnter the compounding period:");

        scanf ("%f", &q);
        r=r/100;
        a=p*pow(( 1 + (r/q )), ( n*q ));
        printf("\nThe compounded amount=%f",a);
    }
    
    return 0;
}*/

//b.d (x-1)/x + 1/2((x-1)/x)^2 + 1/2((x-1)/x)^3......
//calculate sum of first 7 terms of the series
//the power is incremented by 1, so loop counter will be set in power
/*#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float x,i;
    float sum;
    printf("\nenter the value of x:\n");
    scanf("%f",&x);
    sum=(x-1)/x;
    for ( i = 2; i <= 7; i++)
    {
        sum=sum+0.5*pow(((x-1)/x),i);
        
    }
    printf("\nsum of series is %f\n",sum);
    return 0;
}*/

//b.e pythagorean triplets: which satisfy pythagoras theorem a^2+b^2=c^2
//3 loops a b c <=30 ,if (a^2+b^2=c^2), then print
/*#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("\nThe pythagorean triplets with side lenth less than or equal to 30 are:\n");
    for ( a = 1; a<=30; a++)
    {
        for ( b = a; b <= 30; b++)            //b=a c=a so that older values or similar values doesn't get repeated
        {                                    //intialized value of b and c depend on a
            for ( c = b; c <= 30; c++)
            {
                if(a*a + b*b == c*c )   // || b*b + c*c == a*a || a*a + c*c == b*b)
                    printf("\n%d %d and %d\n",a,b,c);
            }
            
        }
        
    }
    
    return 0;
}*/

//b.f todays population=100000, increased at rate 10% per year for last 10 year 
//wap to determine population at the end of each year in the last decade
//p=b*r*n    find b=popul/100, population before 10 year

/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int popul=100000,i;
    for ( i = 1; i < 10; i++)
    {
        popul=popul-(popul/100)*10;
        printf("\n%d  : %d year",popul,10-i);

    }
    
    return 0;
}*/

/*
#include<stdio.h>
#include<conio.h>

int main()
{
	int pop = 100000;

	for (int i = 0; i < 10; i++)
	{
		pop -= (pop / 100) * 10;
		printf("Year %d : %d\n", 10-i, pop );
	}
	getch();
	return 0;
}
*/

// !!right logic of the above!!
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int p=100000,i;          //let prev year pop be x, then new population 100000=x+x*10/100 i.e. 11x=100000*10 from here pop, p=1000000
    for ( i = 1; i <=10; i++)
    {
        //calculating previous year population
        p=(p*10)/11;
        printf("\n%d : %d year\n",p,10-i);
    }
    
    return 0;
}*/


//smilies over the screen
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int r,c;
    for ( r = 0; r <=24; r++)
    {
        for ( c = 0; c <= 74; c++)
        {
            printf("%c",1);
        }
        
    }
    return 0;
}*/

//b.g ramanujan number( smallest number that can be expressed as sum of two cubes in two different ways)
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


//b.h wap to print 24 hrs of day with suitable suffixes am pm midnight noon
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("\nThe 24 Hours of Day:");
    for ( i = 0; i <=24; i++)
    {
        if (i==0)
        {
            printf("\n%d%d:00am midnight\n",i,i);
        }
        else if (i<12)
        {
            printf("%d:00am\n",i);
        }
        else if (i==12)
        {
            printf("%d:00pm noon\n",i);
        }
        else if (i>12 && i!=24)
        {
            printf("%d:00pm\n",i-12);
        }
    }
    
    return 0;
}*/


//b.i wap to print following output  floyd's triangle
  //              1
 //           2       3
 //       4       5       6
 //   7       8       9       10

/*#include<stdio.h>
int main()
{
    int i,j,k,l=1;
    
    
    
    for(i=1;i<=4;i++) //no. of rows
    {
        for(j=4;j>i;j--)//space from left
        {
            printf(" ");
        }
        for(k=1;k<=i;k++) //printing no. and adding space at right also including middle space  
        {
            printf("%d ",l++);
        }
        printf("\n");
    }
    

}*/

//printing star pattern
/*#include<stdio.h>
int main()
{
    int i,j,k,l=1;
    
    
    
    for(i=1;i<=4;i++) //no. of rows
    {
        for(j=4;j>i;j--)//space from left
        {
            printf(" ");
        }
        for(k=1;k<=i;k++) //printing no. and adding space at right also including middle space  
        {
            printf("* ");
        }
        printf("\n");
    }
    

}*/

//printing pattern at left side
/*#include<stdio.h>
int main()
{
    int i,j,k,l=1;
    
    
    
    for(i=1;i<=4;i++) //no. of rows
    {
        for(k=1;k<=i;k++)//printing the no. directly by the loop exluding the left and right spaces
        {
            printf("*");
        }
        printf("\n");
    }

    

}*/


//pattern at right side 
/*#include<stdio.h>
int main()
{
    int i, j,k;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/

//reverse of star pattern 
/*#include<stdio.h>
int main()
{
    int i, j,k,l;
    for(i=1;i<=5;i++)
    {
        
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        
        for(k=5;k>=i;k--)
        {
            printf("* ");
        }
        printf("\n");
    }

}*/

//printing the leg like star pattern  
/*#include<stdio.h>
int main()
{
    int i, j,k,l;
    for(i=1;i<=5;i++)//no. of rows 
    {
        for ( l = 5; l>=i; l--)  // printing the left side start 
        {
            printf("*");
        }
        
        for(j=1;j<=i;j++)
        {
            printf("  "); //two spaces required, spaces between the statement or stars
        }
       
        for(k=5;k>=i;k--) // printing the right side star 
        {
            printf("*");
        }
        printf("\n"); //breaking the line after execution of the first row
    }

}*/


//pattern(in these only we have to take input and decrement the starting loop)
// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EFCBA
/*#include<stdio.h>

int main()
{
    int i,j,k;
    for(i=7;i>=1;i--)
    {
        for(j=1;j<=7;j++)
        {
            if (j<=i)
            {
                printf("%c",'A'+j-1);
            }
            else
            {
                printf(" ");
            }
            
        }
        for(k=6;k>=1;k--)
        {
            if(k<=i)
            {
                printf("%c",'A'+k-1);
            }
            else
            {
                printf(" ");
            }
        }
        
    printf("\n");
    }
return 0;
}*/

//pascals triangle

/*#include<stdio.h>
int main()
{
    int row, spaces,i,coef=1;
    for(row=0;row<=4;row++)
    {
        for(spaces=4;spaces>=row;spaces--)
        {
            printf("  ");
        }
        for(i=0;i<=row;i++)
        {
            if (i==0 || row==0)
            {
               coef=1;
            }
            else{
                coef=coef*(row-i+1)/i;
            }
            printf("%4d",coef);
        }
    printf("\n");
    }

}*/


