/*
Input Format

The first line contains T (number of test cases) followed by T lines. Each line contains A and B, separated by a space.

Output Format

An integer representing the sum in a new line for every testcase.

Constraints 
1≤T,A,B≤1000
Sample Input

2
2 3
3 7
Sample Output

5
10

Pseudo code:

read T
loop from 1 to T
    read A and B
    compute the sum
    print value in a newline
end loop

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int solveMeSecond(int a, int b) {
  return a+b;
}
int main() {
  int t,i;
  scanf("%d",&t);
  int num1,num2;
  int sum; 
  for ( i = 0;i < t; i++ ) {
    scanf("%d %d",&num1,&num2);
    sum = solveMeSecond(num1,num2);
    printf("%d\n",sum);
  }
  return 0;
}