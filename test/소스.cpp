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
    char word[101];
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", word);

        int isGroup = 1;
        for (int k = 0; word[k] != '\0'; k++) {
            // 연속된 문자는 건너뜀
            if (k > 0 && word[k] == word[k - 1]) {
                continue;
            }

            // 이후에 같은 문자가 있는지 확인
            for (int j = k + 1; word[j] != '\0'; j++) {
                if (word[k] == word[j]) {
                    isGroup = 0;
                    break;
                }
            }
        }

        if (isGroup) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}