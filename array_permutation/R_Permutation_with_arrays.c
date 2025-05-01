#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n] , b[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j] > a[j+1]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }

    for(int i=0; i < n-1; i++){
        for(int k=0; k<n-1-i; k++){
            if(b[k] > b[k+1]){
                int tmp = b[k];
                b[k] = b[k+1];
                b[k+1] = tmp;
            }
        }
    }

    int same = 1;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            same = 0;
            break;
        }
    }

    if(same){
        printf("yes");
    }else{
        printf("no");
    }
    
 
    return 0;
}


//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R