#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>

int main() {
    
    int x1,x2,x3;

    while (1) {
        scanf("%d %d %d", &x1, &x2, &x3);

        // 종료 조건
        if (x1 == 0 && x2 == 0 && x3 == 0) {
            break;
        }

        // 삼각형 유효성 검사
        if ((x1 + x2 <= x3) || (x2 + x3 <= x1) || (x1 + x3 <= x2)) {
            printf("Invalid\n");
        }
        // 세 변의 길이가 모두 같은 경우
        else if (x1 == x2 && x2 == x3) {
            printf("Equilateral\n");
        }
        // 두 변의 길이만 같은 경우
        else if (x1 == x2 || x2 == x3 || x1 == x3) {
            printf("Isosceles\n");
        }
        // 세 변의 길이가 모두 다른 경우
        else {
            printf("Scalene\n");
        }
    }

    return 0;
}