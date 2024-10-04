#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {
    
    int W0[6]={1,1,2,2,2,8}; // 표준 체스 
    int W1[6]={0}; // 찾은 체스 

    for (int i = 0; i < 6; i++) {
        scanf("%d", &W1[i]); // 입력받기 
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", W0[i] - W1[i]); // 표준 개수에서 찾은 개수 뺀 차이 출력 
    }

    return 0;
}
