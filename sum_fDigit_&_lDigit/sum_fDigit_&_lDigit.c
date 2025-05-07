#include <stdio.h>

int sum(int n){
    int lNumber = n % 10;
    int fNumber = n / 1000;

    int sum = lNumber + fNumber;

    return sum;
}

int main(){
    int n;
    scanf("%d", &n);

    int result = sum(n);
    printf("%d\n", result);

    return 0;
}




/*
input: 9876
output: 15
You have positive interger N. Now print the sum of the first digit and last diit of the given number.plplelment using function

Note:it's guranteed taht all the integers will be 4 digit number
*/