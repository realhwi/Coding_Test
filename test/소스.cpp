#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {

    // 입력받은 문자에서 중복되는 알파벳이 없어야 그룹단어임 
    char word[101]; // 입력 문자 
    int n; // 문자 몇번 입력할건지 
    int count = 0; // 그룹단어 체크해서 출력할 문자
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", word);

        char a[26]={0}; // 알파벳으로 중복 체크 
        bool isGrop = true;

        for (int k = 0; word[k] != '\0'; k++) {  // word의 문자열 만큼 반복문 실행 
            if(k>0 && word[k]==word[k-1]){
                continue;// for문 루프에서 연속된 단어는 넘어가기
            }

            if (a[word[k] - 'a' == 1]) { // for 루프에서 문자 순서대로 인덱스에서 아스키값 빼줘서 인덱스 구하고 그 인덱스의 값이 1인적 있으면 루프 탈출 
                isGrop = false;
                break;
            }
            a[word[k]-'a']=1; // 현재 문자를 기록 

            if (isGrop) { // isGrop이 true 일때만 count 올리기 
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}