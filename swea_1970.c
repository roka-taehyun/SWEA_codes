#include <stdio.h>

// SWEA_1970 쉬운 거스름돈

// 루프를 돌면서 마이너스 해주는 방법도 있으나
// 나눈다음 그 나온 몫 만큼 현재 금액에 곱하여 전체 금액에서 빼주는 방법이 더 효율적이다.

int main(void) {
	int N;
	scanf("%d",&N);
	for(int i = 0 ; i<N ; i++){
		int arr[8] = {0,};
		int inp;
		scanf("%d",&inp);
		while(1){
			if(inp == 0){ // ** break문을 맨처음에 걸지 않으면 inp == 0 일때는 나머지값이 항상 0 이므로 무한 루프에 빠진다!! ** //
				break;	
			}
			if(inp % 50000 == 0){
				inp = inp - 50000;
				arr[0]++;
				continue;
			}
			else if(inp % 10000 == 0){
				inp = inp - 10000;
				arr[1]++;
				continue;
			}
			else if(inp % 5000 == 0){
				inp = inp - 5000;
				arr[2]++;
				continue;
			}
			else if(inp % 1000 == 0){
				inp = inp - 1000;
				arr[3]++;
				continue;
			}
			else if(inp % 500 == 0){
				inp = inp - 500;
				arr[4]++;
				continue;
			}
			else if(inp % 100 == 0){
				inp = inp - 100;
				arr[5]++;
				continue;
			}
			else if(inp % 50 == 0){
				inp = inp - 50;
				arr[6]++;
				continue;
			}
			else if(inp % 10 == 0){
				inp = inp - 10;
				arr[7]++;
				continue;
			}
		}
		printf("#%d\n",i+1);
		for(int j = 0 ; j < 8 ; j++){
			printf("%d ",arr[j]);
		}
		printf("\n");
	}
	return 0;
}
