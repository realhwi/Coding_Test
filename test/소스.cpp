#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>



int main() {
   
   // 1달러는 100센트, 몇번 input 할건지 
    int input; 

    scanf("%d", &input);

    for (int i = 0; i < input; i++) {
        int C;  // 거스름돈 
        scanf("%d", &C);

        int q = C / 25;  // 거스름 돈에서 쿼터를 빼고 
        C %= 25;  // 쿼터를 제외한 나머지 저장 

        int d = C / 10;  // 나머지 거스름돈에서 
        C %= 10;  // 다임을 제외한 나머지 저장 

        int n = C / 5;  // 나머지 거스름돈에서
        C %= 5;  // 니켈을 제외한 나머지 저장 

        int p = C;  // 나머지 그대로는 페니의 개수 

        // 결과 출력
        printf("%d %d %d %d\n", q, d, n, p);
    }

    return 0;
}