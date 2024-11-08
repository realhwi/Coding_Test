#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

int main() {

    int x,y,w,h;
    scanf("%d %d %d %d",&x,&y,&w,&h);

    // 각 경계선까지의 거리 계산
    int left = x;       // 왼쪽 경계선까지의 거리
    int right = w - x;  // 오른쪽 경계선까지의 거리
    int bottom = y;     // 아래쪽 경계선까지의 거리
    int top = h - y;    // 위쪽 경계선까지의 거리

    // 최소 거리 계산
    int min = left;
    if (right < min) min = right;
    if (bottom < min) min = bottom;
    if (top < min) min = top;

    printf("%d\n", min);

    return 0;
}