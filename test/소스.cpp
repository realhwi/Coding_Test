#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdio.h>
#include <stdlib.h> // 동적 배열 

int main() {
    int n, m; // 카드 개수N, 최대 합M
    scanf("%d %d", &n, &m); 

    int* cards = (int*)malloc(n * sizeof(int)); // 동적 배열 할당

    for (int i = 0; i < n; i++) {
        scanf("%d", &cards[i]); // 카드 숫자 입력
    }

    int max = 0; // 최대 합을 저장

    // 세 개의 카드 조합 모든 합을 구하기 
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = cards[i] + cards[j] + cards[k]; 
                if (sum <= m && sum > max) { // 조건 M이하까지 
                    max = sum;
                }
            }
        }
    }

    printf("%d\n", max); 
    return 0;
}