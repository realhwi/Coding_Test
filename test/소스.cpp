#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {
	
	char word[100];
	scanf("%s", word); // 입력된 문자열 

	int a[26]={0}; // 알파벳 배열 
	int max = 0; // 가장 많이 등장한 알파벳 빈도수 
	int len = strlen(word); // 문자열 길이 
	char result = '?'; // 최종 결과 출력 문자 

	//소문자 'a'=97, 대문자 'A' = 65
	for (int i = 0; i < len; i++) {
		// 소문자라면 	
		if (word[i]>='a') {
			a[word[i]-'a']++; 
			// word[i]에서 '97'을 빼서 몇번째 인덱스인지 구한뒤, 이 인덱스에 값 증가 
		}
		// 대문자라면 
		else {
			// word[i]에서 '65'를 빼서 몇번째 인덱스인지 구한뒤, 이 인덱스에 값 증가 
			a[word[i]-'A']++;
		}
	}

	//  a[i] 인덱스 순회해서 가장 많이 등장한 알파벳 찾기
	for (int i = 0; i < 26; i++) {
		if (a[i] == max) { // 변경된(?) max의 값과 a[i]의 값이 같을 경우
			result = '?';  // 중복되니까 ?를 출력 
		}
		else if (a[i] > max) {
			max = a[i]; // a[i]의 값을 max로 업데이트 
			result = 'A' + i; // 아스키로 변환해서 문자열 출력 
		}
	}

	// 최종 결과 출력
	printf("%c", result);

	return 0;
}