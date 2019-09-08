#include <stdio.h>

int main(void) {

 int n=1;

Loop_Start:
 if(n>100) goto Loop_End;
 n*=2;
 goto Loop_Start;
Loop_End:

 return 0;
}
//038 기계어와 어셈블리어 수준에서의 반복문

