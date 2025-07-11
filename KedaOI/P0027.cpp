#include <bits/stdc++.h>
using namespace std;
const int N = 2e7 + 10;
int cnt, p[N], vis[N];
void get_p(int n) {
    for(int i = 2; i <= n; i++) {
        if(vis[i]) continue;
        p[cnt++] = i;
        for(int j = (i << 1); j <= n; j += i) {
            vis[j] = 1;
        }
    }
}
int main() {
    ios::sync_with_stdio(false), cin.tie(), cout.tie();
    int n;
    cin >> n;
    get_p(n);
    for(int i = 0; i < cnt; i++) {
        cout << p[i] << '\n';
    }
    return 0;
}