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

    // 이중 반복문에서 i~n-1까지, i+1부터 n까지 반복됨, 수행 횟수 = n * (n-1) / 2
    printf("%lld\n", (n * (n - 1)) / 2);

    // O(n^2)의 시간 복잡도, 최고 차항은 2
    printf("2\n");

    return 0;
}
