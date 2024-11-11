#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

int main() {

    int x[3],y[3]; //세개의 좌표를 입력받아 저장

    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    int x1,y1; // x,y 중 각 꼭지점 4개 {x,y} {x,y1} {x1,y} {x1,y1} 이런식의 짝 중 짝이 없는 것을 찾기 

    //x좌표 중 짝이 없는 것 x1에 넣기 
    if (x[0] == x[1]) {
        x1 = x[2];
    }
    else if (x[0] == x[2]) {
        x1 = x[1];
    }
    else {
        x1 = x[0];
    }

    //y좌표 중 짝이 없는 것 y1에 넣기 
    if (y[0] == y[1]) {
        y1 = y[2];
    }
    else if (y[0] == y[2]) {
        y1 = y[1];
    }
    else {
        y1 = y[0];
    }

    printf("%d %d",x1,y1);

    return 0;
}