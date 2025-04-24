#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int arr[n];

  for(int i = 0; i< n; i++) {
      scanf("%d", &arr[i]);
  }


int i;
  if(n%2== 0){
    i = n-1;
  }else{
    i= n-2;
  }




  for(; i>=1; i=i-2){
    printf("%d ", arr[i]);
  }

 
  return 0;
}