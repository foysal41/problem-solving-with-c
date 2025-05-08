#include <stdio.h>

int sum(int a, int b){
    int sum = a + b; 
    return sum;
}




int main(){
    int n,m; 
    scanf("%d %d" , &n, &m);

   int result = sum(n,m);
   printf("%d" , result);
    
    return 0;
}


//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A