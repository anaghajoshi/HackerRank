/*
Input Format

You are given an integer N depicting the height of the staircase.

Constraints 
1≤N≤100
Output Format

Draw a staircase of height N in the format given below.

For example:

     #
    ##
   ###
  ####
 #####
######
Staircase of height 6, note that last line has 0 spaces before it.

Sample Input

6
Sample Output

     #
    ##
   ###
  ####
 #####
######
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n =0 ;
    scanf("%d",&n);
    
    for(int i=1; i<=n ; i++){
        for(int j=1 ; j<= n-i ; j++){
            printf(" ");
        }
        for(int j=1; j<=i;j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
