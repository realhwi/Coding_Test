#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   int room =1, i=1;

   if (n == 1) {
       printf("%d\n",1);
       return 0;
   }

   while (i<n)
   {
        i+=6*room;
        room++;
   }
   printf("%d\n",room);

    return 0;
}