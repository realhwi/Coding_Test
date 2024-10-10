#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {

   // 과목명, 학점, 과목평점  
   // 전공 평점 = 총(학점 × 과목평점)의 합 / 총 학점
   // F는 과목평점만 0점, P는 학점에서 제외됨 

   char sub[100]={0}; //과목명
   float credit; //점수
   char grade[3]; //등급 

   float totalScore=0.0; // 평가 점수 
   float totalCredit=0.0; // 총 학점 

   for (int i = 0; i < 20; i++) {
       scanf("%s %f %s",sub,&credit,grade);

       float score=0.0; // 전공 평가 점수 

       // 등급에 따른 과목 평점 설정
        if (strcmp(grade, "A+") == 0) {
            score = 4.5;
        }
        else if (strcmp(grade, "A0") == 0) {
            score = 4.0;
        }
        else if (strcmp(grade, "B+") == 0) {
            score = 3.5;
        }
        else if (strcmp(grade, "B0") == 0) {
            score = 3.0;
        }
        else if (strcmp(grade, "C+") == 0) {
            score = 2.5;
        }
        else if (strcmp(grade, "C0") == 0) {
            score = 2.0;
        }
        else if (strcmp(grade, "D+") == 0) {
            score = 1.5;
        }
        else if (strcmp(grade, "D0") == 0) {
            score = 1.0;
        }
        else if (strcmp(grade, "F") == 0) {
            score = 0.0;
        }
        else if (strcmp(grade, "P") == 0) {
            // P 과목은 평점 계산에 포함하지 않음
            continue;
        }
        // 총 (학점 * 과목평점)의 합 계산 
        totalScore += credit * score;
        // 학점 누적 = 총 학점 
        totalCredit += credit;
   }

   printf("%f", totalScore / totalCredit);

    return 0;
}