#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

int v[205][205], a[205][205];
int N;
int dx[] = {-1, 0, 1, 0},
    dy[] = {0 , 1, 0, -1};

struct REKT {
    int x, y;
};

queue <REKT> q;

bool ok(int L) {
    int n;
    n = N - L + 1;
    memset(a, 0, sizeof(a));
    for(int i = 1; i <= n; ++ i) {
        for(int j = 1; j <= n; ++ j) {
            if(v[i - 1][j - 1] + v[i + L -1][j + L - 1] - v[i - 1][j + L - 1] - v[i + L - 1][j - 1]== 0)
                a[i][j] = -1;
        }
    }
    while(!q.empty())
        q.pop();
    REKT aux, temp;

    for(int j = 1; j <= n; ++ j) {
        if(a[1][j] == -1){
        a[1][j] = 1;
        aux.x = 1;
        aux.y = j;
        q.push(aux);
        }
    }
    while(!q.empty()) {
        temp = q.front();
        int nx, ny;
        for(int k = 0; k < 4; ++ k) {
            nx = temp.x + dx[k];
            ny = temp.y + dy[k];
            if(a[nx][ny] == -1) {
                aux.x = nx;
                aux.y = ny;
                q.push(aux);
            }
        }

        a[temp.x][temp.y] = 1;
        q.pop();
    }
    for(int j = 1; j <= n; ++ j) {
        if(a[n][j] > 0)
            return 1;
    }
    return 0;
}

int bin(int st, int dr) {
    int last = 0, med;

    while(st <= dr) {
        med = (st + dr) / 2;
        if(ok(med)) {
            last = med;
            st = med + 1;
        } else {
            dr = med - 1;
        }
    }

    return last;
}

int main() {
    freopen("patrat.in", "r", stdin);
    freopen("patrat.out", "w", stdout);

    int rasp;
    scanf("%d", &N);

    for(int i = 1; i <= N; ++ i) {
        for(int j = 1; j <= N; ++ j) {
            scanf("%d", &v[i][j]);
        }
    }

    for(int i = 1; i <= N; ++ i) {
        for(int j = 1; j <= N; ++ j) {
            v[i][j] = v[i][j - 1] + v[i - 1][j] - v[i - 1][j - 1] + v[i][j];
        }
    }

    rasp = bin(1, N);

    printf("%d", rasp);

    return 0;
}
