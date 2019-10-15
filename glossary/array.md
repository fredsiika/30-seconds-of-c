# Array in C
A C Array is a collection of variables belonging to the same data type. You can store lots of data of the same data type in an array.

Array might be belonging to any of the defined data types.
The size of an array is usually a constant value or an expression that results in a constant value. The provision of a variable-length array in ISO C99 is an exception, where an array can be defined with no size specification. This kind of initialization is not supported in certain compilers.
Contiguous (adjacent) memory locations are used to store array elements in memory.
It is best practice to initialize an array to zero or null while declaring, if we don’t assign any values to array.

**EXAMPLE FOR C ARRAYS:**
```c
int a[10];       // integer array
```
```c
char b[10];    // character array   i.e. string
```
## TYPES OF C ARRAYS:
There are 2 types of C arrays. They are,
1. One dimensional array
2. Multi dimensional array
  - Two dimensional array
  - Three dimensional array
  - Four dimensional array etc…
  
**EXAMPLE PROGRAM FOR ONE DIMENSIONAL ARRAY IN C:**
```c
#include<stdio.h> 
 
int main() 
{ 
     int i; 
     int arr[5] = {10,20,30,40,50}; 
    
        // declaring and Initializing array in C 
        //To initialize all array elements to 0, use int arr[5]={0}; 
        /* Above array can be initialized as below also 
        arr[0] = 10; 
        arr[1] = 20; 
        arr[2] = 30; 
        arr[3] = 40;
        arr[4] = 50; */
 
     for (i=0;i<5;i++) 
     { 
         // Accessing each variable
         printf("value of arr[%d] is %d \n", i, arr[i]); 
      } 
 
} 
```

**And here's the output:**
```c 
value of arr[0] is 10
value of arr[1] is 20
value of arr[2] is 30
value of arr[3] is 40
value of arr[4] is 50
```
---
**EXAMPLE PROGRAM FOR TWO DIMENSIONAL ARRAY IN C:**
```c 
#include<stdio.h>
int main()
{
   int i,j;
   // declaring and Initializing array
   int arr[2][2] = {10,20,30,40};
   /* Above array can be initialized as below also
      arr[0][0] = 10; // Initializing array
      arr[0][1] = 20;
      arr[1][0] = 30;
      arr[1][1] = 40; */
   for (i=0;i<2;i++)
   {
      for (j=0;j<2;j++)
      {
         // Accessing variables
         printf("value of arr[%d] [%d] : %d\n",i,j,arr[i][j]);
      }
   }
}
```
**And here's the output**
```c
value of arr[0] [0] is 10
value of arr[0] [1] is 20
value of arr[1] [0] is 30
value of arr[1] [1] is 40
```
