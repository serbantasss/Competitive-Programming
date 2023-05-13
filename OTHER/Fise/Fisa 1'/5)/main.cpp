#include <cstdio>
bool Valid(int x[100],int l)
{
	for(int i=0;i<l;i++)
	  for(int j=i+1;j<l;j++)
		if(x[i]==x[j])
		  return 0;
	return 1;
}
void Citire(int x[100],int n)
{
	do
	{
	     printf("Introduceti elementele tabloului:\n");
	     for(int i=0;i<n;i++)
		     scanf("%d",&x[i]);
	} while (!Valid(x,n));
}

void Afisare(int x[100],int n)
{
	if(n==0)
        printf("MULTIMEA VIDA\n");
    else{
	printf("\nElementele tabloului sunt: \n");
	for(int i=0;i<n;i++)
		printf("%d ",x[i]);
		}
}

void Ordonare(int x[100],int l)
{
	for(int i=0;i<l;i++)
		for(int j=i;j<l;j++)
			if (x[i]>x[j])
				x[i]=x[j]+x[i]-(x[j]=x[i]);
}

void Reuniune(int x[100],int y[100],int l1,int l2,int z[100],int &t)
{
     int i=0,j=0,k=0,ok=0;
     for(i=0;i<l1;i++)
      z[i]=x[i];
     k=i;
     for(i=0;i<l2;i++)
      {
	for(j=0;j<k;j++)
	 if(z[j]==y[i])
	  {
		ok=1;
		break;
	  }
	 else
	  ok=0;
	 if(!ok)
	  z[k++]=y[i];
      }
     Ordonare(z,k);   // Le ordonam.
     t=k;	      // Dimensiunea noului vector.
}
void Intersectie(int x[100],int y[100],int z[100],int l1,int l2,int& p)
{
	int i,j;
	p=-1;
	for(i=0;i<l1;i++)
		for(j=0;j<l2;j++)
			if(x[i]==y[j])
			  z[++p]=x[i];
}
void Diferenta(int x[100],int y[100],int z[100],int l1,int l2,int &p)
{
    int i,j;
    p=-1;
    for(i=0;i<l1;i++)
		{
		    bool sw=true;
        for(j=0;j<l2;j++)
			if(x[i]==y[j])
			  {sw=false;break;}
       if(sw==true)
          z[++p]=x[i];
		}
}
int main()
{
	int a[100],b[100],c[100],n,m,t,p;
	for(int i=0;i<100;i++)
		c[i]=0;
	printf("Dimensiunea primului vector:");
	scanf("%d",&n);
	Citire(a,n);
	printf("Dimensiunea celui de-al doilea vector:");
	scanf("%d",&m);
	Citire(b,m);

	/// Oordonam crescator vectorii pentru o usuara modelare.
	Ordonare(a,n);
	Ordonare(b,m);
	/// Reuniunea vectorilor.
	Reuniune(a,b,n,m,c,t);
	printf("\n\nREUNIUNEA:");
	Afisare(c,t);
	///Intersectia.
	Intersectie(a,b,c,n,m,p);
	printf("\n\nINTERSECTIA:");
	Afisare(c,p+1);
	///Diferenta A-B
	p=0;
	Diferenta(a,b,c,n,m,p);
	printf("\n\nDIFERENTA A-B:");
	Afisare(c,p+1);
	p=0;
	///Diferenta B-A
	Diferenta(b,a,c,n,m,p);
	printf("\n\nDIFERENTA B-A:");
	Afisare(c,p+1);
	p=0;
	return 0;
}
