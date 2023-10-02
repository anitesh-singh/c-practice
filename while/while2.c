//b.c match stick game
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int total=21,c,x,remsticks,term=0;
    printf("\n\t\t'MATCHSTICK GAME'\n");
    printf("\nRULES:\nWhoever picks the last matchstick 'looses' the game");
    printf("\ntotal number of matchsticks:21");
    while (total>=1)
    {
        printf("\nPick up the matchstick either (1,2,3,4):");
        scanf("%d",&x);
        c=5-x;                // main logic:first the user picks then computer, taking their picks as a sum of 5 i.e (20/5)when 4
        printf("\nComputer picks:%d",c); //the picking are done user com user com and last the user will only left to pick
        printf("\n'Your Turn'\n");
        term=term+(x+c);                     //storing the value of x+c everytime the loop continues, so that total is gets calculated an loop will end when total=21
        remsticks=21-term;                   //remaining matchsticks
        total=term;                          //assigning the value of term to total
        printf("\nRemaining Matchsticks:%d",remsticks);
        if (remsticks==1)                   //when remaining matchsticks is 1 the user will pick the last match and the computer win
        {                                   //and break is used to terminate the loop 
            printf("\npick up the matchstick");
            scanf("%d",&x);
            printf("\n!computer won!\n");
            break;
        }
        
        total++;                //incrementing loop counter
    }

    return 0;
}*/

//enter numbers till the user want and count postive negative and zeroes entered
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    char arnum='y';
    int num;
    int a=0,b=0,c=0;
    while (arnum=='y')                  //asking the user for another input untill the condition fails
    {
        printf("\nEneter the number:");
        scanf("%d",&num);
        
            if (num<0)                //everytime the condition is satisfied it will be added to 1 and stored in 1
            {
                a=a+1;                //we didnot print count here as first of all the counting is done in condition box 
            }                         //and everytime the loop will run it will print count when it follows the condition
            if (num>0)
            {
                b=b+1;
            }
            if (num==0)
            {
                c=c+1;
            }
        
        printf("\ndo you want to enter another number(y/n):");
        fflush(stdin);            //function flushes or removes buffer (stdin:standard input device) associated with keyboard
        scanf("%c",&arnum);
        
    }
    printf("\ncount of positive:%d\ncount of negative:%d\n count of zeroes:%d",b,a,c);
    
    return 0;
}*/


//e.octal equivalent(decimal to octal) of a number
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,rem,a=0,b=0,d;
    printf("enter the number:\n");
    scanf("%d",&num);
    while (num)
    {
        rem=num%8;
        a=a*10+rem;
        num=num/8;
        
        
    }
    while(a)
    {
        rem=a%10;
        b=b*10+rem;
        a=a/10;
    }
    printf("%d\n",b);
    
    return 0;
}*/

//f.
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int hnum,a,num,i=1;
    printf("\nhow many numbers do you want to enter");
    scanf("%d",&hnum);
    while (i<hnum)   
    {
        printf("\nenter the number");
        scanf("%d",&num);
        i++;
    }
    
    return 0;
}*/
/*#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num,max,min, how, range;
	
	printf("Enter how many number you want to enter : ");
	scanf("%d", &how);
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	max=min=num;
	
	for( i = 1; i < how; i++)
	{
		printf("Enter the number : ");
		scanf("%d", &num);
		if(num>max)
			max=num;
		if(num<min)
			min=num;
	}
	range = max - min;
	
	printf("\n\n%d is the range of the data.", range);
	getch();
	return 0;
}*/
