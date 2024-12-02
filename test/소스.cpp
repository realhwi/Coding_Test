#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdio.h>
#include <stdlib.h> 


int main() {
    int n, m, sum, temp; // n= 입력, m= 생성자 sum= 분해합, temp= 자리수 계산용 변수
    scanf("%d", &n); 

    int start = n - 9 * 6; // 생성자의 최소값 계산 (n - 9 * 자리수 최대값)
    if (start < 1) start = 1; // 생성자는 최소 1 이상

    for (m = start; m < n; m++) { // start부터 n-1까지 탐색
        sum = m; // 분해합 초기화
        temp = m;

        // 자리수의 합을 계산
        while (temp > 0) {
            sum += temp % 10; // 마지막 자리수를 더함
            temp /= 10;       // 숫자를 10으로 나눠 자리 이동
        }

        // 분해합이 N과 같다면 생성자 출력 후 종료
        if (sum == n) {
            printf("%d\n", m);
            return 0;
        }
    }

    printf("0\n");
    return 0;
}