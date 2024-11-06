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
    scanf("%d",&n);

    for (int i = 2; i <= n; i++) { // i 2부터 제곱근까지 확인
        while (n%i==0) // n이 i로 나누어떨어지면
        {
            printf("%d\n",i); // i를 소인수로 출력
            n /= i; // n을 i로 나눔
        }
    }
    if (n > 1) {
        printf("%d\n",n); // 나누고 남은 n이 소수인 경우 출력 
    }

    return 0;
}