#include <stdio.h>
#include <string.h>
int main(){
	char arr[101]; 
    int alpha[26]; 
    scanf("%s", arr);
    for (int i = 0; i < 26; i++){
        alpha[i] = -1;
    }
    for (int j = 0; j < strlen(arr); j++){
        if (alpha[arr[j] - 97] == -1){
            alpha[arr[j] - 97] = j;
        }
    }
    for (int k = 0; k < 26; k++)
        printf("%d ", alpha[k]);
}




