# include<iostream>
using namespace std;
long fibNRec (long n)
{
    if (n<2)
        return n;
    return fibNRec(n-1) + fibNRec(n-2);
}

int main()
{
    long n,s,i,nCopie;
    cin>>n;
    nCopie=n;
    while (n>0)
    {
        i=0;
        s=0;
        while (s<n)
        {
            i++;
            s  =fibNRec(i);
        }
        if (s==n)
        {
            if (n==nCopie)
            {
                cout<<fibNRec(i-1)<<" "<<fibNRec(i-2);
                n=0;
            }
            else
            {
                cout<<fibNRec(i);
                n=0;
            }

        }
        else
        {
            cout<< (s=fibNRec(i-1)) <<" ";
            n=n-s;
        }
    }
    return 0;
}
