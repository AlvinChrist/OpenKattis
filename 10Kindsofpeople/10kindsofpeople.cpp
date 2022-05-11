#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int mp[1005][1005];
int vis[2][1005][1005] = {};

void bfs(pair<int, int> start, pair<int, int> end, int counter)
{
  queue<vector<pair<int, int>>> q;
  vector<pair<int, int>> v;
  v.push_back(start);
  q.push(v);
  int type = mp[start.first][start.second];
  int a = vis[type][start.first][start.second];
  int b = vis[type][end.first][end.second];
  if (a == b && (a + b) != 0)
  {
    if (type == 1)
      cout << "decimal\n";
    else
      cout << "binary\n";
    return;
  }

  while (q.size() > 0)
  {
    vector<pair<int, int>> front = q.front();
    q.pop();
    for (int i = 0; i < front.size(); ++i)
    {
      if (front[i].first == end.first && front[i].second == end.second)
      {
        if (type == 1)
          cout << "decimal\n";
        else
          cout << "binary\n";
        return;
      }
      else
      {
        vector<pair<int, int>> nextMove;
        for (int j = 0; j < 4; ++j)
        {
          int px = front[i].first + dx[j];
          int py = front[i].second + dy[j];
          pair<int, int> next(px, py);
          if (px < 0 || px >= n || py < 0 || py >= m || mp[px][py] != type || (vis[type][px][py] != 0 && vis[type][px][py] != a && vis[type][px][py] == counter))
          {
            continue;
          }
          // cout << front[i].first << ' ' << front[i].second << '|'  << px << ' ' << py << '\n';
          vis[type][px][py] = counter;
          nextMove.push_back(next);
        }
        q.push(nextMove);
      }
    }
  }
  cout << "neither\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> m;
  pair<int, int> start;
  pair<int, int> end;
  for (int i = 0; i < n; ++i)
  {
    string s;
    cin >> s;
    for (int j = 0; j < s.size(); ++j)
    {
      int tmp = s[j] - '0';
      mp[i][j] = tmp;
    }
  }
  int t;
  cin >> t;
  int counter = 1;
  while (t--)
  {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1--;
    x2--;
    y1--;
    y2--;
    start = pair<int, int>(x1, y1);
    end = pair<int, int>(x2, y2);
    if (mp[start.first][start.second] != mp[end.first][end.second])
    {
      cout << "neither\n";
      continue;
    }
    bfs(start, end, counter);
    counter++;
  }
  // for (int k = 0; k < 2; k++)
  // {
  //   cout << "Type " << k << '\n';
  //   for (int i = 0; i < n; i++)
  //   {
  //     for (int j = 0; j < m; ++j)
  //     {
  //       cout << vis[k][i][j] << ' ';
  //     }
  //     cout << '\n';
  //   }
  //   cout << '\n';
  // }
  // cout << '\n';
  return 0;
}