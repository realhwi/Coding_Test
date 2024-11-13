#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>

int main() {
    int n, x, y;

    // 최소값 최대값 초기화 
    int min_x = 10000, max_x = -10000;  
    int min_y = 10000, max_y = -10000;

    scanf("%d", &n);

    // 점이 하나일 경우 넓이 0
    if (n == 1) {
        printf("0\n");
    }
    else {
        for (int i = 0; i < n; i++) {
            // 각 점의 좌표 입력
            scanf("%d %d", &x, &y);

            // x 좌표의 최대값과 최소값
            if (x > max_x) {
                max_x = x;
            }
            if (x < min_x) {
                min_x = x;
            }

            // y 좌표의 최대값과 최소값 
            if (y > max_y) {
                max_y = y;
            }
            if (y < min_y) {
                min_y = y;
            }
        }
        // 최소 크기의 직사각형 넓이 출력
        printf("%d\n", (max_x - min_x) * (max_y - min_y));
    }

    return 0;
}