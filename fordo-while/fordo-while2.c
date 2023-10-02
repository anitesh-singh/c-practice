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
    int p=100000,i;          //let prev year pop be x, then new pop=x+x*10/100 from here pop, p=1000000
    for ( i = 1; i <=10; i++)
    {
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
int main(int argc, char const *argv[])
{
    int a,b,c,i,j;
    for ( a = 1; a <= 20; a++)
    {
        for ( b =a; b <= 20; b++)
        {
        
            c=a*a*a+b*b*b;
            //printf("%d %d %d\n",a,b,c);
            for ( i = 1; i <= 20; i++)
            {
                for ( j = i;  j<= 20; j++)   
                {
                    if (i*i*i + j*j*j == c && i!=a && j!=b  && i!=b && j!=a )
                    {                    
                        printf("\n %d %d, %d %d is %d\n",a,b,i,j,c);
                    }
                    
                }
                
            }
            
            
             
        }
           
    }
    
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int num, i, j, k, l;
	for (num = 1; num < 5000; num++)
	{
		for (i = 1; i < num; i++)
		{
			if (num < i*i*i)
				break;
			for (j = i + 1; j < num; j++)
			{
				if (num < j*j*j)
					break;
				for (k = i + 1; k < num; k++)
				{
					if (k*k*k > i*i*i + j*j*j)
						break;
					for (l = k + 1; l < num; l++)
					{
						if (num < k*k*k + l*l*l)
							break;
						if ((num == i*i*i + j*j*j) && (num == k*k*k + l*l*l))
						{
							printf("\n%d^3 + %d^3 = %d^3 + %d^3 = num : %d",i, j, k, l, num);
							break;
						}
					}
				}
			}
		}
	}
	_getch();
	return 0;
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

//b.i wap to print following output
  //              1
 //           2       3
 //       4       5       6
 //   7       8       9       10

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a=4,b=1,k,l=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=a;j++)
			printf(" ");
		a--;
		
		for(k=1;k<=b;k++)
		{
			printf("%d ", l);
			l++;
		}
		b++;
		
		printf("\n");
	}
	getch();
	return 0;
}