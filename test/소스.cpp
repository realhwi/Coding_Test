#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdio.h>

int main() {
    /* 𝑓(𝑛)f(n)가 O(n) 정의를 만족하는지 안하는지
    f(n) = a * n + a0 
    g(n) = n (기존 함수)  
    c: 기준 함수 𝑔(𝑛)g(n)에 곱하는 상수
    n0 = 𝑛n이 𝑛0이상일 때부터 정의를 만족하는지 보는 기준 값
    문제 풀이 : f(n)과 𝑔(𝑛)을 비교해서 𝑓(𝑛) ≤ 𝑐*𝑔(𝑛)인지 확인하는 것, 단 n이 n0이상일 때
    a0 ≤ c * n - a1 * n 
    조건 = 𝑛 ≥ 𝑛0 */

    int a1, a0, c, n0; 

    scanf("%d %d %d %d", &a1, &a0, &c, &n0);

    // 조건 확인
    // c가 충분히 크고, n이 n0 이상일 때 조건을 만족하는지 확인
    for (int n = n0; n <= 100; n++) {  // 최대 n = 100까지 확인
        if (a1 * n + a0 > c * n) {     // 조건을 위반하면
            printf("0\n");             // 0 출력
            return 0;
        }
    }

    printf("1\n"); // 모든 조건을 만족하면 1 출력
    return 0;
}