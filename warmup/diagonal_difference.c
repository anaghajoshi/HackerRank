/*
Input Format

The first line contains a single integer N. The next N lines contain N integers (each) describing the matrix.

Constraints 
1≤N≤100 
−100≤A[i]≤100
Output Format

Output a single integer equal to the absolute difference in the sums across the diagonals.

Sample Input

3
11 2 4
4 5 6
10 8 -12
Sample Output

15
Explanation

The first diagonal of the matrix is:

11
    5
        -12
Sum across the first diagonal = 11+5-12= 4

The second diagonal of the matrix is:

        4
    5
10
Sum across the second diagonal = 4+5+10 = 19 
Difference: |4-19| =15
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    int A[n][n];
    int d1=0;
    int d2=0;
    for(i=0; i<n ; i++){
        for(j=0; j<n; j++){
            scanf("%d ",&A[i][j]);
        }
    }
    for(i=0; i<n ;i++){
        d1 = d1 + A[i][i];
        d2 = d2 + A[i][n-1-i];
    }
    printf("%d\n", abs(d1-d2));
    return 0;
}
