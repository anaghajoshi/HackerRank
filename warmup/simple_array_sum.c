/*
Problem Statement

You are given an array of integers of size N. You need to print the sum of the elements of the array.

Input Format 
The first line of the input consists of an integer N. The next line contains N space-separated integers describing the array.

Constraints 
1≤N≤1000 
0≤A[i]≤1000

Output Format 
Output a single value equal to the sum of the elements of the array.

Sample Input

6
1 2 3 4 10 11
Sample Output

31
Explanation 
1+2+3+4+10+11=31
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%d",&n);
    int A[n];
    int sum=0;
    for(i=0;i<n;i++){
        scanf("%d ",&A[i]);
    }
    for(i=0;i<n;i++){
        
        sum = sum+A[i];
    }
     printf("%d\n",sum);
    return 0;
}