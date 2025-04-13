/* 
You've learned about variables, right? Now it's time to practic tham. You need to take and interger A, a very big integer B, a floating value C and a character D as input and output them serially.

*/

#include <stdio.h>

int main(){
    int a;
    long long b;
    double c;
    char d;

    scanf("%d %lld %lf %c", &a, &b, &c, &d);
    printf("%d\n%lld\n%.1lf\n%c", a, b, c, d);
    return 0;
}