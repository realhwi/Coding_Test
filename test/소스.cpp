#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

int main() {
    
    //100*100 도화지 
    int canvas[100][100]={0,};
    // 색종이 개수
    int n;

    scanf("%d",&n);

    // 색종이의 시작 좌표 입력 받아서 paper 배열에 표시
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);

        // 10x10 크기의 색종이를 해당 좌표에 표시
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                // 겹치는 부분을 고려해서 1로 표시 
                canvas[x + j][y + k] = 1;
            }
        }
    }

    // 도화지에 덮인 색종이 면적 계산
    int Area = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (canvas[i][j] == 1) {
                Area++;
            }
        }
    }

    printf("%d\n", Area);

    return 0;
}