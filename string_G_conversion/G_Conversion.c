#include <stdio.h>
#include <stdio.h>

int main(){
   char s[100005];
   scanf("%s" , s);

    for(int i=0; s[i] != '\0'; i++){
        if(s[i] == ','){
            printf(" ");
        }else if (islower(s[i])){
            printf("%c" , toupper(s[i]));
        }else if (isupper(s[i])){
            printf("%c" , tolower(s[i]));
        }else{
            printf("%c" ,s[i]);
        }
    }
    
   
    
    return 0;
}


//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G