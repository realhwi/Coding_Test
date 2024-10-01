#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>


int main() {

    int num1,num2;
    scanf("%d %d",&num1,&num2);

    // num%10은 마지막자리*100
    // num/10은 10의자리부터 남음, 여기서 한번 더 %10을 하면 두번째 자리만 남음. *10해서 두번째 자리 만들기 
    // num1 / 100은 마지막 자리만 남음 
    num1 = (num1%10)*100 + ((num1/10)%10)*10 + (num1/100);
    num2 = (num2 % 10) * 100 + ((num2 / 10) % 10) * 10 + (num2 / 100);

    if (num1 > num2) {
        printf("%d\n",num1);
    }
    else {
        printf("%d\n",num2);
    }
    return 0;
}
