#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>

int main() {

    // �ܾ� ���� ��� ��üũ�� �ϱ�
    char input[100] = { 0 };
    scanf("%s", input); 

    int count = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        count++;
    }
    printf("%d\n", count);


    // �ܾ���� ��� string �������� ����ϴ� �� Ȱ���ϱ� 
    char input1[100];
    scanf("%s", input1);

    printf("%d",strlen(input1));

    return 0;

}
