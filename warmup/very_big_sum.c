/*
nput Format

The first line of the input consists of an integer N. The next line contains N space-separated integers describing the array.

Constraints 
1≤N≤10 
0≤A[i]≤1010

Output Format

Output a single value equal to the sum of the elements of the array.

Sample Input

5
1000000001 1000000002 1000000003 1000000004 1000000005
Sample Output

5000000015
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i;
    scanf("%d",&n);
    long long int A[n];
    long long int sum=0;
    for(i=0;i<n;i++){
        scanf("%lli ",&A[i]);
    }
    for(i=0;i<n;i++){
        
        sum = sum+A[i];
    }
     printf("%lli\n",sum);
    return 0;
}