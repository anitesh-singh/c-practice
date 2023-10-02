//leap year or not
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int yr;
    printf("\n enter the year:");
    scanf("%d",&yr);
    if (yr%100!=0 && yr%4==0 || yr%400==0)  //if the year is not a century year then it should be divisible by 4
    {                                      //the year is not a century year if this is false then the year must be century yeary and divisible by 400
        printf("the year is a leap year");

    }
    else
        printf("not a leap year");
    return 0;
}
*/


 //leap year using logical operators (&& || !)
/*
 #include<stdio.h>
 int main(int argc, char const *argv[])
 {
    int year;
    printf("enter the year:\n");
    scanf("%d",&year);
    if (year%400==0||year%100!=0&&year%4==0)    //if year is not a century yeard then it should be completly divisible by 4
    {
        printf("leap year");}
    else
        printf("not a leap year");
    return 0;
 }
 */


//leap year using conditional operator (? :)
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    year%400==0||year%100!=0&&year%4==0?printf("leap year"):printf("not a leap year");  
//if the expresssion is correct the statement after ? is checked or printed if the expression is false then the statement after the : is printed
    return 0;
}
*/


//character is entered,program to determine whether it is capital, small case, digit or special symbol
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90)
    {
        printf("upper case letter\n");
    }
    if (ch>=97 && ch<=122)
    {
        printf("lower case letter\n");
    }
    if (ch>=48 && ch<=57)
    {
        printf("the character is a digit\n");
    }
    if((ch>=0 && ch<48) || (ch>57 && ch<65) || (ch>90 && ch<97) || (ch>122))
    {
        printf("the character is special symbol\n");
    }
    return 0;
}
*/

//lower case alphabet using conditional operator
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("enter the cahracter");
    scanf("%c",&ch);
    ch>=97 && ch<=122?printf("lower case letter"):printf("not a lower case letter");
    return 0;
}*/

//special symbol or not using conditional operator
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("enter the cahracter");
    scanf("%c",&ch);
    ch>=0&&ch<=47||ch>=58&&ch<=64||ch>=91&&ch<=96||ch>=123&&ch<=127?printf("special symbol"):printf("not a special suymbol");

    return 0;
}
*/

//triangle is valid or not
//for valid sum of two sides is greater than the largest of the three sides
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,sum,largeside;
    printf("enter the three sides of the triangle\n ");
    scanf("%d%d%d",&a,&b,&c);
    // finding the largest of the three sides and assinging the value of sum and largeside
    if(a>b)
    {
        if(a>c)                     //when a is largest of the 3
        {
            sum=b+c;
            largeside=a;            
        }
        else
        {
            sum=a+b;               //c is largest of the 3
            largeside=c;
        }
    } 
    else
    {
        if(b>c)                    //b is largest of the 3
        {
            sum=a+c;
            largeside=b;
        }
        else
        {
            sum=a+b;                //again c is largest of the 3
            largeside=c;
        }
    }

    if(sum>largeside)
        printf("the triangle is valid\n");
    else
        printf("the triangle is invalid\n");

    return 0;
}
*/

//check whether the traingle is isosceles,equilateral,scalene,right angled trianle
//a*a=b*b+c*c right angle
/*
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three sides of the triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c && a==c)
        printf("equilateral triangle\n");
    if((a==b) && (a!=c) || (b==c) && (b!=a) || (a==c) && (a!=b))
        printf("isosceles triangle\n");
    if(a!=b && b!=c && a!=c)
        printf("scalene triangle\n");
    if((a*a+b*b==c*c) || (b*b+c*c==a*a) || (c*c+a*a==b*b))
        printf("right angled triangle\n");
    return 0;
}
*/


// RGB format to CMYK format *      in assingment operator value assinged will be from right to left i.e. it follows right to left associativity
/*#include<stdio.h>
int main()
{
    float r,g,b,c,m,y,k,white,max;
    printf("enter the value of R,G,B(within range 0-255):\n");
    scanf("%f%f%f",&r,&g,&b);
    //if the value of R,G,B are 0 then CMY are all 0 and K is 1 also white is 0(as white is maximum of (rgb))
    if(r==0 && g==0 && b==0)
    {
        c=0;
        m=0;
        y=0;
        white=0;
        k=1;
    }
    else
    {
        //assinging r/255 to r and respectively
        r=r/255;
        g=g/255;
        b=b/255;
        //as white=max(r/255,b/255,g/255) i.e. from rgb whichever poseses maximum value will be the value of white
        max=r;          //if red is maximum of the 3

        if(g>max)       //when green is maximum of the 3
        {
            max=g;
        }
        if (b>max)     // when blue is maximum
        {
            max=b;
        }
        
        white=max;      //assinging the maximum value to white

        c=(white-r)/white;     //cyan
        m=(white-g)/white;     //magenta
        y=(white-b)/white;     //yellow  
        k=1-white;             //black
    }

    printf("\ncyan=%f \nmagenta=%f \nyellow=%f \nblack=%f",c,m,y,k);  //it will vary from 0.0 to 1.0
    return 0;
}*/

//grade of steel is graded according to the following condition
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int hrd,ts;      //hardness  tensile strength
    float cc;         //carbon content
    printf("enter the hardness,carbon content and tensile strength\n:");
    scanf("%d%f%d",&hrd,&cc,&ts);
    if (hrd>50 && cc<0.7 && ts>5600)
    {
        printf("grade 10 steel");
    }
    else if(hrd>50 && cc<0.7 && ts<=5600)
    {
        printf("grade 9 steel");
    }
    else if(hrd<=50 && cc<0.7 && ts>5600)
    {
        printf("grade 8 steel");
    }
    else if(hrd>50 && cc>=0.7 && ts>5600)
    {
        printf("grade 7 steel");
    }
    else if(hrd>50 || cc<0.7 || ts>5600)
    {
        printf("grade 6 steel");
    }
    else
    {
        printf("grade 5 steel");
    }

    return 0;
}
*/



//BMI-ratio of weight in kg and square of height in meters
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    float w,h,bmi;
    printf("enter the weight(in kg) and height (in meters):");
    scanf("%f%f",&w,&h);             //receiving weight and height
    bmi=w/(h*h);                     //calculation
    if(bmi<15)
    {
        printf("starvation");
    }
    else if (bmi<=17.5)
    {
        printf("anorexic");
    }
    else if (bmi<=18.5)
    {
        printf("underweight");
    }
    else if (bmi<=24.9)
    {
        printf("ideal");
    }
    else if (bmi<=25.9)
    {
        printf("overweight");
    }
    else if (bmi>=30 && bmi<=30.9)
    {
        printf("obese");
    }
    else
    {
        printf("morbidly obese");
    }
    return 0;
}
*/




//wap greatest of the 3 numbers using conditional operators
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,z;
    printf("enter the three numbers:");
    scanf("%d%d%d",&x,&y,&z);
    x>y?(x>z?printf("\nx is the greatest number:%d",x):printf("\nz is greatest of the three:%d",z)):(y>z?printf("\ny is greatest of the three:%d",y):printf("\nz is greaterest of the three:%d",z));
    return 0;
}
*/



//sum of sine and cos is =1      receiving the angle in degree      conditional operator
/*
#include<stdio.h>
#include<math.h>           //for sin() cos()
int main()
{
    float a,b,c;
    printf("enter the value of angle in degree:");
    scanf("%f",&a);
    b=pow(sin(a),2);
    c=pow(cos(a),2);
    b+c==1?printf("sum is equal to 1"):printf("not equals to 1");
    return 0;
}
*/



//salary
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    float sal;
    printf("enter the salary:\n");
    scanf("%d",&sal);
    sal>=25000 && sal<=40000?printf("\nmanager"):(sal>=15000 && sal<25000?printf("\naccountant"):printf("\nclerk"));
    return 0;
}
*/


// 3 gift 
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m,s,ms;   // math science math ands cience
    printf("enter '1' if you passed maths exam otherwise '0'\n");
    scanf("%d",&m);
    printf("enter '2' if you passed science exam otherwise '0'\n");
    scanf("%d",&s);
    printf("enter '3' if you passed both math and science exam otherwise '0'\n");
    scanf("%d",&ms);
    if(m==1)
        printf("\nyou will get the gift of RS-15");
    if(s==2)
        printf("\nyou will get the gift of RS-15");
    if(ms==3)
        printf("\nyou will get the gift of RS-45");
    if(m>2 || s>3 || ms>4)
        printf("\n 'WRONG ENTRY'");
    return 0;

}
*/