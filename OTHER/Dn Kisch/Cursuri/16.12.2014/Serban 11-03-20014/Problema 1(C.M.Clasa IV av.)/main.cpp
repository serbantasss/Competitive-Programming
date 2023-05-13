#include <iostream>

using namespace std;

int main()
{
    int fl,fr,le;
    cin>>fl>>fr>>le;
    if(fl>fr && fl>le && le>fr)
        cout<<"flori fructe legume";
	if(fl>fr && fl>le && le<fr)
	    cout<<"flori legume fructe";
	if(fr>fl && fr>fl && fl>le)
	   cout<<"fructe flori legume";
	if(fr>fl && fr>le && fl<le)
	    cout<<"fructe flori legume";
	if(le>fl && le>fr && fr>fl)
	   cout<<"legume fructe flori";
	if(le>fl && le>fr && fr<fl)
	   cout<<"legume fructe flori";
    return 0;
}
