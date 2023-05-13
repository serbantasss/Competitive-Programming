#include <bits/stdc++.h>
using namespace std;
int n, m, q;
int a[1005][1005];
int rasp[100005];
int column_height[1005], which_column[1005], actual_pos[1005];
vector< pair<int, int> > pos, queries;
void Swap(int poza, int pozb)
{
    swap(column_height[poza], column_height[pozb]);
    swap(actual_pos[which_column[poza]], actual_pos[which_column[pozb]]);
    swap(which_column[poza], which_column[pozb]);
}
void Prep()
{
    for (int i = 1; i <= m; i++)
    {
        column_height[i] = 0;
        which_column[i] = actual_pos[i] = i;
    }

    int i = 0, j = 0;
    int mx = 0;
    while (i < pos.size() && j < queries.size())
    {
        pair<int, int> x = pos[i];
        pair<int, int> y = queries[j];

        if (a[x.first][x.second] <= y.first)
        {
            // binary search
            int st = 1, dr = actual_pos[x.second], ans = actual_pos[x.second];
            while (st <= dr)
            {
                int mij = (st + dr) / 2;
                if (column_height[mij] == column_height[actual_pos[x.second]])
                {
                    ans = mij;
                    dr = mij - 1;
                }
                else st = mij + 1;
            }

            Swap(actual_pos[x.second], ans);

            // add to the column
            column_height[actual_pos[x.second]]++;

            mx = max(mx, actual_pos[x.second] * column_height[actual_pos[x.second]]);

            i++;
        }
        else
        {
            rasp[y.second] = mx;
            j++;
        }
    }

    while (j < queries.size())
    {
        rasp[queries[j].second] = mx;
        j++;
    }
}

bool cmp(pair<int, int> A, pair<int, int> B)
{
    return a[A.first][A.second] < a[B.first][B.second];
}

int main()
{
    freopen("rosiimici.in", "r", stdin);
    freopen("rosiimici.out", "w", stdout);
    cin.sync_with_stdio(false);

    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            pos.push_back(make_pair(i, j));
        }

    for (int i = 1; i <= q; i++)
    {
        int x;
        cin >> x;
        queries.push_back(make_pair(x, i));
    }

    sort(queries.begin(), queries.end());
    sort(pos.begin(), pos.end(), cmp);

    Prep();

    for (int i = 1; i <= q; i++)
        cout << rasp[i] << "\n";
    return 0;
}
