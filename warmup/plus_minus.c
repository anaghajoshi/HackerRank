/*
Input Format

First line contains N, which is the size of the array. 
Next line contains N integers A1,A2,A3,⋯,AN, separated by space.

Constraints 
1≤N≤100 
−100≤Ai≤100
Output Format

Output three values on different lines equal to the fraction of count of positive numbers, negative numbers and zeroes to the total numbers respectively correct to 3 decimal places.

Sample Input

6
-4 3 -9 0 4 1          
Sample Output

0.500
0.333
0.167
Explanation

There are 3 positive numbers, 2 negative numbers and 1 zero in the array. 
Fraction of the positive numbers, negative numbers and zeroes are 36=0.500, 26=0.333 and 16=0.167 respectively.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i;
    scanf("%d",&n);
    int A[n];
    
    int p_count=0;
    int n_count=0;
    int z_count=0;
    
    for(i=0;i<n;i++){
        scanf("%d ",&A[i]);
        if (A[i] > 0) p_count++;
        else if (A[i] < 0) n_count++;
        else z_count++;
    }
    
     printf("%.3f\n",(float)p_count/(float)n);
     printf("%.3f\n",(float)n_count/(float)n);
     printf("%.3f\n",(float)z_count/(float)n);
    
    return 0;
}