#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>

int main() {

    //�ܾ� s�� ���� i�� �־����� �� s�� i��° ���
    char s[100];
    int i;

    scanf("%s",s);
    scanf("%d",&i);

    printf("%c",s[i-1]); //�ε��� 0���ʹϱ� 

    return 0;
}
