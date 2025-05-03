#include <stdio.h>
#include <string.h>

int main(){
    char n[11], m[11];
    scanf("%s%s", n,m);
    
    int N_length = strlen(n);
    int M_length = strlen(m);

    printf("%d %d\n" , N_length,M_length);
    printf("%s%s\n" , n,m);

    int temp = n[0];
    n[0] = m[0];
    m[0] = temp;

      
       printf("%s %s\n", n, m);


    
    return 0;
}


/*
Input:
abcd
ef

Output:
4 2
abcdef
ebcd af


https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
*/