#include<stdio.h>
int main()
{
int T;
scanf("%d",&T);
getchar();
for(int i = 1; i<=T; i++){
    char str[1001];
    gets(str);
    int count = 0;
    for(int j = 0; str[j] != NULL; j++){
        if(
           str[j]=='a'||
           str[j]=='A'||
           str[j]=='e'||
           str[j]=='E'||
           str[j]=='i'||
           str[j]=='I'||
           str[j]=='o'||
           str[j]=='O'||
           str[j]=='u'||
           str[j]=='U'
           ){
            count++;
           }
    }
    printf("Number of vowels = %d\n",count);
}

return 0;
}
