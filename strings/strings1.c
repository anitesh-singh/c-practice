/*#include<stdio.h>
void printstr(char str[]){     // printing the string using loop as an array
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[]={'a','n','i','t','e','s','h','\0'};
    char str[6]="singh";     //the size of the array must be 1 extra than the number of elements to store the null character '\0'
    char par[45];
    gets(par); // taking input through the standard library function of stdio.h header file, scanf input cant take spaces 
    puts(par); // printing using the standard library function of stdio.h header file
    printf("%s\n",par); // %s is used for printing string or taking it as input
    printstr(str);
    return 0;
}*/

//string.h header file, its functions usage
/*#include<stdio.h>
#include<string.h> //header file for the library function
int main()
{
    char str1[]="larry", str2[]="bhai";
    char str3[100];
    //puts(strcat(str1,str2)); //concatinates or combine two given strings
    printf("length of the string str1 is %d\n",strlen(str1)); //strlen() gives the length of the string excluding the null character
    puts(strrev(str1)); //strrev() reverse the string
    puts(strcpy(str3,str1));  //strcpy() copies the str1 in str3  
    printf("%d",strcmp(str1,str2));          // compares str2 with str1, if the first character of the str2 comes earlier than the first character of the str1 the it will return positive value(1) is equal then 0 if it comes later then negative 
    return 0;
}*/

//allowing user to enter two string and then concatinate them by saying that s1 is a friend of s2
/*#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30];
    printf("Enter the first string:");
    gets(s1);
    printf("Enter the second string:");
    gets(s2);
    char s3[]=" is a friend of ";   
    puts(strcat(strcat(s1,s3),s2));
    return 0;
}*/

