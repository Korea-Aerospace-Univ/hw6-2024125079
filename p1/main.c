#include <stdio.h>

int main(void)
{
    char arr[10] = { };
    
    char *p = nullptr;
    char *q = nullptr;
    
    for(int *i = arr; i < arr + 10; i++){
        scanf("%c", i);
    }
    
    char max_char= '\0';
    int max_count = 0;
    
    for(p = arr; p < arr+ 10; p++){
        int count = 0;
        for(q = arr; q < arr + 10; q++){
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
