#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>

int main() {

    //단어 s와 정수 i가 주어졌을 때 s의 i번째 출력
    char s[100];
    int i;

    scanf("%s",s);
    scanf("%d",&i);

    printf("%c",s[i-1]); //인덱스 0부터니까 

    return 0;
}
