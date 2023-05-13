#include <fstream>

using namespace std;
int sec,p;
bool alb(int a) {
    if(a/p%2==1 || a%p==0)
        return 1;
    return 0;
}
int main() {
    ifstream in("melci.in");
    ofstream out("melci.out");
    int n,da,dm,sta,stm;
    in>>n>>p;
    dm=0,da=(n*2+1)*p;
    sta=stm=0;
    sec=0;
    while(dm<da)
    {
        if(sta==0)
        {
            da-=2;
            if(alb(da))
                sta=1;
        }
        else
            sta=0;
        if(stm==0)
        {
            dm+=3;
            if(!alb(dm))
                stm=1;
        }
        else
          if(stm==1)
            stm=2;
          else
            stm=0;
      sec++;
    }
    out<<sec;
    return 0;
}
