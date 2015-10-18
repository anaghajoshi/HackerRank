/*
Sample Challenge 
This is a simple challenge to get things started. Given a sorted array (ar) and a number (V), can you print the index location of V in the array?

The next section describes the input format. You can often skip it, if you are using included methods.

Input Format 
There will be three lines of input:

V - the value that has to be searched.
n - the size of the array.
ar - n numbers that make up the array.
Output Format 
Output the index of V in the array.

The next section describes the constraints and ranges of the input. You should check this section to know the range of the input.

Constraints

1≤n≤1000
−1000≤V≤1000,V∈ar
It is guaranteed that V will occur in ar exactly once.
This "sample" shows the first input test case. It is often useful to go through the sample to understand a challenge.

Sample Input

4
6
1 4 5 7 9 12
Sample Output

1
Explanation 
V=4. The value 4 is the 2nd element in the array, but its index is 1 since array indices start from 0, so the answer is 1.


*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int value; 
    scanf("%d",&value);
    int arr_size;
    scanf("%d",&arr_size);
    int A[1000];
    for (int i=0; i<arr_size ; i++){
        scanf("%d ",&A[i]);
    }
    int min,max,mid;
    min=0;
    max=arr_size-1;
    while(min <= max){
        //printf("min is %d max is %d mid is %d\n",min,max,mid);
        mid = floor((min+max)/2);
        
        if(A[mid]<value){
            min = mid+1;
        }
        else if (A[mid]>value) {
            max = mid-1;
        }
        else {
            printf("%d\n",mid);
            break;
        }
    }
    return 0;
}

