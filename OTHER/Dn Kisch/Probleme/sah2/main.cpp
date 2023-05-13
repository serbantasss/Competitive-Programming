#include<bits/stdc++.h>

using namespace std;

ifstream fin("sah2.in");
ofstream fout("sah2.out");

typedef struct
{
    int x, y, k;
} Cell;

int N, I1, J1, I2, J2;
int M[510][510][3];
int dx[5] = {-1,-1, 1, 1};
int dy[5] = {-1, 1, 1,-1};
int cx[9] = {-2,-2,-1, 1, 2, 2, 1,-1};
int cy[9] = {-1, 1, 2, 2, 1,-1,-2,-2};
char a[501][501];
queue<Cell> qq;

int main()
{
    int i, j, px, py, nr;
    Cell t;

    fin>>N>>I1>>J1>>I2>>J2;

    for(i=1; i<=N; i++)
        for(j=1; j<=N; j++)
            fin>>a[i][j];

    if((I1+J1)%2 == (I2+J2)%2) nr = 2;
    else nr = 1;

    t.x = I1;
    t.y = J1;
    t.k = 0;
    M[I1][J1][0] = 1;

    qq.push(t);

    while(!qq.empty())
    {
        t = qq.front();

        for(i=0; i<4; i++)
        {
            px = t.x + dx[i];
            py = t.y + dy[i];

            while(px>0 && px<=N && py>0 && py<=N && a[px][py]=='0')
            {
                if(M[px][py][t.k] == 0 || M[px][py][t.k] > 1 + M[t.x][t.y][t.k])
                {
                    M[px][py][t.k] = 1 + M[t.x][t.y][t.k];
                    Cell t2;
                    t2.x = px;
                    t2.y = py;
                    t2.k = t.k;
                    qq.push(t2);
                }

                px = px + dx[i];
                py = py + dy[i];
            }
        }

        if(t.k < 2)
            for(i=0; i<8; i++)
            {
                px = t.x + cx[i];
                py = t.y + cy[i];

                if(px>0 && px<=N && py>0 && py<=N && a[px][py]=='0')
                    if(M[px][py][t.k+1] == 0 || M[px][py][t.k+1] > 1+M[t.x][t.y][t.k])
                    {
                        M[px][py][t.k+1] = 1 + M[t.x][t.y][t.k];
                        Cell t2;
                        t2.x = px;
                        t2.y = py;
                        t2.k = t.k+1;
                        qq.push(t2);
                    }
            }

        qq.pop();
    }

    int minn = 1000000;
    for(int k=0; k<=2; k++)
        if(M[I2][J2][k] > 0 && M[I2][J2][k] < minn)
            minn = M[I2][J2][k];

    fout<<minn-1<<endl;

    return 0;
}
