#include <stdio.h>
#include <string.h>

int main(){
    char s[21] , t[21];
    scanf("%s %s", s,t);

    int val = strcmp(s,t);
    
    if(val < 0){
        printf("%s" , s);
    }else if(val == 0){
        printf("%s" , s);
    }else{
        printf("%s" , t);
    }

   
    
    return 0;
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C


/* 
Input:
acm
acpc

Output:
acm


*/