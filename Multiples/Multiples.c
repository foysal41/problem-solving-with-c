#include <stdio.h>

int main(){
    int A;
    int B;

    scanf("%d %d" , &A,&B);
    
    if(A%B == 0 || B%A==0){
        printf("Multiples");
    }else{
        printf("No Multiples");
    }
    return 0;
}


/* 



Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

Input
Only one line containing two numbers A, B (1 ≤ A, B  ≤  106)

Output
Print the "Multiples" or "No Multiples" corresponding to the read numbers.

Examples
Input
9 3
Output
Multiples

Input
6 24
Output
Multiples

Input
12 5
Output
No Multiples



Note
***A is said to be Multiple of B if B is divisible by A.

First Example :
9 is divisible by 3 , So the answer is: Multiples.

Second Example :
6 is not divisible by 24 but 24 is divisible by 6 , So the answer is: Multiples.

Third Example :
12 is not divisible by 5 and 5 is not divisible by 12.

So the answer is: No Multiples.

https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
*/