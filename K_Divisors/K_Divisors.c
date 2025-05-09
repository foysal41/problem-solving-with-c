#include <stdio.h>

int main(){
        int n;
        scanf("%d" , &n);

        for(int i=1; i<=n; i++){
            if(n%i == 0){
                printf("%d\n" , i);
            }
        }
    return 0;
}


/*
Given a number N. Print all the divisors of N in ascending order.

Input
Only one line containing a number N (1 ≤ N ≤ 104).

Output
Print all positive divisors of N, one number per line.

Examples

Input
6
Output
1
2
3
6


Input
7
Output
1
7


https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K
*/