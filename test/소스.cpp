#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>



int main() {
    int n;
    scanf("%d", &n);

    int len = 2; // 초기 변의 길이는 2 (점이 4개인 상태)

    // N번 반복하면서 변의 길이를 증가시킴
    for (int i = 0; i < n; i++) {
        len = len * 2 - 1; // 각 반복마다 변의 길이가 2배가 되고, 변의 중간에 점이 추가됨
    }

    // 점의 수 계산: 변의 길이의 제곱
    int dot = len * len;

    printf("%d\n", dot);

    return 0;
}