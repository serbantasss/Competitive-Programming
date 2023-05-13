#include <cstdio>

using namespace std;
int cmmdc(int a, int b)
{
    int r;
    while (b)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main ()
{
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    long a, b;
    while (scanf ("%ld %ld", &a, &b) != EOF)
    {
        if (cmmdc(a,b) ==1)
            printf("%10ld%10ld    %s\n\n", a, b, "Good Choice");
        else
            printf("%10ld%10ld    %s\n\n", a, b, "Bad Choice");
    }
    return 0;
}
