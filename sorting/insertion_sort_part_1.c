/*
Problem Statement

Sorting 
One common task for computers is to sort data. For example, people might want to see all their files on a computer sorted by size. Since sorting is a simple problem with many different possible solutions, it is often used to introduce the study of algorithms.

Insertion Sort 
These challenges will cover Insertion Sort, a simple and intuitive sorting algorithm. We will first start with an already sorted list.

Insert element into sorted list 
Given a sorted list with an unsorted number V in the rightmost cell, can you write some simple code to insert V into the array so that it remains sorted?

Print the array every time a value is shifted in the array until the array is fully sorted. The goal of this challenge is to follow the correct order of insertion sort.

Guideline: You can copy the value of V to a variable and consider its cell "empty". Since this leaves an extra cell empty on the right, you can shift everything over until V can be inserted. This will create a duplicate of each value, but when you reach the right spot, you can replace it with V.

Input Format 
There will be two lines of input:

s - the size of the array
ar - the sorted array of integers
Output Format 
On each line, output the entire array every time an item is shifted in it.

Constraints 
1≤s≤1000 
−10000≤V≤10000,V∈ar

Sample Input

5
2 4 6 8 3
Sample Output

2 4 6 8 8 
2 4 6 6 8 
2 4 4 6 8 
2 3 4 6 8 
Explanation

3 is removed from the end of the array.
In the 1st line 8>3, so 8 is shifted one cell to the right. 
In the 2nd line 6>3, so 6 is shifted one cell to the right. 
In the 3rd line 4>3, so 4 is shifted one cell to the right. 
In the 4th line 2<3, so 3 is placed at position 2.

Task

Complete the method insertionSort which takes in one parameter:

ar - an array with the value V in the right-most cell.

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void print_arr(int ar_size, int *  ar){
    for(int loop=0; loop <ar_size ; loop++){
        printf("%d ",ar[loop]);
    }
    printf("\n");
}
void insertionSort(int ar_size, int *  ar) {
    int temp = ar[ar_size-1];
    for(int i = ar_size-1 ; i>-1 ; i-- ){
        if(ar[i]>temp){
                ar[i+1]=ar[i];
        print_arr(ar_size,ar);   
        }
        if(ar[i]<temp){
            ar[i+1]=temp;
            print_arr(ar_size,ar);   
            break;
        }
        if((i == 0) && (ar[i]>temp)){
            ar[i] = temp;
            print_arr(ar_size,ar);
        }
    }
}
int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}
