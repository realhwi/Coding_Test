#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

int main() {
    
    // 홀수는 분모가 1.2.3.4.. 커짐, 분자는 역순
    // 짝수는 분자가 1.2.3.4.. 커짐, 분모는 역순 
    // 입력받은 수가 대각선의 몇번째인지 대각선을 1씩 늘리면서, 입력받은 값을 대각선 길이만큼 빼주면 됨 
    // 대각선 숫자가 최대 분자 or 분모 수니까 d가 짝수인지 홀수인지 확인하면 입력 받은 숫자의 분자나 분모가 확인가능 

    int x; // 입력 받은 수 (분수 몇번째인지)
    scanf("%d",&x);

    int d; // 대각선 
    for (d = 1; x > d; d++) { // x의 숫자만큼 대각선이 몇번째에 속하는지 구하기 
        x-=d;
        // d 대각선 수에서 x가 몇번째에 속하는지 구하기 (홀수인지, 짝수인지)
    }

    int n,N; // n은 분자, N은 분모 
    if (d % 2 == 0) { // 대각선이 짝수라면
        n=x; // 분자가 남은 x의 개수 
        N=d-x+1; // 분모는 대각선 길이 - 남은 입력수 + 1(1부터 시작)
    }
    else { // 대각선이 홀수라면 짝수랑 반대 
        n=d-x+1;
        N=x;
    }
    printf("%d/%d\n",n,N);

    return 0;
}