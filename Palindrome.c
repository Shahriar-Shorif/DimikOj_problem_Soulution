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
        for(int j = 0; j<=len; j++){
            if(str[j]==str[len-j-1]){
                flag = 0;
            }else{
                flag = 1;
                break;
            }
        }
        if(flag){
            printf("Sorry! It is not palindrome!\n");
        }else{
            printf("Yes! It is palindrome\n");
        }
    }
    return 0;
}
