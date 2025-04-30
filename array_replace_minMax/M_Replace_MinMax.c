#include <stdio.h>
#include <limits.h>

int main(){
        int n;
        scanf("%d" , &n);
        int arr[n];

        for(int i=0; i<n; i++){
            scanf("%d" , &arr[i]);
        }

       int minVal = INT_MAX;
       int maxVal = INT_MIN;

       int minIndex = 0; int maxIndex = 0; 

       for(int i=0; i < n; i++){
        if(arr[i] < minVal){
            minVal = arr[i];
            minIndex = i;

        }
        if(arr[i] > maxVal){
            maxVal = arr[i];
            maxIndex = i;
        }
       }

       // swaping 
       int tmp = arr[minIndex];
       arr[minIndex] = arr[maxIndex];
       arr[maxIndex] = tmp;

       for(int i=0; i<n; i++){
        printf("%d " , arr[i]);
       }
        
    return 0;
}



//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M



