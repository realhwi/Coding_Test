#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {
    char N[100]; // B진법 수를 입력받을 배열
    int B;       // 진법을 입력받을 변수

    // 입력: B진법 수 N과 진법 B
    scanf("%s %d", N, &B);

    int len = strlen(N); 
    int result = 0;      
    int pow = 1;         
    // result는 반환값, pow는 제곱 / Z×B^0 부터 ZXB^len까지   


    // 뒤에서부터 (가장 낮은 자리부터) 순회하며 10진법으로 변환
    for (int i = len - 1; i >= 0; i--) {
        int value; // B진법은 10진법으로 바꾼 값 

        // 현재 문자가 숫자면 해당 숫자의 값을 가져옴
        if ('0' <= N[i] && N[i] <= '9') {
            value = N[i] - '0';
        }
        // 현재 문자가 알파벳이면 A는 10으로 시작 Z는 35로 변환
        else {
            value = N[i] - 'A' + 10;
        }

        // 자릿수 값을 10진법으로 변환하여 누적
        result += value * pow;

        // 다음 자리의 B^지수를 위해 power를 B배 증가
        pow *= B;
    }

    // 변환된 10진법 값 출력
    printf("%d\n", result);

    return 0;
}