#include <stdio.h>

int main(void)
{
    int input1[20] = { };
    int input2[20] = { };
    
    int *p = nullptr;
    int *q = nullptr;
    
    int N = 0;
    scanf("%d", &N);

    int sum = 0;
    
    for(p = input1; p < input1 + N; p++){
        scanf("%d", p);
    }
    for(q = input2; q < input2 + N; q++){
        scanf("%d", q);
    }
    
    p = input1;
    q = input2 + N -1;
    
    for(int k = 0; k < N; k++){
        int result[20] = { };
        result[k] = *(p + k) + *(q - k);
        printf(" %d", result[k]);
    }
    
    return 0;
}
