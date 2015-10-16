/*
Problem Statement

Chinese Version
Russian Version

Alice recently started learning about cryptography and found that anagrams are very useful. Two strings are anagrams of each other if they have same character set and same length. For example strings "bacdc" and "dcbac" are anagrams, while strings "bacdc" and "dcbad" are not.

Alice decides on an encryption scheme involving 2 large strings where encryption is dependent on the minimum number of character deletions required to make the two strings anagrams. She need your help in finding out this number.

Given two strings (they can be of same or different length) help her in finding out the minimum number of character deletions required to make two strings anagrams. Any characters can be deleted from any of the strings.

Input Format 
Two lines each containing a string.

Constraints 
1 <= Length of A,B <= 10000 
A and B will only consist of lowercase latin letter.

Output Format 
A single integer which is the number of character deletions.

Sample Input #00:

cde
abc
Sample Output #00:

4
Explanation #00: 
We need to delete 4 characters to make both strings anagram i.e. 'd' and 'e' from first string and 'b' and 'a' from second string.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int count_diff_letter(char* s1, char* s2,int len_str1,int len_str2){
        int alph_arr1[26];
    int alph_arr2[26];
    
    for(int i =0; i <26 ; i++){
        alph_arr1[i] = 0;
        alph_arr2[i] = 0;
    }
    
    
    
    int index_i=0;
    
    for(int i =0; i <len_str1 ; i++){
        index_i = s1[i]-'a';
        alph_arr1[index_i] += 1;
    }
    
    index_i=0;
    
    for(int i =0; i <len_str2 ; i++){
        index_i = s2[i]-'a';
        alph_arr2[index_i] += 1;
    }
   

    int count =0;
    
    for (int i =0; i<26 ; i++){
       if ( ((alph_arr1[i] == 0) && (alph_arr2[i] != 0 )) )
           count +=alph_arr2[i];
        else if (((alph_arr1[i] != 0) && (alph_arr2[i] == 0 ))){
            count+= alph_arr1[i];
        }
        else if (alph_arr1[i] != alph_arr2[i]){
            count+= abs (alph_arr1[i]-alph_arr2[i]);
        }
    }
        
    return count;
}

int main() {
    char s1[10000];
    char s2[10000];
    scanf("%s",s1);
    scanf("%s",s2);
    int len_str1, len_str2;
    len_str1 = strlen(s1);
    len_str2 = strlen(s2); 
    int count;
    count = count_diff_letter(s1,s2,len_str1,len_str2);
    
    printf("%d\n",count);
    return 0;
}
