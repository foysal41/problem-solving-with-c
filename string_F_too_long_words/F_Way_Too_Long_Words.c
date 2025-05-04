#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    char s[t][10001];

    for(int i = 0; i < t; i++){
        scanf("%s", s[i]);
    }

   for(int i=0; i<t; i++){
    int len = strlen(s[i]);

    if(len > 10 ){
        printf("%c%d%c\n" , s[i][0], len-2, s[i][len-1]);
    }else{
        printf("%s\n" , s[i]);
    }
   }
 
    
    return 0;
}


/*
int len = strlen(s[i]);         // যেমন: "localization" → len = 12
char first = s[i][0];           // 'l'
char last = s[i][len - 1];      // 'n'
int middleCount = len - 2;      // 12 - 2 = 10

*/


//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F


/*
Example
Input
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

Output
word
l10n
i18n
p43s

*/