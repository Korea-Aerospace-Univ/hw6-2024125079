#include <stdio.h>

int main(void)
{
    int input1[20] = { };
    int input2[20] = { };
    
    int *p = nullptr;
    int *q = nullptr;
    
    int N = 0;
    scanf("%d", &N);

    for(p = input1; p < input1 + N; p++){
        scanf("%d", p);
    }
    for(q = input2; q < input2 + N; q++){
        scanf("%d", q);
    }
    
    int sum = 0;
    
    int result[20] = { };
    
    for(p = input1, q = input2 + N - 1; p < input1 + N; p++, q--){
            printf(" %d",*p + *q);
    }

    
    return 0;
}
