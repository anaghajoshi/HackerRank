/*
Input Format 
Number A and B on two different lines.

Output Format 
An integer representing the sum of the given numbers.

Constraints 
(This section describes the range of the expected input. As an example here given below, A and B will never be below 1 or above 1000.) 
1≤A,B≤1000
Sample Input

2
3
Sample Output

5

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int solveMeFirst(int a, int b) {
  return a+b;
}
int main() {
  int num1,num2;
  scanf("%d %d",&num1,&num2);
  int sum; 
  sum = solveMeFirst(num1,num2);
  printf("%d",sum);
  return 0;
}