#include <stdio.h>
#define LMAX  1000
int next[LMAX+5];
int main()
{
    FILE *in,*out;
    in=fopen("josephus.in","r");
    out=fopen("josephus.out","w");
    int n,k,start,i,pos,prev,j;
    fscanf(in,"%d%d%d",&n,&k,&start);
    for(i=1; i<n; ++i)
        next[i]=i+1;
    next[n]=1;
    i=start;
    while(next[i]!=i)
    {
        pos=i;
        prev=pos;
        for(j=1; j<k; ++j)
        {
            prev=pos;
            pos=next[prev];
        }
        next[prev]=next[pos];
        i=next[pos];
        fprintf(out,"%d ",pos);
    }
    fprintf(out,"%d",i);
    return 0;
}
