#include <stdio.h>

int main(void)
{
    char arr[10] = { };
    
    char *p, *q;
    
    scanf("%s", &arr);
    
    char max_char= 0;
    int max_count = 0;
    
    for(p = arr; p < arr+ 9; p++){
        int count = 0;
        for(q = arr; q < arr + 9; q++){
            if(*p == *q){
                count++;
            }
        }
        if(max_count < count){
            max_count = count;
            max_char = *p;
        }
    }
    
    printf("%c %d", max_char, max_count);


    return 0;
}
