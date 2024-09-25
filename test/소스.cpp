#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {
    
    int n,temp=0; 
    char input[100];

    // 숫자 개수 입력 받기
    scanf("%d",&n);
    fseek(stdin, 0, SEEK_END);

    // 공백 없이 이어진 문자열 입력받기
    scanf("%s", input);

    for (int i = 0; i < n; i++) {
        temp += input[i]-'0'; //input[i]는 char 타입 값이라 아스키 코드'0'을 빼줘야 정수로 변환됨  
    }

    printf("%d\n", temp);

    return 0;
}
