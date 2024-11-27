#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdio.h>

int main() {
    long long n; 

    scanf("%lld", &n);

    // 3개의 수, 3! 으로 중복 제거 
    // 수행 횟수는 (n-2)*(n-1)*n/6
    printf("%lld\n", (n * (n - 1) * (n - 2)) / 6);

    // 3중 반복문 최고차항 :  O(n^3) 
    printf("3\n");

    return 0;
}