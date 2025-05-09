#include <stdio.h>

void space_printer(int count){
    for(int i=1; i<=count; i++){
        printf(" ");
    }
}

void number_printer(int count){
    
    for(int i=count; i >= 1; i--){
        printf("%d" , i);
    }
}

int main(){
    int n;
    scanf("%d", &n);


    int space_tracker = n-1;

    for(int i=1; i<=n; i++){

        space_printer(space_tracker);
        number_printer(i);
        
        printf("\n");
        
        space_tracker--;
    }

    
    return 0;
}



/*

Problem Statement

You will be given a positive integer N, you need to print a pattern shown below using this N.

For example: If N=5, the pattern will look like below.

image

See the sample test cases for more clarification.

Input Format

Input will contain only N.
Constraints

1 <= N <= 9
Output Format

Output the pattern.




Sample Input 0

1
Sample Output 0

1


Sample Input 1

4
Sample Output 1

   1
  21
 321
4321



Sample Input 2

5
Sample Output 2

    1
   21
  321
 4321
54321


*/