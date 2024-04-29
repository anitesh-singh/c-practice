//sum of the digits of 5-digits number

/*#include<stdio.h>
int digisum(int num)
{
    if (num<=9)            //base case,,,for last digit 
    {
        return (num);
    }
    else
        return(num%10+digisum(num/10));  //recursive case  ,,n%10=unit digit or remainder,,n/10=new number or quotient 
    
}
int main(int argc, char const *argv[])
{
    int number;
    printf("enter the 5-digit number:\n");
    scanf("%d",&number);
    printf("\nthe sum the digits of 5-digit number %d is %d",number,digisum(number));
    return 0;
}*/


//prime factor recuesively

/*#include<stdio.h>
void factor(int,int);
int main(int argc, char const *argv[])
{
    int num;
    printf("enter the number, whose prime factor is to be taken out:\n");
    scanf("%d",&num);
    factor(num,2);
    return 0;
}
void factor(int num,int i)
{
    if(i<=num)
    {
        if (num%i==0)
        {
            printf("%d\n",i);
            num=num/i;
        }
        else
        {
            i++;
        }
    }
    factor(num,i);
}
*/

//another way
/*#include<stdio.h>
void prime_factor(int,int);
int main()
{
    int num;
    printf("enter the number for which you want to find the prime factors:\n");
    scanf("%d",&num);
    prime_factor(num,2);
    return 0;
}
void prime_factor(int n,int i)
{
    if(n==1)
    {
        return;
    }
    else
    {
        if (n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
        else i++;
        
    }
    prime_factor(n,i);
}*/

//recursive function to obtain first 25 number of fibonacci sequence(sum of two successive terms gives the third term)

//recursive way

/*#include<stdio.h>
    #include<conio.h>
    void fs(int first, int second, int term);
    int main()
      {
	fs(0, 1, 25);
	_getch();
	return 0;
    }
    void fs(int fis, int sec, int term)
    {
	int num;
	if (term == 0)
		return;
	num = fis + sec;
	fis = sec;
	sec = num;
	printf("%d, ", num);
	fs(fis, sec, term - 1);
    }*/

 //iterative way
 
 /*#include<stdio.h>
 int main(int argc, char const *argv[])
 {
    int a=0, b=1, sum;
    for (int i = 1; i <=25; i++)
    {
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    
    
    return 0;
 }*/

 //recursive way

/*#include<stdio.h>
int fibonacci(int);
int main(int argc, char const *argv[])
{
    int a=0;
    for (int i = 1; i <=25; i++)
    {
          printf("%d ",fibonacci(a));
          a++;
    }

    return 0;
}
int fibonacci(int a)
{
    if (a==0 || a==1)
    {
        return a;
    }
    else
    {
        return(fibonacci(a-1)+fibonacci(a-2));
    }   
}*/
  
//integer to binary equivalent
//without recursion

//to calculate binary equivalent of the number by dividing the number by 2
/*
void nonrec_bin(int);
#include<stdio.h>
int main()
    {
        int number;
        printf("Enter number\n");
        scanf("%d",&number);
        nonrec_bin(number);
        return 0;
    }
void nonrec_bin(int num)
{
    int sum = 0;
    for (; num; num /= 2)
    {
	//Next digit will placed at first position.
	sum += num % 2;
	sum *= 10;
    }
    printf("%d", sum);
}*/

//with recursion
/*#include<stdio.h>
int bin(int);
int main()
{  
 int number;
printf("Enter number\n");
scanf("%d",&number);
bin(number);
return 0;
  }
  int bin(int number)
    {
if(number>1)
{
    bin(number/2);
}
printf("%d",number%2);

return 0;
}*/

//sum of first n natural numbers
/*#include<stdio.h>
int sum(int);
int main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);

    printf("%d",sum(num));
    return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (n+sum(n-1));
    }
    
}*/

//tower of hannoi

/*#include<stdio.h>
void towerofhanoi(int n, char , char ,char );
int main()
{
    int n=4;
    towerofhanoi(n,'A','B','C');
    return 0;
}
void towerofhanoi(int n, char src, char help,char dest)
{
        //base case
        if(n==1)
        {
            printf("moving disk %d from %c to %c\n",n,src,dest);
            return;
        }

        //moving n-1 disk to the middle tower with the help of third tower
        
        towerofhanoi(n-1,src,dest,help);
        
        //moving the last disk n at first tower to third tower
        printf("moving disk %d from %c to %c\n",n,src,dest);
        
        //moving the n-1 disk from the middle tower to the third tower through first tower
        towerofhanoi(n-1,help,src,dest);
}*/

#include <stdio.h>

int main() {
    int n, fs = 0, ts = 0, term = 1;
    printf("Please enter the number of terms: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            fs = fs + ts;
            printf("For i = %d and adding temporary sum = %d...\n", i, ts);
            ts = 0;
        } else {
            fs = fs + term;
            ts = ts + term;
            printf("For i = %d and adding term = %d...\n", i, term);
            term = term + 1;
        }
    }
    printf("End of the program...\n");

    return 0;
}
