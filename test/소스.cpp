#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>

int main() {

    // 단어 길이 출력 널체크로 하기
    char input[100] = { 0 };
    scanf("%s", input); 

    int count = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        count++;
    }
    printf("%d\n", count);


    // 단어길이 출력 string 변수길이 사용하는 것 활용하기 
    char input1[100];
    scanf("%s", input1);

    printf("%d",strlen(input1));

    return 0;

}
