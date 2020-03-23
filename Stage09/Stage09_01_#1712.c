#include <stdio.h>

int main(void){
	int cost, price, sell, num=0;
		scanf("%d %d %d", &cost, &price, &sell);
		if(price >= sell)
			printf("-1");
		else			
				printf("%d", cost/(sell-price)+1);
				
}
