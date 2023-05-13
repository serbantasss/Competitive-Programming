#include <iostream>

using namespace std;
int v[5],c[5];
int main()
{
    int i,nr;
    nr=0;
    for(i=1;i<=4;i++)
       	cin>>v[i]>>c[i];
	cout<<"a) ";
	for(i=1;i<=4;i++)
	   if(v[i]/1000%10==c[i])
	     {
	     	cout<<"Usa "<<i<<"\n";
	     	nr++;
	     }
	cout<<"b) "<<nr;
	cout.CloseDesktop();
    return 0;
}
