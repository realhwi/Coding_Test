#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

int main() {
    
    // 완전수의 조건 : n의 반부터 나눠지는 숫자까지의 합이 n과 같다면
    int n;

    while (1)
    {
        scanf("%d", &n);

        if (n == -1) return 0;

        int sum = 0; // 약수의 합을 저장 
        int N[100] = {0}; // 약수 저장용 배열
        int count = 0;   // 약수의 개수를 저장할 변수

        // 1부터 n/2까지 반복하여 약수를 찾고 배열에 저장
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {    // i가 n의 약수일 때
                N[count++] = i;  // 약수를 배열에 저장하고 count 증가
                sum += i;       // 약수의 합에 i를 더함
            }
        }

        // 약수의 합이 n과 같으면 완전수
        if (sum == n) {
            printf("%d = ",n);
            for (int i = 0; i < count; i++) { // 저장된 약수들을 출력
                printf("%d",N[i]);
                if (i < count - 1) { // 마지막 약수 뒤에 "+" 생략
                    printf(" + ");
                }
            }
            printf("\n");
        }
        else {
            printf("%d is NOT perfact.\n",n);
        }
    }

    return 0;
}
