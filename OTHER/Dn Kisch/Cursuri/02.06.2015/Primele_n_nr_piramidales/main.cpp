#include <iostream>

using namespace std;

int main()
{
    int n=0,i=0;
    long long s=0;
    while(1)
   {
       i++;
       s=(long long)(i+1)*i/2;
        cout<<s<< " ";
       if(s<=0)
        {
        cout<<endl<<endl<<i-1<<endl;
        break;}
   }
    return 0;
}
