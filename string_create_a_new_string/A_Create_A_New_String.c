#include <stdio.h>

int main(){
    char n[1001], m[1001];
    scanf("%s %s", n,m);

    int count = 0; 
    int count2 = 0;

    for(int i=0; n[i] != '\0'; i++){
        count++;
    }
    for(int i=0; m[i] != '\0'; i++){
        count2++;
    }

    printf("%d %d\n" , count, count2);
    printf("%s %s", n,m);


    
    return 0;
}


// #include <stdio.h>
// #include <string.h>

// int main(){
//     int s[100] , t[100];
//     scanf("%s %s" , s,t);
 
//     int S_length = strlen(s);
//     int T_length = strlen(t);

//     printf("%d %d\n" , S_length,T_length);
//     printf("%s %s", s,t);
    
//     return 0;
// }


//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A



/*
Input:
LEVEL
ONE
Output
5 3
LEVEL ONE

Input:
Programming
contest
Output
11 7
Programming contest

*/