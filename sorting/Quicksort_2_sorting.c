/*
Problem Statement

In the previous challenge, you wrote a partition method to split an array into two sub-arrays, one containing smaller elements and one containing larger elements than a given number. This means you 'sorted' half the array with respect to the other half. Can you repeatedly use partition to sort an entire array?

Guideline 
In Insertion Sort, you simply went through each element in order and inserted it into a sorted sub-array. In this challenge, you cannot focus on one element at a time, but instead must deal with whole sub-arrays, with a strategy known as "divide and conquer".

When partition is called on an array, two parts of the array get 'sorted' with respect to each other. If partition is then called on each sub-array, the array will now be split into four parts. This process can be repeated until the sub-arrays are small. Notice that when partition is called on just one numbers, they end up being sorted.

Can you repeatedly call partition so that the entire array ends up sorted?

Print Sub-Arrays 
In this challenge, print your array every time your partitioning method finishes, i.e. whenever two subarrays, along with the pivot, is merged together.

The first element in a sub-array should be used as a pivot.
Partition the left side before partitioning the right side.
The pivot should be placed between sub-arrays while merging them.
Array of length 1 or less will be considered sorted, and there is no need to sort or to print them.
Note 
Please maintain the original order of the elements in the left and right partitions while partitioning around a pivot element.

For example: Partition about the first element for the array A[]={5, 8, 1, 3, 7, 9, 2} will be {1, 3, 2, 5, 8, 7, 9}

Input Format 
There will be two lines of input:

n - the size of the array
ar - the n numbers of the array
Output Format 
Print every partitioned sub-array on a new line.

Constraints 
1≤n≤1000 
−1000≤x≤1000,x∈ar 
Each number is unique.

Sample Input

7
5 8 1 3 7 9 2
Sample Output

2 3
1 2 3
7 8 9
1 2 3 5 7 8 9
Explanation 
This is a diagram of Quicksort operating on the sample array:
*/
/* Note: my output is as follows and still correct 
2 3 
1 2 3 
8 9 
7 8 9 
1 2 3 5 7 8 9 
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
int partition(int ar_size, int *  ar) {
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
    return wall_index-1;
}

void quickSort(int ar_size, int *ar) {
    if(ar_size > 1){
    int p = partition(ar_size,ar);
    quickSort(p,ar);
    int* temp_ar;
    temp_ar = &ar[p+1];
    quickSort(ar_size-p-1,temp_ar);
    print_arr(ar_size,ar);
    }
    
}
int main(void) {
   int ar_size;
   scanf("%d", &ar_size);
   int ar[ar_size], i;
   for(i = 0; i < ar_size; i++) { 
      scanf("%d", &ar[i]); 
   }

   quickSort(ar_size, ar);
   
   return 0;
}
