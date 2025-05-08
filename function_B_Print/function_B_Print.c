#include <stdio.h>


int print(int n){

    for(int i = 1; i <= n; i++){
        if(i==n){
            printf("%d", i);
        }else{
            printf("%d ", i);
        }
        
    }

    
}


int main(){
    int n;
    scanf("%d", &n);
    print(n);   
    return 0;
}

//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B