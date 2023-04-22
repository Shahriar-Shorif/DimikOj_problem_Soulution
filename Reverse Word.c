#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    getchar();
    for(int i = 1; i<=T; i++){
        char str[1001];
        gets(str);
        int flag = 0;
        int len = strlen(str);
        for(int j = len - 1; j>= 0; j--){
            printf("%c", str[j]);
        }
        printf("\n");


    }
    return 0;
}
