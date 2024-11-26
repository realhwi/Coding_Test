#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdio.h>

int main() {
    long long n; 

    scanf("%lld", &n);

    // 수행 횟수 출력: n^3
    printf("%lld\n", n * n * n);

    // 최고 차항의 차수 출력: 3
    printf("3\n");

    return 0;
}
