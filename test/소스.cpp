#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

int main() {

    int m, n; // M이 최소값, N이 최대값
    scanf("%d %d", &m, &n);

    int sum = 0; // 소수들의 합
    int min_prime = -1; // 최소 소수값, 소수가 없을 경우 대비 -1로 초기화 

    for (int i = m; i <= n; i++) { // i <= n으로 수정
        int is_prime = 1; // 소수 여부를 판별할 변수

        if (i < 2) {
            is_prime = 0; // 1 이하의 수는 소수가 아님
        }

        for (int k = 2; k * k <= i; k++) {
            if (i % k == 0) { // i가 k로 나누어 떨어지면 소수가 아님
                is_prime = 0;
                break;
            }
        }

        if (is_prime) { // 소수일 경우
            sum += i; // 소수의 합을 계산
            if (min_prime == -1) {
                min_prime = i; // 첫 번째 소수를 최소값으로 설정
            }
        }
    }

    if (min_prime == -1) { // 소수가 없을 경우
        printf("-1\n");
    }
    else {
        printf("%d\n%d\n", sum, min_prime); // 소수들의 합과 최소 소수 출력
    }

    return 0;
}