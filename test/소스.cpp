#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {

	char c[8][8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" }; // 두 번째 차원의 크기를 지정
	char word[100]={0};
	scanf("%s",word);

	int count = 0;
	for (int i = 0; i < word[i]!='0'; i++) {
		for (int k = 0; k < 8; k++) {
			int len = strlen(c[k]);// 패턴의 길이 
			if (strncmp(&word[i], c[k], len) == 0) { // len길이만큼 문자열 word[i]와 c[k]를 비교 
				i += len - 1; // 패턴 길이만큼 인덱스 건너뛰기, 한 글자 검사했으므로 한칸 덜 이동 
				break;
			}
		}
		count++; // 조건 만족하지 않으면 알파벳 하나당 글자 1개로, 만족한 조건은 패턴 길이만큼 크로아티아 문자로 
	}

	printf("%d",count);

	return 0;
}