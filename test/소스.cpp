#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {

    // 1번 방법. EOF는 문자열 끝을 알려줌 
    char word;
    while (scanf("%c", &word) != EOF) {
        printf("%c", word);
    }

    // 2번 방법. 1은 scanf에서 입력을 받는 동안 읽는 항목 수 
    char word1;

    while (scanf("%c", &word1) == 1) {
        printf("%c", word1);
    }

    // 3번 방법. 문자열 단위로 EOF (엔터 직전까지) 받기 
    char word2[100];

    while (scanf("%[^\n]", word2) != EOF) {
        printf("%s\n", word2);
        getchar();
    }

}
