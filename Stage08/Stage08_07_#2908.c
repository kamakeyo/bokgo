#include <stdio.h>
#include <string.h>

int main() {
	int num1, num2, new_num1=0, new_num2=0;
   	scanf("%d %d", &num1, &num2);
	
	new_num1 =  (num1%10)*100 + ((num1/10)%10 *10) + (num1/100);
	
	new_num2 =  (num2%10)*100 + ((num2/10)%10 *10) + (num2/100);
	if(new_num1>new_num2)
		printf("%d", new_num1);
	else
		printf("%d", new_num2);
	}