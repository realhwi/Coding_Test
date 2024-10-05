#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {
    
    for (int i = 0; i < 5; i++) { // i를 더하면서 5번 반복 줄바꿈 
        for (int k = 5; k > i; k--) { // i보다 작을 때까지 공백 출력 
            printf(" ");
        }
        for (int j = 0; j <= 2 * i; j++) { // 0부터 시작해서 i의 2배씩  
            printf("*");
        }
        printf("\n");
    }

    for (int i = 4; i > 0; i--) { // i를 빼면서 5번 반복 줄바꿈  
        for (int k = 5; k >= i; k--) { // i보다 작을 때까지 공백 출력 
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) { // i개수를 2배만큼 * 출력, 점점 줄어듦 
            // i 의 2배보다 -1 씩 * 출력 
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
