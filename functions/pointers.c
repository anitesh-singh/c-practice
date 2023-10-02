/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a=13.5;
    float *b,*c;
    b=&a;   //if b is storing address of a then *b will store value at address a
    c=b;    //b is storing add of a same is assing to c
    printf("%u %u %u\n",&a,b,c); //address of a, %u 16 bit add
    printf("%f %f %f %f %f\n",a,*(&a),*&a,*b,*c); //value at a
    return 0;
}
*/
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch='a';
    int k=35;
    float a=3.14;
    printf("%p %p %p\n",&ch,&k,&a); //%p hexadecimal format
    return 0;
}*/



//wap that recieves 5 integers and returns sum average and standard deviation
/*#include<stdio.h>
#include<math.h>
void calc(int*, int*, double*);
int main(int argc, char const *argv[])
{
    int sum, avg;
    double stdev;
    calc(&sum, &avg, &stdev);
    printf("\nsum=%d, average=%d, standard deviation=%lf",sum,avg,stdev);
    return 0;
}
void calc(int*s, int*a, double*sd)
{
    int a1,a2,a3,a4,a5,x;
    printf("\nenter the 5 integer numbers:");
    scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
    *s=a1+a2+a3+a4+a5;
    *a=(a1+a2+a3+a4+a5)/5;
    x=(pow((a1-*a),2.0)+pow(pow((a2-*a),2.0)+(a3-*a),2.0)+pow((a4-*a),2.0)+pow((a5-*a),2.0))/4;
    *sd=sqrt(x);
}*/

//wap that defines a function that calculates power of one number raised to the power of another and
//factorial of a number in one call
/*#include<stdio.h>
void powerfact(float,int, int,float*,int*);
int main(int argc, char const *argv[])
{
    int b,num,facto;
    float a,power;
    printf("\nenter the numbers to get a raised to b:");
    scanf("%f%d",&a,&b);
    printf("\nenter the number whose factorial is to be calculated:");
    scanf("%d",&num);
    powerfact(a,b,num,&power,&facto);
    printf("\nthe value of %.3f raised to power %d is:%.3f",a,b,power);
     printf("\nthe factorial of %d is: %d",num,facto);
    return 0;
}
void powerfact(float a,int b, int num,float *p,int *f)
{
    int fact=1;
    float po=1;
    for (int i = 1; i <=b ; i++)
    {
        po=po*a;
    }
    *p=po;
    for (int j = 1; j <=num ; j++)
    {
        fact=fact*j;
    }
    *f=fact;
    
}*/


//pointer points to int and pointers point to integer pointer, print values address
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a=3.14;
    float *b=&a;
    float **c=&b;
    printf("values %f %f %f\n",a,*b,**c);
    printf("address %p %p %p\n",&a,&b,&c); //%p hexadecimal formats
    printf("address stored:%p %p\n",b,c);
    printf("hexadecimal address %x %x %x\n",&a,&b,&c); //hexadecimal formats
    printf("32-64 bit address %u %u %u\n",&a,&b,&c);  //32-64 bit address
    printf("32 bit address %lu %lu %lu\n",&a,&b,&c);  //32 bit address
    printf("64 bit address %llu %llu %llu\n",&a,&b,&c); //64 bit address
    return 0;
}*/



//circular shifting of values (swaping)
/*#include<stdio.h>
void circular(int *, int *,int *);
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter the values of a, b, c:\n");
    scanf("%d%d%d",&a,&b,&c);
    circular(&a,&b,&c);
    printf("\na:%d\tb=%d\tc=%d",a,b,c);
    return 0;
}
void circular(int *a, int *b,int *c)
{
    int t;
        t=*a;
        *a=*c;
        *c=*b;
        *b=t;
    
}
*/
//another code
/*#include<stdio.h>
void circular(int , int ,int );
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter the values of a, b, c:\n");
    scanf("%d%d%d",&a,&b,&c);
    circular(a,b,c);
    return 0;
}
void circular(int a, int b,int c)
{
    int t;
    for (int i = 1; i <=2; i++)
    {
        t=a;
        a=c;
        c=b;
        b=t;
        printf("\nafter shifting %d times",i);
        printf("\na:%d\tb=%d\tc=%d",a,b,c);
    }
}
*/


//c.c define a function to compute distance between two points and use it to develop another function
//that will compute the area of a triangle, use these function to develop a function which returns a value
// 1 if point(x,y) lies inside the circle otherwise 0

#include<stdio.h>
#include<math.h>
float dist(int, int, int, int);
float area();
//float triarea(float , float , float);
int main(int argc, char const *argv[])
{
    int x1,y1,x2,y2;
    float a;
    printf("enter the coordinates of the two points x1 y1 x2 y2:\n");
    scanf("%d%d%d",&x1,&y1,&x2,&y2);
    a=dist(x1,y1,x2,y2);
    printf("\ndistance between two points is %f",a);
    area();
    return 0;
}
//function to calculate distance
float dist(int x1,int y1, int x2, int y2)
{
    int a;
    float b;
    a=pow((x2-x1),2)+pow((y2-y1),2);
    b=sqrt(a);
    return (b);
}
//funtion for checking the point lies inside the triangle and taking the input of the coordinates of the triangle
float area()
{
    float triarea(float , float , float);
    int x1,y1,x2,y2,x3,y3; int x4,y4;
    float d1,d2,d3,d4,d5,d6;
    float ar,a1,a2,a3,totalarea;
    printf("\nenter the coordinate of the vertices of the triangle x1,y1,x2,y2,x3,y3:\n");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("enter the coordinate of another point:\n");
    scanf("%d%d",&x4,&y4);
    d1=dist(x1,y1,x2,y2);
    d2=dist(x1,y1,x3,y3);
    d3=dist(x2,y2,x3,y3);
    ar=triarea(d1,d2,d3);
    printf("\nthe area of the triangle:%f",ar);
    d4=dist(x1,y1,x4,y4);
    d5=dist(x2,y2,x4,y4);
    d6=dist(x3,y3,x4,y4);
    a1=triarea(d1,d4,d5);
    a2=triarea(d3,d6,d5);
    a3=triarea(d2,d6,d4);
    totalarea=a1+a2+a3;
    if (totalarea-ar<=0.0009)   //0.0009 to conter the anamoly of floating point calculation
    {
        //return (1);
       printf("\nthe point (%d,%d) lies inside the triangle",x4,y4);
    }
    else
    {
        //return (0);
        printf("\nthe point (%d,%d) don't lies inside the triangle",x4,y4);
    }
}
//function to calculate area of a triangle
float triarea(float a,float b,float c)
{
    float s;
    s=(a+b+c)/2;
    float m;
    m=s*(s-a)*(s-b)*(s-c);
    float at=sqrt(m);
    return (at);
}