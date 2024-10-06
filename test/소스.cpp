#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {
	char a[100];
	scanf("%s", a);

	int len = strlen(a);

	for (int i = 0; i < len/2; i++) {
		if (a[i] != a[len-i-1]) { // 문자열 중앙부터 양 문자열 같은지 점검 
			printf("0");
			return 0; //즉시 종료 
		}
	}
	printf("1");

	return 0;
}