#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int a, b, v; // a: 낮 동안 올라가는 거리, b: 밤 동안 미끄러지는 거리, v: 목표 높이
    scanf("%d %d %d", &a, &b, &v); 

    // 1. (v - b): 목표 높이에서 마지막 날의 미끄러짐 b를 뺌, 마지막 날에는 낮에 목표에 도달하면 더 이상 미끄러지지 않기 때문.
    // 2. (a - b): 낮에 올라간 거리 a에서 밤에 미끄러지는 거리 b를 뺀 순수하게 올라가는 거리.
    // 3. (v - b - 1): 정수 나눗셈에서 항상 올림을 하기 위해 1을 빼서 조정해줌.
    // 4. +1: 마지막 날에 미끄러지지 않고 한 번에 올라가는 날을 더해줌.
    int day = (v - b - 1) / (a - b) + 1;

    printf("%d\n", day); 

    return 0;
}
