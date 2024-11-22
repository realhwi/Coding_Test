#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdio.h>

int main() {
    long long n; //제곱수 int자료형(4바이트)이 아닌 longlong으로 (8바이트)

    scanf("%lld", &n); //ll형식 지정자 사용해 입력받기 


    printf("%d\n",n*n);  // 코드 1의 수행 횟수 
    printf("2\n");  // 시간 복잡도는 o(n제곱) = 최고차항 

    return 0;
}
