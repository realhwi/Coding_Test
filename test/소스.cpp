#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {
    
   //단어 s 
   char s[100];
   scanf("%s", s);

   char w[26]; //알파벳 위치 저장 배열 

   // ASCII 코드 97(a)부터 122(z)까지 dd 배열에 저장
   for (int i = 0; i < 26; i++) {
       w[i] = -1; // -1로 초기화 
   }

   // s의 문자열 끝까지 반복 
   for (int i = 0; s[i] != '\0'; i++) {
       int index = s[i] - 'a'; 
       // 'a'=97(아스키코드)부터 시작하는 인덱스 구하기
       // 이 인덱스 번호에 i번을 업데이트 시켜야 몇번째에 몇번의 단어가 나왔는지 체크 할 수 있음 
       if (w[index] == -1) { // 해당 알파벳이 처음 등장하는 경우에만 저장
           w[index] = i; // index번에 몇번째에 알파벳이 나왔는지 값 업데이트 
       }
   }

   for (int i = 0; i < 26; i++) {
       printf("%d ", w[i]); // 업데이트된 w배열을 전체 출력하기 
   }
   
    return 0;
}
