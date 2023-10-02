//profit and loss
/*
#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    printf("\nenter the cost price and the selling price:");
    scanf("%f%f",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if(p>0)
        printf("\nprofit of %f is made",p);
    if(l>0)
        printf("\nloss of %f is incurred",l);
    if(p=0)
        printf("\nthere is no profit no loss");
    return 0;
}*/

//check whether a number is even or odd 
/*#include<stdio.h>
int main()
{
    int n;
    printf("\nenter the number:");
    scanf("%d",&n);
    if(n%2==0)                           //if remainder is 0
        printf("\nthe number is even");
    else 
        printf("\nthe number is odd");

    return 0;
}
*/


//leap year or not
/*
#include<stdio.h>
int main()
{
    int y;
    printf("\nenter a year:");
    scanf("%d",&y);
    //cond1:it should be a century year for this it should be completely divisible by 100
    //cond2:if it is a century year to be a leap year it must be completely divisible by 400
    //cond3:if the year is completely divisible by 4 then it is a leap year
    if(y%100==0)
    {
        if(y%400==0)
            printf("\nthe year is leap year");
        else
            printf("\nnot a leap year");
    }
    else
    {
        if(y%4==0)
            printf("\nthe year is a leap year");
        else
            printf("\nnot a leap year");
    }
    return 0;
}
*/

//reverse of a number and check whether it is equal or not
/*
#include<stdio.h>
int main()
{   //input
    int n,d1,d2,d3,d4,d5,m;
    long int revnum;                              //for offering bigger range of integers
    printf("\nenter the five digit number:");
    scanf("%d",&m);
    n=m;
    //calculation
    d5=n%10;                                     //last digit 
    n=n/10;                                      //remaing number
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    revnum=d5*10000+d4*1000+d3*100+d2*10+d1;
    //condition checking and output 
    if(m==revnum)
        printf("\norignal number%d and reversed number%ld are 'EQUAL'",m,revnum);      //%ld is the format specifier of long int
    else
        printf("\norignal number%d and the reversed number %ld are 'NOT EQUAL'",m,revnum);
    return 0;
}*/


//youngest of the three
/*
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int s,r,a;
    printf("\nenter the ages of shyam ram and ajay:");
    scanf("%d%d%d",&s,&r,&a);
    if(s>r)
    {
        if(r>a)                                         //a<r<s
            printf("\najay is the youngest.age:%d",a);
        else                                                 //r<a<s
            printf("\nram is the youngest.age:%d",r);
    }    
    else
   // {
     //   if(a>s)                                                    //s<a<r
       //     printf("\nshyam is the youngest.age:%d",s);            
       // else                                                       //a<s<r
         //   printf("\najay is the youngest.age:%d",a);                  
    //}
        printf("\nshyam is the youngest.age:%d",s);               
    return 0;
}*/



//triangle is valid or not (three angkes are entered)
/*
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,sum;
    printf("enter the angles of the triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180)
        printf("\nThe Triangle is 'VALID'");
    else
        printf("\nThe Triangle is 'NOT VALID'");
    return 0;
}
*/



//absolute value abs() is a standard library function which is used for absolute value  math.h is required
/*
#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int n;
    printf("\nenter the no:");
    scanf("%d",&n);
    if(n<0)
        n=n*(-1);
    printf("\nthe absolute value is:%d",n);              //positive numbers
    return 0;
}
*/


//area of recatngle is greater than its perimeter
/*
#include<stdio.h>

int main()
{
    int a,b,ar,pr;
    printf("\nenter the length and breadth of rectangle: ");
    scanf("%d%d",&a,&b);
    ar=a*b;
    pr=2*(a+b);
    if(ar>pr)
        printf("\narea is greater than perimeter.area:%d peri:%d",ar,pr);
    if(ar<pr)
         printf("\nperimeter is greater than area");
    if(ar==pr)
        printf("\narea is equal to perimeter");
    return 0;
}
*/


//three points fall on a straight line
//tringle method:|x1(y2-y3)+x2(y3-y1)+x3(y2-y1)|=0   then they are coolinear
//distance method:sqrt(pow(x2-x1),2)+pow((y2-y1),2)) for ab     for coolinearity ab+bc=ca
//slope method:slope(pq)=slope(qr)     m=(y2-y1)/(x2-x1)  
/*
#include<stdio.h>

int main()
{
    int x1,x2,x3,y1,y2,y3,m1,m2;
    printf("enter the first point A:\n");
    scanf("%d%d",&x1,&y1);
    printf("enter the secon point B:\n");
    scanf("%d%d",&x2,&y2);
    printf("enter the third point C:\n");
    scanf("%d%d",&x3,&y3);
    m1=abs((y2-y1)/(x2-x1));                //for line  ab
    m2=abs((y3-y2)/(x3-x2));                //for line bc
    if(m1==m2)
        printf("the points are on a straight line");
    else
        printf("the points 'dont' form a strainght line");
    return 0;
}
*/



//a point lies inside outside or on the circle 
/*#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int x,y,p,q,r,d;
    printf("\nenter the coordinates of center of circle(x,y)and radius:");
    scanf("%d%d%d",&x,&y,&r);
    printf("\nenter the coordinates of the points(p,q):");
    scanf("%d%d",&p,&q);
    d=sqrt(pow((p-x),2)+pow((q-y),2));                              //dis=x*x+y*y;   d=r*r
    if(d==r)                                                        //if(dis==d)
        printf("\npoint lies on the circle.");
    else
    {
        if(d>r)                                                        //if(dis>d)
            printf("\npoint lies outside the circle");
        else
            printf("\npoint lies inside the circle");
    }
    
    return 0;
}
 */



//point lies on x axis y axis or origin
//x(x,0)  y(0,y) o(0,0)
/*
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x,y;
    printf("\nenter the x and y coordinates of the point:");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0)
        printf("\npoint lies on origin");
    else if(x!=0 && y==0)
        printf("\npoint lies on x axis");
    else if(x==0 && y!=0)
        printf("\npoint lies on y axis ");
    else
        printf("\n point neither lies on nay of the axis, nor origin");
    return 0;
}*/
  


//monday on 1/1/1  wap to find out what is the on first jaunuary of the input year
/*
#include<stdio.h>
int main()
{
    int yr,leapdays,firstday;                    //yr =2000
    long int normaldays,totaldays;
    printf("enter the year:\n");
    scanf("%d",&yr);
    normaldays=(yr-1)*365l;                             //(2000-1)*365=729635
    leapdays=(yr-1)/4-(yr-1)/100+(yr-1)/400;            //(1999/4)-1999/100+1999/400=474
    totaldays=normaldays+leapdays;                      //729160
    firstday=totaldays%7;                              //5
    if (firstday==0)
    {
        printf("monday");
    }
    if (firstday==1)
    {
        printf("tuesday");
    }
    if (firstday==2)
    {
        printf("wednesday");
    }
    if (firstday==3)
    {
        printf("thursday");
    }
    if (firstday==4)
    {
        printf("friday");
    }
    if (firstday==5)                                   //result
    {
        printf("saturday");
    }
    if (firstday==6)
    {
        printf("sunday");
    }
    
    return 0;
}*/







