#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {

    char input[1000];
    int count =0,len;

    scanf("%[^\n]",input);
    len = strlen(input);

    //만약 첫번째 입력이 공백일 경우 0을 출력
    if (len == 1 && input[0] == ' ') {
        printf("%d", count);

        return 0;
    }
    // 문자열 끝 길이까지 반복하는데 공백이 있을 경우 count++
    for (int i = 0; i < len; i++) {
        if (input[i] == ' ') {
            count++;
        }
    }
    printf("%d",count+1);

    return 0;
}
