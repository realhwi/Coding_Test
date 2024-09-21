#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>

int main() {

    // ���� ���� n, ���� �迭 m, �ִ����� max
    int n,max=0;
    scanf("%d",&n);

    // ���� �迭 
    int* m = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &m[i]);
        if (m[i] > max) {
            max = m[i];
        }
    }

    // ��� �� avg 
    float avg =0;
    for (int i = 0; i < n; i++) {
        // �迭 ��ȸ�ϸ鼭 avg�� ���� �� ��� �� ��ȸ�Ҷ����� ���ϱ� 
        avg += (float)m[i] / max * 100;
    }

    printf("%f\n",avg/n);

    return 0;
}
