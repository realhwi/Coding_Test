#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>

int main() {

    int arr[101] = { 0, }; // �ٱ��� �迭 �ʱ�ȭ 
    int n,m; // n�� �ٱ���,m�� ��� �ٲ� ������ Ƚ�� 
    scanf("%d %d",&n,&m);

    
    for (int i = 1; i <= n; i++) {
        arr[i]= i; // �ٱ��Ͽ� �� 1~n���� ä��� 
    }

    int r1,r2,swap;
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &r1, &r2);
        swap = arr[r1];
        arr[r1] = arr[r2];
        arr[r2] = swap; 
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}
