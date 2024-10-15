#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {

    int A[9][9]; // 입력받을 2차원 배열 
    int max=0; // 최대값 
    int x=-1,y=-1; //행과 열 

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &A[i][j]);
            if (A[i][j] > max) {
                max = A[i][j];
                x = i+1;
                y = j+1;
            }
        }
    }
   printf("%d\n",max);
   printf("%d %d\n",x,y);

    return 0;
}