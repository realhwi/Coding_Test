#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {

    int A[100][100], B[100][100];

   // 행렬 열과 행? 
   int n,m;

   scanf("%d %d",&n,&m);

   // 행렬 A 입력 받기
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
           scanf("%d", &A[i][j]);
       }
   }

   // 행렬 B 입력 받기
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
           scanf("%d", &B[i][j]);
       }
   }

   // 결과 행렬 A+B를 출력
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
           int sum = A[i][j]+B[i][j];
           printf("%d ", sum);
       }
       printf("\n");
   }

    return 0;
}