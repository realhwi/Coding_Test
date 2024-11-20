#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  

    printf("%d\n",n);  // 코드 1의 수행 횟수 
    printf("1\n");  // 시간 복잡도는 o(n) = 최고차항 1

    return 0;
}
