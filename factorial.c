#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

    for(int i = 1; i<=T; i++){
        int n;
        scanf("%d",&n);
        unsigned long long factorial = 1;
        for(int j = 1; j<=n; j++){
                if(j>0){
                   factorial *=j;
                }

        }
        if(factorial != NULL){
           printf("%llu\n",factorial);
        }

    }
    return 0;
}
