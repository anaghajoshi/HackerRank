/*
Problem Statement

Dothraki are planning an attack to usurp King Robert's throne. King Robert learns of this conspiracy from Raven and plans to lock the single door through which the enemy can enter his kingdom.

door

But, to lock the door he needs a key that is an anagram of a certain palindrome string.

The king has a string composed of lowercase English letters. Help him figure out whether any anagram of the string can be a palindrome or not.

Input Format 
A single line which contains the input string.

Constraints 
1≤ length of string ≤105 
Each character of the string is a lowercase English letter.

Output Format 
A single line which contains YES or NO in uppercase.

Sample Input : 01

aaabbbb
Sample Output : 01

YES
Explanation 
A palindrome permutation of the given string is bbaaabb. 

Sample Input : 02

cdefghmnopqrstuvw
Sample Output : 02

NO
Explanation 
You can verify that the given string has no palindrome permutation. 

Sample Input : 03

cdcdcdcdeeeef
Sample Output : 03

YES
Explanation 
A palindrome permutation of the given string is ddcceefeeccdd.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
void findPalind(char *arr)
{
     
    int flag = 0;
    
    int alph_arr[26];
     for(int j =0; j<26 ;j++){
            alph_arr[j]=0;
        }
    int len_str = strlen(arr);
    int index_i;
    for (int i =0; i<len_str ; i++){
        index_i =(arr[i] - 'a'); 
            alph_arr[index_i] += 1;
    }
    
    
    if (len_str%2 == 0){
        //even number of letters
        for(int j =0; j<26 ;j++){
            if ((alph_arr[j]%2) != 0){
                flag = 1;
                break;
            }
        }
    }
    else {
       //odd number of letters
        int excep_flag =0;
        for(int j =0; j<26 ;j++){
            if ((alph_arr[j]%2) != 0){
                if(excep_flag == 0){
                    excep_flag += 1;
                }
                else{
                        flag = 1;
                        break;
                    
                }
            }
        
    }
}
    
    if (flag==0)
        printf("YES\n");
    else
        printf("NO\n");
    
    return;
}
    
int main() {

    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}