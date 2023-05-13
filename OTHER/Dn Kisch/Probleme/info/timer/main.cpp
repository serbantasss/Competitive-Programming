#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char str[100];
int nr,i,n,j,b,a,c;
int main() {
    freopen("timer.in","r",stdin);
    freopen("timer.out","w",stdout);
    int l=0;
    scanf("%d:%d:%d\n",&a,&b,&c);
    gets(str);
    n=strlen(str);
    for(i=0; i<n; ++i) {
        if(str[i]==':')
            nr++;
    }
    if(nr==0) {
        for(i=0; i<=n-1;++i)
            l=l*10+(str[i]-'0');
        c+=l;
        if(c>=60) {
            b+=c/60;
            c=c%60;
        }
        if(b>=60) {
            a+=b/60;
            b=b%60;
        }
        if(a>=24)
            printf("%02d:%02d:%02d+%d",a%24,b,c,a/24);
        else
            printf("%02d:%02d:%02d",a,b,c);
    }
    if(nr==1) {
        for(i=0; i<=n-1;++i)
            if(str[i]==':')
            {
                b=b+l;
                l=0;
            } else
                l=l*10+(str[i]-'0');
        c+=l;
        l=0;
        for(j=i; j<=n-1; ++j) {
            l=l*10+(str[i]-'0');
        }
        if(c>=60) {
            b+=c/60;
            c=c%60;
        }
        if(b>=60) {
            a+=b/60;
            b=b%60;
        }
        if(a>=24)
            printf("%02d:%02d:%02d+%d",a%24,b,c,a/24);
        else
            printf("%02d:%02d:%02d",a,b,c);
    }
    if(nr==2)
    {
      i=0;
      for(i=0;i<=n-1;++i)
         if(str[i]==':')
           {
            j++;
            break;
            }
          else
             l=l*10+(str[i]-'0'),j++;
      a=a+l;
      l=0;i=0;
      while(j<=n-1)
          {
          if(str[i]==':')
             {i++;
              break;
             }
           else
              l=l*10+(str[j]-'0'),++i;
          j++;
          }
      b=b+l;
      l=0;
      i=j+1;
      while(i<=n-1)
          {
          if(str[i]==':')
             break;
           else
              l=l*10+(str[i]-'0');
          i++;
          }
      c=c+l;
      if(c>=60) {
            b+=c/60;
            c=c%60;
        }
        if(b>=60) {
            a+=b/60;
            b=b%60;
        }
        if(a>=24)
            printf("%02d:%02d:%02d+%d",a%24,b,c,a/24);
        else
            printf("%02d:%02d:%02d",a,b,c);
    }
    return 0;
}
