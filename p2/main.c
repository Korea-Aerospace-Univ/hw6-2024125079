/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int N = 0;
    scanf("%d", &N);
    
    int sum = 0;
    
    int input1[N];
    int input2[N];
    
    for(int i = 1; i <= N; i++){
        scanf("%d", &input1[i]);
    }
    for(int j = N; j > 0; j--){
        scanf("%d", &input2[j]);
    }
    
    for(int k = 1; k <= N; k++){
        sum = input1[k] + input2[k];
        printf(" %d", sum);
        sum = 0;
    }
    
    return 0;
}
