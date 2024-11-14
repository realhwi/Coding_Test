#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>

int main() {
    
    int n[3]={0};
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%d", &n[i]);
        sum+=n[i];
    }

    if (sum != 180) {
        printf("Error\n");
    }
    else if (n[0] == 60 && n[1] == 60 && n[2] == 60) {
        printf("Equilateral\n");
    }
    else if (n[0] == n[1] || n[1] == n[2] || n[0] == n[2]) {
        printf("Isosceles\n");
    }
    else {
        printf("Scalene\n");
    }

    return 0;
}