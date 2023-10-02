//calculation of grace marks
/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("\nEnter your class : ");
    scanf("%d", &a);
    printf(" \nEnter your number of subjects in which you are failed : ");
    scanf("%d", &b);
    switch(a)
    {
    case(1):
        switch(b)
        {
        case(3):
        case(2):
        case(1):
        case(0):
            printf("You've got the grace of 5 marks.");
            break;			
        default:
            printf("You will not get any grace.");
        }
        break;
            
    case(2):
        switch(b)
        {
        case(2):
        case(1):
        case(0):
            printf("You've got the grace of 4 marks.");
            break;				
        default:
            printf("You will not get an grace.");
            break;
        }
        break;
        
    case(3):
        switch(b)
        {
        case(1):
        case(0):
            printf("You've got the grace of 5 marks.");
            break;
        default:
            printf("You will not get any grace.");
            break;
        }
        break;
            
    default:
        printf("\n\nWrong choice of class.\nTry again!!");
        break;	
    }
    getch();
    return 0;
}*/

//7.1 menu driven program 1.factorial 2.prime or not 3.odd or even 4.exit
/*#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int i,num,fact=1,choice;
    while (1)
    {
    printf("\n1.Factorial");
    printf("\n2.Prime or not");
    printf("\n3.Odd or even");
    printf("\n4.Exit");
    printf("\nYour choice?");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("\nenter the number:");
        scanf("%d",&num);
        for ( i = 1; i <= num; i++)
        {
            fact=fact*i;
        }
        printf("\nfactorial %d",fact);  
        break;
    case 2:
        printf("\nenter the number:");
        scanf("%d",&num);
        for ( i = 2; i <num; i++)
        {
            if (num%i==0)
            {
                printf("\nnot a prime");
            }
            break;
        }
        if (num==i)
        {
            printf("\n prime");
        }  
        break;
    case 3:
        printf("\nenter the number:");
        scanf("%d",&num);
        if (num%2==0)
        {
            printf("\neven number");
        }
        else
        {
            printf("\nodd number");
        }
         
        break;
    case 4:
        exit(0);   //terminates the program
    default:
        printf("\nwrong choice");
        
    }
    }
    return 0;
}*/

//c.calculation of grace marks 
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int class,num,grace;
    printf("\n1.first class");
    printf("\n2.second class");
    printf("\n3.third class");
    printf("\nselect the class the student obtained");
    scanf("%d",&class);
    switch (class)
    {
    case 1:
        printf("\nenter number of subject the student failed");
        scanf("%d",&num);
        if (num<=3)
        {
            grace=num*5;
            printf("\ngrace marks obtained in %d subject is %d",num,grace);
        }
        else
        {
            printf("\n no grace marks obtained");
        }
        break;
    case 2:
        printf("\nenter number of subject the student failed");
        scanf("%d",&num);
        if (num<=2)
        {
            grace=num*4;
            printf("\ngrace marks obtained in %d subject is %d",num,grace);
        }
        else
        {
            printf("\n no grace marks obtained");
        }
        break;
    case 3:
        printf("\nenter number of subject the student failed");
        scanf("%d",&num);
        if (num==1)
        {
            grace=5;
            printf("\ngrace marks obtained in %d subject is %d",num,grace);
        }
        else
        {
            printf("\n no grace marks obtained");
        }
        break;
    default:
        printf("\nwrong selection");
    }
    return 0;
}
*/

//some trial 
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k;
    for ( i = 1; i <= 3; i++)
    {
        for ( j = 1; j <=3; j++)
        {
            for ( k = 1; k <=3; k++)
            {
                if (i==3 && j==3 && k==3)
                {
                    goto out;
                }
                else
                {
                    printf("\n%d %d %d\n",i,j,k);
                }
            }
            
        }
        
    }
    out:
        printf("\nout of the loop");
    return 0;
}
*/