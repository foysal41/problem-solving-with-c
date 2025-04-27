#include <stdio.h>
#include <string.h>

int main(){
        char s[100001];
        scanf("%s" , s);
        int input_count = strlen(s);
        
        int count = 0;
        for(int i=0; i<input_count; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                
            }else{
                count++;
            }
        }

        printf("%d" , count);
    return 0;
}