#include <stdio.h>
#include <string.h>

int change(char a){
	if(a=='A' || a=='B' || a=='C')
		return 2;
	else if(a=='D' || a=='E' || a=='F')
		return 3;
	else if(a=='G' || a=='H' || a=='I')
		return 4;
	else if(a=='J' || a=='K' || a=='L')
		return 5;
	else if(a=='M' || a=='N' || a=='O')
		return 6;
	else if(a=='P' || a=='Q' || a=='R' || a=='S')
		return 7;
	else if(a=='T' || a=='U' || a=='V')
		return 8;
	else if(a=='W' || a=='X' || a=='Y' || a=='Z')
		return 9;
}
int main() {
	int sum=0;
	char arr[16];
scanf("%s", arr);
	for(int i = 0; i <strlen(arr); i++)
		sum = sum + change(arr[i])+1;
printf("%d",sum);
}