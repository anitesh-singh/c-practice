// input the element and print the output
/*#include<stdio.h>
int main(){
    int ele[4]={3, 4,5,6};      //initialization and declaration
    // for (int i = 0; i <4; i++ )
    // {
    //     printf("enter the %d element of the array:\n",i);
    //     scanf("%d",&ele[i]);
    // }
     for (int i = 0; i <4; i++ )
    {
        printf("the %d element of the array is %d\n",i, ele[i]);

    }
}*/

// 2-d array

// #include<stdio.h>
// int main()
// {
//     int ele[2][4]={{2, 3, 4, 5},{5, 6, 7, 8}};
//     int j;
//     for (int i = 0; i <2; i++)
//     {
//         for ( j = 0; j < 4; j++)
//         {
//             printf("%d ",ele[i][j]);
//         }
//         printf("\n");
//     }

// pointer arithmetic

// #include<stdio.h>
// int main()
// {
//     int a=34;
//     int* ptra=&a;              /*the arithmetic operations are performed over the sizeof the data type*/
//     printf("%p\n",ptra);
//     printf("%p\n",ptra++);
//     printf("%p\n",ptra--);
//     printf("%p\n",ptra+2);
//     printf("%p\n",ptra-2);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int* ptr=arr;
//     printf("the address of the first element is %d\n",arr);    /*arr is a pointer to the first elementof the array and its is constant i.e we cant inccrease or decrease its value permanently*/
//     printf("the address of the first element is %d\n",&arr[0]);
//     printf("the address of the second element is %d\n",arr+1);
//     printf("the address of the second element is %d\n",&arr[1]);
//     // arr++;  //this line will throw an error
//     printf("value at the address of the first element is:%d\n",*(&arr[0]));
//     printf("value at the address of the first element is:%d\n",arr[0]);
//     printf("value at the address of the first element is:%d\n",*arr);
//     printf("value at the address of the second element is:%d\n",*(&arr[1]));
//     printf("value at the address of the second element is:%d\n",arr[1]);
//     printf("value at the address of the second element is:%d\n",*(arr+1));
//     return 0;
// }

// passing array to a function
// 1. passing array as a parameter
/*#include <stdio.h>
void func(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at index %d is %d\n", i, array[i]);
    }
    // array[0]=233; if we change the value of any element inside the fumction, it will get reflected inside the main function
}
int main()
{

    int arr[] = {2, 3, 45, 6};
    printf("the value of first element %d\n", arr[0]);
    func(arr); // arr contains base address of the first element of  array
    printf("the value of first element %d\n", arr[0]);
    return 0;
}*/

// 2. By declaring a pointer in the function to hold the base address of the array
/*#include <stdio.h>
void func(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at index %d is %d\n", i, ptr[i]);
    }
    //*(ptr+1)=11;
    // array[1]=233; if we change the value of any element inside the fumction, it will get reflected inside the main function
}
int main()
{

    int arr[] = {2, 3, 45, 6};
    printf("the value of second element %d\n", arr[1]);
    func(arr); // arr contains base address of the first element of  array
    printf("the value of second element %d\n", arr[1]);
    return 0;
}*/

// taking size of array in input. creating variable sized array using malloc and allocating memory
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int max,*p;
    printf("enter the size of the array:\n"); //taking sizee of array as input
    scanf("%d",&max);
    p=(int* )malloc(max*sizeof(int)); //malloc returns the base address of the void pointer, inside malloc size of the array is getting allocated and to convert the void pointer to integer pointer typecasting is done at (int*) so at p the the base address of the integer array is given after memory allocation
    for(int i=0;i<max;i++){
        p[i]=i*i;
        printf("%d ",p[i]);
    }
    return 0;
}*/

/// Questions
// Interchanging odd position elements with even position elements in array of 10 elements
/*#include<stdio.h>
int main()
{
    int t;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("orignal array\n");
    for (int j = 0; j < 10; j++)
    {
        printf("%d ",arr[j]);
    }

    for (int i = 0; i < 10; i+=2)
    {
            t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;

    }

     printf("\ninterchanged array\n");
    for (int k = 0; k < 10; k++)
    {
        printf("%d ",arr[k]);
    }

    return 0;
}*/

// copy one array into other array in reverse order
/*#include<stdio.h>
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5];
    printf("The elments of first array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\ncopied element of the first array in second in reverse manner\n");
    for (int j = 0; j <5; j++)
    {
        arr2[j]=arr1[4-j];
        printf("%d ",arr2[j]);
    }

    return 0;
}*/

// searching a number in array and counting how many times it occurs in the array
/*#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 1, 8, 9, 1};
    int num,count=0;
    printf("enter the number to be searched in the array:\n");
    scanf("%d",&num);
    for (int i = 0; i < 10; i++)
    {

        if (num==arr[i]){
            count++;
        }

    }
    printf("yes, the number matched and it appears in the array for %d times",count);

    return 0;
}*/

// taking element as a input from user, and identify positive negative even odd
/*#include <stdio.h>
int main()
{
    int arr[25], pos = 0, neg = 0, even = 0, odd = 0;
    printf("enter the 25 numbers\n");
    for (int i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 25; j++)
    {
        printf("%d ", arr[j]);
        if (arr[j] >= 0)
        {
            pos++;
        }
        if (arr[j] < 0)
        {
            neg++;
        }
        if (arr[j] % 2 == 0)
        {
            even++;
        }
        if (arr[j] % 2 != 0)
        {
            odd++;
        }
    }
    printf("\ncount of positive numbers are:%d\n", pos);
    printf("count of negative numbers are:%d\n", neg);
    printf("count of even numbers are:%d\n", even);
    printf("count of odd numbers are:%d\n", odd);
    return 0;
}*/

//array contains n element so check arr[0]=arr[n-1] arr[1]=arr[n-2]

/*#include<stdio.h>
#include<conio.h>
#define n 6
int main()
{
	int arr[n] = {1, 2, 3, 4, 2, 1}, i, j;

	for (i = 0, j = n - 1; i < n/2; i++, j--)
	{
		if (arr[i] == arr[j])
			printf("\narr[%d] and arr[%d] are equal.", i, j);
		else
			printf("\narr[%d] and arr[%d] are not equal.", i, j);
	}

	_getch();
	return 0;
}*/

//smallest number in an array using pointers
/*#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6}, j;
    // printf("enter the number un the array:\n");
    // for (int i = 0; i < 25; i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
    int p=arr[0], *ptr=&arr[0];
    for ( j = 0; j < 6; j++)
    {
       if (p>*(ptr+j))
       {
            p=*(ptr+j);
       }
       
    }
printf("%d",p);
       
    
    
    return 0;
}*/

//insertion sort- comparing second element with first if  second is less then swap

//printing array function
/*#include<stdio.h>
void printarray(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
//insertion sort function
void insertion(int *a,int n){
    int key,j ;
    for (int i = 1; i <= n-1; i++) //no. of passes in insertion sort is n-1 as it starts from second element
    {
        key=a[i];    
        j=i-1;
        while (j>=0 && a[j]>key) //comparing a[j] with its preceding or next element and the value of j doesnot gets to negative if it hets to negative then its preceding value becomes key
        {                        //a[j]<key in decending order
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        
    }
    
}

// 0  1  2   3  4 
//44 33 55  22 11

//44 |33 55  22 11 i=1 key=33 j=0 a[j]=44 a[j+1]=33  condition true
//44 |44 55  22 11  key=33 when j-- the condion is false and j=-1 a[j+1=0]=key means at index 0 33 is inserted  /1st passs done

//33 44| 55  22 11 i=2 key=55 j=1 a[j]=44 codition fase, a[j+1=55]=key which is already 55 \2nd pass done

//33 44 55|  22 11   i=3 key=22 j=2 a[j]=55 a[j+1]=22 condition true
//33 44 44|  55 11   i=3 key=22 j=1 a[j]=44 a[j+1]=55 condition true j--
//33 33 44|  55 11   i=3 key=22 j=0 a[j]=33 a[j+1]=44 condition true j--
//22 33 44|  55 11   i=3 key=22 j=-1  condition false a[j+1=0]=key  key=22  \3rd pass 
//and after the 4th pass the sorted array is 
//11 22 33 44  55|

int main()
{
    int arr[]={44,33,55,22,11};
    int n=5;
    printarray(arr,n);
    insertion(arr,n);
    printarray(arr,n);
    return 0;
}*/

