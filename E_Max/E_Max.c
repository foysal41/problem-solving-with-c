#include <stdio.h>
#include <limits.h>

int main(){
        int n;
        scanf("%d" , &n);
        int mx = INT_MIN;
        for(int i=1; i<=n; i++){
            
            int val;
            scanf("%d" , &val);

            if(val>mx){
                mx=val;
            }
            
        }
        printf("%d" , mx);

        

    return 0;
}



/*
Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.

Example
Input:
5
1 8 5 7 5

Output:
8
*/