#include <stdio.h>

int main(){
        int n;
        scanf("%d" , &n);
        int arr[n];
       

        for(int i=0; i<n; i++){
            scanf("%d" , &arr[i]);
        }

        int x;
        scanf("%d" , &x);

        for(int i=0; i < n; i++){
            if(arr[i] == x){
                printf("%d" , i);
                return 0;
            }
        }

        printf("-1\n");
        

    return 0;
}


/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
*/