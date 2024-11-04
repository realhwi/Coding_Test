#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

int main() {
    
    int N; // 입력받을 수
    scanf("%d",&N);

    int n[100]={0}; // 소수 입력받을 배열 저장
    int count=0; // 소수 카운트 
    
    for (int i = 0; i < N; i++) {
        
        scanf("%d",&n[i]); // 각 수를 입력받아 배열에 저장
        int is_prime = 1; // 소수 여부를 체크할 변수 (1이면 소수, 0이면 소수가 아님)

        if (n[i] <= 1) { // 1 이하의 수는 소수가 아님
            is_prime = 0;
        }
        else { 
            for (int k = 2; k * k <= n[i]; k++) {  // 2부터 n[i]의 제곱근까지 확인
                if (n[i] % k == 0) { // 약수가 존재하면 소수가 아님
                    is_prime = 0; 
                    break;
                }
            }
        }

        if (is_prime) { // 소수일 경우
            count++; // 소수 개수 증가
        }

    }
    printf("%d\n", count);
    return 0;
}
