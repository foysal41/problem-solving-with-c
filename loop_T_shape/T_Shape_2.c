#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
  
    int val = 1;
    int space = n-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=space; j++){
            printf(" ");
        }

        for(int j=1; j<=val; j++){
            printf("*");
        }

        printf("\n");
        val+=2;
        space--;
    }

    
    return 0;
}


//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T