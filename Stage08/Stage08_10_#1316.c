#include <stdio.h>
#include <string.h>
int Check(char* str)
{
    int i,num;
	char arr[26]= {0,};
    for(i=0;i<strlen(str);i++){
        num = str[i]-97;
        if(arr[num]==0)
            arr[num]++;
        else if(str[i]==str[i-1])
            continue;
        else
            return 0;
    }
    return 1;
}
int main()
{
    int n,i;
    int count=0;
    char str[101];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",str);
        count = count + Check(str);
    }
    printf("%d",count);
}

