#include <bits/stdc++.h>

int main()
{
    int a;
    int64_t b;
    char c;
    float d;
    double e;
    scanf("%d%lld %c%f%lf",&a,&b,&c,&d,&e); //somehow space before %c kills all white spaces inputed in c
    printf("%d\n%lld\n%c\n%f\n%lf",a,b,c,d,e);
}