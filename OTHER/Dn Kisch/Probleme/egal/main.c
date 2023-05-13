#include <stdio.h>
#include <stdlib.h>
long long  v[200000],N,i,max=0,op=0;
int main()
{
    FILE*in,*out;
    in=fopen("egal.in","r");
    out= fopen("egal.out","w");
    fscanf(in,"%d",&N);
    fscanf(in,"%d",&v[1]);
    max=v[1];op=0;
    for(i=2;i<=N;++i)
        {
        fscanf(in,"%d",&v[i]);
        if(v[i]>v[i-1])
           op=op+v[i]-v[i-1];
         if(v[i]>max)
            max=v[i];
        }
    if(v[N]<max)
        op+=max-v[N];
    fprintf(out,"%lld",op);
    return 0;
}
