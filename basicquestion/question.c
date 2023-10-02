//18.03.2023
//gross salry calculation
/*#include<stdio.h>
int main()
{
float bs,dea,ra,gs;
printf("enter basic salary of ramesh:");
scanf("%f",&bs);
dea=bs*0.4;
ra=bs*0.2;
gs=bs+dea+ra;
printf("\nbasic salary of ramesh is= %f",bs);
printf("\ndeearness allowance= %f",dea );
printf("\n rent allowance=%f",ra );
printf("\n gr0ss salary =%f",gs);
 return 0;
}*/



//fahrenhite into centigrade
/*#include<stdio.h>
int main()
{
    float fh,c;
    printf("\n enter the temperatue in fahrenhite:");
    scanf("%f",&fh);
    c=(5/9)*(fh-32);
    printf("\ntemperature in fahrenhite is:%f \ntemperature in celcius is:%f",fh,c);
    return 0;
}*/



//paper size 
/*#include<stdio.h>
int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8;
    a1=1189;
    a2=841;
    printf("\nsize of A0 paper is:%dmm x %dmm",a1,a2);
    a3=841;
    a4=a1/2;
    printf("\nsize of A1 paper is:%dmm x %dmm",a3,a4);
    a5=a4;
    a6=a3/2;
    printf("\nsize of A2 paper is:%dmm x %dmm",a5,a6);
    a7=a6;
    a8=a5/2;
    printf("\nsize of A4 paper is:%dmm x %dmm",a7,a8);
    return 0;
}
*/

//herons formula 
//sqrt(sp-a)(sp-b)(sp-c)    sp-semiperimeter   real number will be used
/*#include<stdio.h>
#include<math.h>                       //for sqrt() function
int main()
{
    float a,b,c,sp,area;
    printf("\nEtner the sides of the triangle:");
    scanf("%f%f%f",&a,&b,&c);
    sp=(a+b+c)/2;                               //semi perimeter
    area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("\nsemiperimeter=%f \n area= %f",sp,area);
    
    return 0;
}
*/



//reversing the number
/*#include<stdio.h>
int main()
{
    int n,d5,d4,d3,d2,d1;
    long int revnum;       //offers a bigger range of integer
    printf("\n enter the five digit number:");
    scanf("%d",&n);
    d5=n%10;          //5th digit
    n=n/10;           //remaining digit
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;            //1st digit
    revnum=d5*10000+d4*1000+d3*100+d2*10+d1;      //reversing
    printf("\n the reversed number is:%ld",revnum);      //%ld is used for printing long integers
    return 0;
}*/


//smallest numbers of notes that will combine to give rs-n
/*#include<stdio.h>
int main()
{
    int amt,hun,fif,ten,five,two,one,total;
    printf("\nEnter the amount");
    scanf("%d",&amt);
    hun=amt/100;        //if 550/100=5 which is no. of hundrend notes 
    amt=amt%100;        //the remainder of the above will be the remaining amount i.e. 50
    fif=amt/50;
    amt=amt%50;
    ten=amt/10;
    amt=amt%10;
    five=amt/5;
    amt=amt%5;
    two=amt/2;
    amt=amt%2;
    one=amt/1;
    amt=amt%1;
    total=hun+fif+ten+five+two+one;
    printf("\nsmallest number of notes is:%d ",total);
    return 0;
}*/
//for the above two questions we need to do maths deal with reaminder and division



//sum of the digits 
/*
#include<stdio.h>
int main()
{
    int num,d1,d2,d3,d4,d5,sum;
    printf("\nenter the number:");
    scanf("%d",&num);
    d1=num%10;           //12345%10 the remainder is the 5 i.e the fifth digit
    num=num/10;            //12345/10 the quotient is 1234 i.e. the remaining digit
    d2=num%10;
    num=num/10;
    d3=num%10;
    num=num/10;
    d4=num%10;
    num=num/10;
    d5=num%10;
    sum=d1+d2+d3+d4+d5;
    printf("\n sum of the digits are :%d",sum);
    return 0;
}
*/

//cartesian coordinate into polar 
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int x,y;
    float r,shi;
    printf("\n enter the cartesian coordinate:");
    scanf("%d%d",&x,&y);
    r=sqrt(x*x+y*y);              
    shi=atan2(y,x);            //atan2(y,x) is used for tan-1(y,x)
   shi=shi*180/3.14;            //conveting from rad to degree
    printf("\nthe polar coordinate is:(%f,%f)",r,shi);
    return 0;
}
*/



//receiving altitute and longitute in degree and output the distance between them in nautical miles
/*
#include<stdio.h>
#include<math.h>

int main()
{
    float l1,l2,g1,g2,d;
    printf("\nenter the latitute (L1,L2)");
    scanf("%f%f",&l1,&l2);
    printf("\nenter the longitude (G1,G2)");
    scanf("%f%f",&g1,&g2);
    l1=l1*3.14/180;                            //converting degree into radians
    l2=l2*3.14/180;
    g2=g2*3.14/180;
    g1=g1*3.14/180;
    d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));        //acos(),asin(),atan() is used for cos inverse
    printf("\n the distance in nautical mile is:%f",d);
    return 0;
}*/



//all trignometric function
/*
#include<stdio.h>
#include<math.h>
int main()
{
    float n,s,c,t,cosec,sec,cot,r;
    printf("\nenter the angle");
    scanf("%f",&n);
    r=n*3.14/180;
    s=sin(r);
    c=cos(r);
    t=tan(r);
    cosec=asin(r);
    sec=acos(r);
    cot=atan(r);
    printf("\nsin=%f\ncos=%f\ntan=%f\ncosec=%f\nsec=%f\ncot=%f",s,c,t,cosec,sec,cot);
    return 0;
}
*/



//interchanging the contents 
/*
#include<stdio.h>
int main()
{
    int c,d,e;
    printf("\nenter the number at location C:");
    scanf("%d",&c);
    printf("\nenter the number at location D:");
    scanf("%d",&d);
    e=c;                           //value of c will be assinged to e  c will be empty 
    c=d;                          //value of d will be assinged to c  d will be empty
    d=e;                          //content of e i.e.(content of c) will be assinged to d
    printf("\nafter inetrchanging the contents of C:%d and D:%d",c,d);
    return 0;
}
*/