#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {

    char A[5][15] = { 0, }; // 세로 5, 가로 15까지 

    for (int i = 0; i < 5; i++) {
        scanf("%s", A[i]); // i번째 인덱스에 두번째 인덱스 값 넣기
    }

    // 열 출력하기 (세로로 읽기)
    for (int j = 0; j < 15; j++) { // 열 (문자열의 길이 범위)
        for (int i = 0; i < 5; i++) { // 행 (각 단어)
            if (A[i][j] != '\0') { // 유효한 문자만 출력 (널 문자가 아닌 경우)
                printf("%c", A[i][j]);
            }
        }
    }

    return 0;
}