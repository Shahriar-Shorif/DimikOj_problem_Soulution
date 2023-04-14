#include<stdio.h>
#include<string.h>
int main()
{

int T;
scanf("%d",&T);
getchar();
for(int i = 1; i<=T; i++){
    char str[100001];
    gets(str);
    char *stock = strtok(str," ");
    int count = 0;
    for(;stock != NULL;){
        stock = strtok(NULL," ");
        count++;
    }
    printf("%d\n",count);
}
    return 0;
}
