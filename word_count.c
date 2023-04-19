#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    getchar();
    for(int i = 1; i<=T; i++){
        char str[10000];
        gets(str);
        int count = 0;
        for(int j = 0; str[j] != '\0';j++){
            if(str[j] == ' ' && str[j+1] != ' '){
                count++;
            }
        }
        printf("Count = %d\n",count+1);

    }
    return 0;
}
