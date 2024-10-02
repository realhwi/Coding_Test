#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {
    
    char word[16];
    scanf("%s", word);
    
    int len = strlen(word);
    int time = 0;

    for (int i = 0; i < len; i++) {
        if (word[i] >= 'A' && word[i] <= 'C') {
            time +=3;
        }
        else if (word[i] >= 'D' && word[i] <= 'F') {
            time +=4;
        }
        else if (word[i] >= 'G' && word[i] <= 'I') {
            time += 5;
        }
        else if (word[i] >= 'J' && word[i] <= 'L') {
            time += 6;
        }
        else if (word[i] >= 'M' && word[i] <= 'O') {
            time += 7;
        }
        else if (word[i] >= 'P' && word[i] <= 'S') {
            time += 8;
        }
        else if (word[i] >= 'T' && word[i] <= 'V') {
            time += 9;
        }
        else if (word[i] >= 'W' && word[i] <= 'Z') {
            time += 10;
        }
    }
    
    printf("%d",time);


    return 0;
}
