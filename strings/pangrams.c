/*
Input Format Input consists of a line containing s.

Constraints 
Length of s can be at most 103 (1≤|s|≤103) and it may contain spaces, lower case and upper case letters. Lower case and upper case instances of a letter are considered the same.

Output Format Output a line containing pangram if s is a pangram, otherwise output not pangram.

Sample Input #1

We promptly judged antique ivory buckles for the next prize    
Sample Output #1

pangram
Sample Input #2

We promptly judged antique ivory buckles for the prize    
Sample Output #2

not pangram
Explanation 
In the first test case, the answer is pangram because the sentence contains all the letters of the English alphabet.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1001];
    scanf("%1000[^\n]",s);
    
    int array[26]; int i=0;
    for(i=0 ; i< 26 ; i++){
        array[i]=0;
    }
    char small_a, capital_a;
    small_a = 97;
    capital_a = 65;
    for(i=0 ; i< 26 ; i++){
        if((strchr(s,small_a) == NULL) && (strchr(s,capital_a) == NULL)){
            printf("not pangram");
            return 0;
        }
        small_a++;
        capital_a++;
    }
   
    printf("pangram");
    
    return 0;
}

