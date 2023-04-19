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
        char vowel[1001];
        char consonent[1001];
        int v = 0;
        int c = 0;

        for(int j = 0; str[j] != '\0'; j++){
                if(str[j]==' '){
                    continue;
                }
            if(str[j]>='a' && str[j]<='z' || str[j]>='A' && str[j]<='Z'){
                if(str[j]=='a'||
               str[j]=='A'||
               str[j]=='e'||
               str[j]=='E'||
               str[j]=='i'||
               str[j]=='I'||
               str[j]=='o'||
               str[j]=='O'||
               str[j]=='u'||
               str[j]=='U'
                   )
                   {
                    vowel[v]=str[j];
                    v++;
                   }else{
                    consonent[c]=str[j];
                    c++;
                   }
            }
        }

        vowel[v]=NULL;
        consonent[c]=NULL;
        printf("%s\n",vowel);
        printf("%s\n",consonent);
    }

    return 0;
}
