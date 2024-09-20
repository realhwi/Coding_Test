#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>

int main() {

    int arr[101] = { 0, }; // 바구니 배열 초기화 
    int n,m; // n은 바구니,m은 몇번 바꿀 것인지 횟수 
    scanf("%d %d",&n,&m);

    
    for (int i = 1; i <= n; i++) {
        arr[i]= i; // 바구니에 공 1~n까지 채우기 
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
