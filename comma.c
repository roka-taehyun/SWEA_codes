#include <stdio.h>

int main(void) {

 int i, j;

 for(i=0, j=1; j<=100; i++, j*=2);

 printf("2의 %d승은 %d이며 최초로 100을 넘습니다.\n", i, j);

 return 0;
}

//C언어 강좌 037