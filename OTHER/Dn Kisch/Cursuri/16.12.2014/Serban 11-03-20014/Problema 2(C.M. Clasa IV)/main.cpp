#include <iostream>

using namespace std;
int v[7];
int main()
{
    int i,copieI,r,p,n;
    r=p=n=0;
    i=1;
    cin>>v[i];// buburuzele rosii
    i++;
    cin>>v[i];
    i++;
    cin>>v[i];
    i++;
    cin>>v[i];// buburuzele portocalii
    i++;
    cin>>v[i];
    i++;
    cin>>v[i];//buburuza negra
    copieI=i;
    for(i=1;i<=copieI;i++)
      {
      if(v[i]%2==0 && i<=3)
		 r++;
      if(v[i]%2==0 && i>3 && i<=5)
         p++;
	  if(v[i]%2==0 && i>5)
	     n++;
      }
	cout<<"a) "<<r<<" rosii "<<p<<" portocalii "<<n<<" negre"<<"\n";
	cout<<"b) ";
	for(i=1;i<=copieI;i++)
	   {
	   if(v[i]%2==0)
	       cout<<"Casuta Numerelor Pare"<<"\n";
	   else
	       cout<<"Casuta Numerelor Impare"<<"\n";
	   }
    return 0;
}
