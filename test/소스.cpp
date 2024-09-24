#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {
    
    int n;//몇번 입력할지
    char input[100];

    scanf("%d",&n);


    while (n>0) // 여기서 n--해도됨, n번까지 반복 
    {
        scanf("%s",input); // 입력받은 문자열을 배열 input에 저장 

        printf("%c%c\n",input[0],input[strlen(input)-1]); // 마지막 null까지 구하는 것이 strlen인데, -1 해주면 마지막 문자 출력됨  
        n--; //n감소 
    }
    
    return 0;
}
