/*
Problem Statement

You are given time in AM/PM format. Convert this into a 24 hour format.

Note Midnight is 12:00:00AM or 00:00:00 and 12 Noon is 12:00:00PM.

Input Format

Input consists of time in the AM/PM format i.e. hh:mm:ssAM or hh:mm:ssPM 
where 
01≤hh≤12 
00≤mm≤59 
00≤ss≤59

Output Format

You need to print the time in 24 hour format i.e. hh:mm:ss 
where 
00≤hh≤23 
00≤mm≤59 
00≤ss≤59

Sample Input

07:05:45PM
Sample Output

19:05:45
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int hh;
    int mm;
    int ss;
    char ampm[2];
    scanf("%d:%d:%d%s",&hh,&mm,&ss,ampm);
    if(strcmp (ampm,"AM") == 0){
        printf("%02d:%02d:%02d",hh,mm,ss);
    }
    else if(strcmp (ampm,"PM") == 0){
        hh+= 12;
        printf("%02d:%02d:%02d",hh,mm,ss);
    }
    return 0;
}
