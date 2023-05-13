#include <cstdio>

using namespace std;
int v[10] ;
int main ()
{
    freopen("numere.in","r",stdin);
    freopen("numere.out","w",stdout);
    int n , i , c , x;
    scanf ( "%d" , &n );
    for( i = 1 ; i <= n; ++i )
      {
          scanf ( "%d" , &x );
          c = 9;
          do
          {
              if ( c > x%10 )
                c = x % 10;
              x = x / 10;
          }while( x );
          v[c] = 1 ;
          printf ( "%d " , c );
      }
    printf ( "\n" );
    if( v[0] )
        {
            i = 1;
            while ( i <= 9 && v[i] == 0 )
              ++i;
            if ( i <= 9 )
              {
                  printf ( "%d" , i );
                  v[i] = 0;
              }
        }
    for ( i = 0 ; i <= 9 ; ++i )
      if ( v[i] )
         printf ( "%d" , i );
    fclose ( stdin ) ;
    fclose ( stdout ) ;
    return 0;
}
