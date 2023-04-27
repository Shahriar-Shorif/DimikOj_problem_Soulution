#include<stdio.h>
#include<math.h>
int main()

{
    int T;
    scanf("%d",&T);
    for(int i = 1; i<=T; i++){
        double a,b,c,s;
        scanf("%lf %lf %lf",&a,&b,&c);
        s = (a+b+c)/2;
        s = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area = %0.3lf\n",s);
    }
    return 0;
}
