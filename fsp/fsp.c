/*int main() {
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
}*/

/*#include<stdio.h>
int main()
{
    int dim,mid,start,end,number;
    printf("please enter the dimension of the matrix:\n");
    scanf("%d",&dim);
    dim=(2*n-1);
    mid=(n-1);
    for(int i=0;i<=dim;i++)  //i-row j-column
    {
         if(i>mid){
            start=dim-i-1;
            end=i;
         }
         else{
            start=i;
            end=dim-i-1;
         }
    }
    number=n;
    for(int j=0;j<=dim;j++)
    {
        printf("%4d",number);
        if(j<start){
            number=number-1;
        }
        else if (j>=end)
        {
            number+=1;
        }


        }
        printf("");
    }
*/

// palindrome
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
   int num,rem,rev_num=0;
    printf("enter the number:\n");
    scanf("%d",&num);
    int a=num;
    if(num<0) printf("no");
    while(num)
    {
        rem=num%10;
        num=num/10;
        rev_num=(rev_num*10)+rem;
    }
    if(rev_num==a)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}*/

/*S#include<stdio.h>
int main()
{
    int i,j,k;
    for ( i = 1; i <=6; i++)
    {
        for ( j = 5; j >=i; j--)
        {
            printf(" ");
        }
        for ( k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }

}*/

// taking input from user to choose to either print a star pattern or a reverse star pattern
/*#include<stdio.h>
void starpattern(){
    int i,j,k,n;
    printf("enter the no. of rows in which you wanted the star pattern to get printed:\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for ( j = n; j >i; j--)
        {
            printf(" ");
        }
        for ( k = 1; k <=i ; k++)
        {
            printf("* ");
        }
        printf("\n");

    }

}

void reverse_starpattern(){
    int i,j,k,n;
    printf("enter the no. of rows in which you wanted the revrese pattern to get printed:\n");
    scanf("%d",&n);
    for ( i = n; i >=1; i--)
    {
        for ( j = i; j <n; j++)
        {
            printf(" ");
        }
        for ( k = i; k >=1 ; k--)
        {
            printf("* ");
        }
        printf("\n");

    }

}
int main()
{
    int user;

    printf("Enter 0 for printing star pattern, 1 for printing reverse star pattern or 2 for both:\n");
    scanf("%d",&user);
    if(user==0){
        starpattern();
    }
    if(user==2){
        starpattern();
        reverse_starpattern();
    }
    else{
        reverse_starpattern();
    }

    return 0;
}*/

//***roman to decimal (MDCLXV)
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the roman number(M D C L X V I):\n");
    scanf("%c", &ch);
   
    return 0;
}