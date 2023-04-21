#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    getchar();
    for(int i = 1; i<=T; i++){
        char str[101];
        gets(str);
        int j = 0;
        int num=0;
        while(str[j]!='\0'){
            if(str[j]>='A' && str[j]<='Z'){
               num = str[j]-'A'+1;
            }
            printf("%d",num);
            j++;
        }

        printf("\n");
    }
    return 0;
}
