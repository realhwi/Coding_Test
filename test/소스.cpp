#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // 삼각형의 조건 : 가장 긴 변 < 다른 두 변의 합
    // 삼각형의 조건에서 벗어나면 그 변의 길이를 줄여야함 (가장 긴 변 >= 다른 두 변일 때)
    while (a >= b + c || b >= a + c || c >= a + b) {
        // 가장 긴 변을 찾아서 1 줄임 (조건 만족할때까지)
        if (a >= b && a >= c) {
            a--;
        }
        else if (b >= a && b >= c) {
            b--;
        }
        else {
            c--;
        }
    }

    printf("%d\n", a + b + c);

    return 0;
}
