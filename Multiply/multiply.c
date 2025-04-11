/* 
    Problem Statement
    You will be given two integers A and B. You need to give output their multiplication.

    Sample Input 2
    -100 62

    Sample Output 2
    -6200

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     
    long long A;
    long long B;
    
    scanf("%lld %lld" , &A ,&B);
    long long multiplication = A * B;
    
    printf("%lld" , multiplication);
    return 0;
}