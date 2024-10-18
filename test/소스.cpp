#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {
    int N, B; // N은 10진 숫자, B는 진법
    char result[100] = { 0 };  // 변환된 결과를 저장할 배열

    scanf("%d %d", &N, &B);

    int t, index = 0;

    while (N) {
        t = N % B;  // n을 b로 나눈 나머지 -> 마지막 자리수부터 조건 체크해서 result의 index번으로 넣음 
        // 나머지가 10보다 작으면 숫자, 10 이상이면 알파벳으로 변환
        if (t < 10) {
            result[index++] = t + '0';  // t가 10보다 작으면 숫자로 변환 0~9
        }
        else {
            result[index++] = t - 10 + 'A';  // t가 10 이상이면 알파벳으로 변환 A~Z
        }        
        N /= B; // N을 B로 나눈 몫을 구해, 다음 자릿수를 계산. N이 0이 될 때 반복 종료.
    }

    // 저장된 결과를 역순으로 출력
    while (--index >= 0)
        printf("%c", result[index]);

    return 0;
}