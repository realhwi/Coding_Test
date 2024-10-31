#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, k; // n은 나눌 수, k는 몇 번째인지 
    scanf("%d %d", &n, &k);

    int count = 0; // 약수의 개수
    int result[100] = { 0 };
    for (int i = 1; i <= n; i++) { // i를 1부터 시작
        if (n % i == 0) { // 나머지가 0이면 약수
            result[count] = i;
            count++; // 약수만 카운트
        }
    }

    if (count < k) {
        printf("0\n");
    }
    else {
        printf("%d\n", result[k - 1]); // 인덱스가 0부터라서 -1
    }

    return 0;
}
