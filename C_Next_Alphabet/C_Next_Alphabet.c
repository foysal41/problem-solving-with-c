#include <stdio.h>

int main(){
        

   char character; 
   scanf("%c" , &character);

   if(character >= 97 && character < 122){
    printf("%c" , character+1);
       
   }else{
    printf("%c" , 122-25 );
   }


    
    return 0;
}

/*
C. Next Alphabet

Given a lowercase alphabet character. You have to print the next character in the alphabet.

Input
Only one line containing a lowercase English letter C
.

Output
Print the next letter to C
 in the alphabet.

Example
Input
a

Output
b

Note
The next letter to z is a.

https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

*/