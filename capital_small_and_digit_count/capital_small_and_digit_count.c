#include <stdio.h>
#include <string.h>

int main(){
        int tc;
        scanf("%d" , &tc);
        for(int i=0; i<tc; i++){
            char s[1001], t[1001]; 
            scanf("%s" , &s);

            int count_capital = 0, count_small = 0, count_digit = 0; 
            int len_s = strlen(s);
            for(int i=0; i< len_s; i++){
                if(s[i] >= 65 && s[i] <= 90){
                    count_capital++;
                }else if(s[i] >= 97 && s[i] <= 122){
                    count_small++;
                }else if(s[i] >= '0' && s[i] <= '9'){
                    count_digit++;
                }   
            }

            printf("%d %d %d\n" , count_capital , count_small , count_digit);

        }

       

        

       
    return 0;
}