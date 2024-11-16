#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 10;
int n, q;
int color[N];
int fa[N];
int cnt[N];
int siz[N];
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
    cin >> n >> q;
    for (int i = 1; i <= n; i++) fa[i] = i;
    for (int i = 1; i <= n; i++) color[i] = i;
    for (int i = 1; i <= n; i++) siz[i] = 1;
    for (int i = 1; i <= n; i++) cnt[i] = 1;
    while (q--) {
        int op, c, x;
        cin >> op >> c >> x;
        
    }
	return 0;
}
