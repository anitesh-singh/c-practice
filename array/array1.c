//input the element and print the output
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

//2-d array

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

//2. By declaring a pointer in the function to hold the base address of the array
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

//taking size of array in input. creating variable sized array using malloc and allocating memory
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

///Questions
//Interchanging odd position elements with even position elements in array of 10 elements
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

//copy one array into other array in reverse order                                                      
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

//searching a number in array and counting how many times it occurs in the array
