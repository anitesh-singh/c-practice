//largest number from a 5*5 matrix
/*#include<stdio.h>
void printarray(int (*a)[5],int n, int m){
    
    for (int i = 0; i < n; i++)
    {
       int *pint=a[i];
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%d ",pint[j]);
        }
        
    }
    
}
int main()
{
    int arr[5][5]={
                    {11,1,7,9,7},
                    {13,54,56,2,5},
                    {23,43,89,22,13},
                    {14,15,16,17,19},
                    {45,3,6,8,10}
                };
    printarray(arr,5,5);
    int largest;
    largest=arr[0][0];
    for (int i = 0; i <=4; i++)
    {
        for (int j = 0; j <=4; j++)
        {
            if(largest<arr[i][j]){
                largest=arr[i][j];
            }
        }
        
    }
    printf("\n%d",largest);
    return 0;
}   */

//transpose of a matrix 3*5=5*3
/*#include<stdio.h>
int main()
{
    int mat1[3][5]={
        {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}
    };
    int mat2[5][3];
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0;  j<5 ; j++)
        {
            mat2[j][i]=mat1[i][j]; //matrix 1 , j will get transferred in matrix 2 as j and i
        }
        
    }
     for ( i = 0; i < 5; i++)
    {
        for ( j = 0;  j<3 ; j++)
        {
           printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}*/

//initialize a 3-d array and refer to its first and last element
/*#include<stdio.h>
int main(){
    int threed[3][2][3]={                              //3 2d arrays containing 2 1-d arrays with 3 integers
                            {{1,2,3},{4,5,6}},
                            {{7,8,9},{10,11,12}},
                            {{13,14,15},{16,17,18}}
    };
    //refering to first and last element
    printf("%d\n",threed[0][0][0]);             //as index starts with 0
    printf("%d\n",threed[2][1][2]);
}*/

//square matrix is symmetric- square matrix equal number of rows and columns, symmetric if it is unaltered even its transpose is calculated
/*#include<stdio.h>
int main()
{
    
    int arr1[3][3]={
            1,1,-1,
            1,2,0,
            -1,0,5
    };
    int arr2[3][3];
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for( j = 0; j < 3; j++)
        {
            arr2[j][i]=arr1[i][j];
        }
        
    }
     for ( i = 0; i < 3;i++ )
    {
        for( j = 0; j < 3;j++ )
        {
            if (arr1[i][j]!=arr2[i][j])
            {
               printf("not symmetric");
                return 1;  //as 1 denotes false we can also use 0
                // goto end;
            }
            // else{
            //     i++;j++;
            // }
            
        }
        
    }
    // end:
    // printf("not symmetric");
    if (i==3){
        printf("symmetric");
    }

   
    // return 0;
}*/

//matrix addition
/*#include<stdio.h>
int main()
{
    int sum[6][6],i,j;
    int arr1[6][6]={1,2,3,4,5,6,
          7,8,9,10,11,12,
          13,14,15,16,17,18,
          19,20,21,22,23,24, 
          1,2,3,4,5,6,
          7,8,9,10,11,12 
    };
     int arr2[6][6]={1,2,3,4,5,6,
          7,8,9,10,11,12,
          13,14,15,16,17,18,
          19,20,21,22,23,24, 
          1,2,3,4,5,6,
          7,8,9,10,11,12 
    };
    for ( i = 0; i < 6; i++)
    {
        for(j=0;j<6;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for ( i = 0; i < 6; i++)
    {
        for(j=0;j<6;j++){
           printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/ 

//matrix multiplication- no.of rows of first matrix must be equal to no. of columns of second matrix. 2x3 and 3x2 the resulting matrix will have 2x2 dimensions
//the element of the first row will be multiplied to the element of the 1st column of the second matrix and added sequentially to get the resulting matrix 1st element
//1x2 +2x3+3x4= 1st row 1st element, 2nd row 1st element=2nd row*1st column 
/*#include<stdio.h>
int main()
{
    int arr1[3][3]={1,2,3,
                    4,5,6,
                    7,8,9 };
    int arr2[3][3]={1,2,3,
                    4,5,6,
                    7,8,9 };
    int mul[3][3],i,j;
    
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0;  j< 3; j++)
        {
            mul[i][j]=0;
            for (int k=0;k<3;k++){
            mul[i][j]=mul[i][j]+arr1[i][k]*arr2[k][j];
        }
        }
      
       
        
    }
    for(i=0;i<3;i++){
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}*/

//left shifting an array by two position 1st-1-d array 2nd 4x5 matrix
//after zero shift   15,30,28,19,61
//after first shift  30,28,19,61,__   in the blank spaces the stored value will be assinged 
//after second shift 28,19,61,__,__
/*#include<stdio.h>

int main()
{
    int p[5]={15,30,28,19,61};
    int pos;
    printf("enter the number of position you want to shift the array:\n");
    scanf("%d",&pos);
    while(pos){
    int temp=p[0];
    for(int i=1;i<5;i++){  //loop is starting from 1 as p[0] is stored, and in the process it will eventually not necessary to gets included. 
        p[i-1]=p[i];       //also p[0-1]=p[-1] is equal to p[0] which is not possible, we can aslo start with 0 it will not create a problem 
    }
    p[5-1]=temp;         //storing the last vacent location with stored value
    //right shift
    // temp=p[4];
    // for(i=4;i>0;i--){
    //     p[i+1]=p[i];
    // }
    // p[0]=temp;
    pos--;
    }
    //printing the array after left shift
    printf("after left shifting--\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d ",p[j]);
    }
    
    return 0;
}*/

//left shifting rows of 2-d array
/*#include<stdio.h>
int main()
{
    int arr[4][5]={1,2,3,4,5,
                   6,7,8,9,10,
                   11,12,13,14,15,
                   16,17,18,19,20 };
    int i,j,temp,pos;

    printf("enter the number of pos you want to left shift:\n");
    scanf("%d",&pos);
    while(pos>0){
    for ( i = 0; i < 4; i++)
    {
        temp=*arr[i];
        for(j=1;j<5;j++){
            *(arr[i]+(j-1))=*(arr[i]+j);
        }
        arr[i][4]=temp;
    }
    pos--;
    }
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}*/

