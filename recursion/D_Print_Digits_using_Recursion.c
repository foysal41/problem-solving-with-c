#include <stdio.h>

void rec(int n){

	if(n==0){
		return;
	}

	rec(n/10);
	int last_number = n % 10;
	printf("%d " , last_number);
   
}


int main(){

    int tastCase;
    scanf("%d" , &tastCase);
   
    for(int i=0; i<tastCase; i++){
        int n;
        scanf("%d" , &n);
         if(n==0){
        printf("0");
        }
        rec(n);
        printf("\n");
    }
   
    
    return 0;
}

//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D