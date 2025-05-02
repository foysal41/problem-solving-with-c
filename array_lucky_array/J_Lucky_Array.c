#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX;
    int count = 0;
    
    for(int i=0; i < n; i++){
      if(arr[i] < min){
        min = arr[i];
       
      }
    }

    for(int i=0; i<n; i++){
        if(arr[i] == min){
            count++;
        }
    }

    if(count % 2 !=  0){
        printf("Lucky");
    }else{
        printf("Unlucky");
    }

   
    return 0;
}


//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J