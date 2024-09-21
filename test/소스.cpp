#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>

int main() {

    // 과목 개수 n, 점수 배열 m, 최대점수 max
    int n,max=0;
    scanf("%d",&n);

    // 동적 배열 
    int* m = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &m[i]);
        if (m[i] > max) {
            max = m[i];
        }
    }

    // 평균 값 avg 
    float avg =0;
    for (int i = 0; i < n; i++) {
        // 배열 순회하면서 avg에 우측 값 계산 후 순회할때마다 더하기 
        avg += (float)m[i] / max * 100;
    }

    printf("%f\n",avg/n);

    return 0;
}
