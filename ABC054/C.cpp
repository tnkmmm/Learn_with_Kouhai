#include <bits/stdc++.h>
using namespace std;

//再帰関数を用いた深さ優先探索

int N,M;
vector<int> visited;
vector<vector<int>> G;
int num_visited = 0;
int ans = 0;

//これが深さ優先探索の実装
void dfs(int now){
    visited[now] = 1;
    num_visited++;
    if(num_visited == N){
        ans++;
    }
    for(int i = 0;i < G[now].size();i++){
        int next = G[now][i];
        if(!(visited[next]))dfs(next);
    }
    visited[now] = 0;
    num_visited--;
}

int main(){
    cin >> N >> M;
    G = vector<vector<int>>(N);
    visited = vector<int>(N,0);
    for(int i = 0;i < M;i++){
        int a,b;
        cin >> a >> b;
        //0スタートにする
        a--;b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    //0から探索スタート
    dfs(0);
    cout << ans << endl;
}