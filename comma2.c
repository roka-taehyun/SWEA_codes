#include <stdio.h>

int main(void) {

 int i, j;

 for(i=0, j=1; j<=100, i< 5 ; i++, j*=2){
 	printf("%d %d \n",i,j);
 }

 

 return 0;
}

//C언어 강좌 037
// Comma(',') 를 식이나 값에서 사용하면 a = (b=3, 3) 그 괄호안의
// 식의 값은 오른쪽에 있는 값이 되지만, 그렇지 않은것들도 실행된다.(왼쪽도 실행됨)
// 다만 조건문에서는 오른쪽에 있는 값만 유효하게 된다.