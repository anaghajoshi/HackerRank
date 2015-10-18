/*
Problem Statement

The previous challenges covered Insertion Sort, which is a simple and intuitive sorting algorithm. Insertion Sort has a running time of O(N2) which isn't fast enough for most purposes. Instead, sorting in the real world is done with faster algorithms like Quicksort, which will be covered in the challenges that follow.

The first step of Quicksort is to partition an array into two smaller arrays.

Challenge 
You're given an array ar and a number p. Partition the array, so that all elements greater than p are to its right, and all elements smaller than p are to its left. p is called the pivot of the partition.

Guideline - In this challenge, you do not need to move around the numbers 'in-place'. This means you can create two lists and combine them at the end.

Input Format 
You will be given an array of integers. The number p is the first element in ar.

There are two lines of input:

n - the number of elements in the array ar
the n elements of ar (including p at the beginning)
Output Format 
Print out the numbers of the partitioned array on one line.

Constraints

1≤n≤1000
−1000≤x≤1000,x∈ar
All elements will be unique.
Multiple answer can exists for the given test case. Print any one of them.
Sample Input

5
4 5 3 7 2
Sample Output

3 2 4 5 7
Explanation 
p equals 4. 5 is moved to the right of 4, 2 is moved to the left of 4, and 3 is also moved to the left of 4. The numbers otherwise remain in the same order. Similarly, another valid solution will be [2,3,4,5,7] and so on.

Task 
Complete the method partition which takes an array ar. The first element in ar is the number p.
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

void partition(int ar_size, int *  ar) {
int pivot = ar[0];
int wall_index =1;
int current_element=1;
for(int i =1 ; i < ar_size ;i++ ){
    if(ar[current_element]<pivot){
        int temp = ar[current_element];
        ar[current_element] = ar[wall_index];
        ar[wall_index]= temp;
        wall_index +=1;
    }
    current_element +=1;
}
    for (int j=1; j< wall_index ; j++){
        ar[j-1] = ar[j];
    }
    ar[wall_index-1]=pivot;
    print_arr(ar_size,ar);
}
int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

partition(_ar_size, _ar);
   
   return 0;
}
