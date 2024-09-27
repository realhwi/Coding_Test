#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {
    
    int n; // 총 몇번 할건지 
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        int M; // 반복할 횟수 
        char s[100]; // 입력받을 문자 

        scanf("%d %s", &M, s);
        
        int len = strlen(s); //문자열 길이 

        //문자열 끝까지 반복 
        for (int j = 0; j < len; j++) {
            // s의 j인덱스를 M번 반복해서 출력 
            for (int k = 0; k < M; k++) {
                printf("%c", s[j]);
            }
        }
        printf("\n"); 
    }

    return 0;
}
