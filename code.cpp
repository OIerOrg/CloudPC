#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 5e5 + 10;
const int M = 1e3 + 10;
const int Lg = 30;

namespace FastIO {
char gc() {
    char c;
    c = getchar();
    while (c == '\n' || c == '\r' || c == ' ') c = getchar();
    return c;
}
template <class T = int> inline T read() {
    T x = 0;
    bool is_negative = 0;
    char ch = getchar();
    while (!isdigit(ch)) {
        if (ch == '-') is_negative = 1;
        ch = getchar(); }
    while (isdigit(ch)) x = x * 10 + (ch & 15), ch = getchar();
    return is_negative ? -x : x;
}
template <class T> inline void read(T& x) { x = read<T>(); }
template <class T, class... R> inline void read(T& x, R&... args) { read(x), read(args...); }
template <class T> inline void read_arr(T* arr_begin, const T* arr_end) { while (arr_begin < arr_end) *arr_begin++ = read<T>(); }
template <class T> inline void write(T x) {
    if (x < 0) putchar('-'), x = -x;
    if (!x) return putchar('0'), void();
    static int digits[39];
    int cnt = 0;
    while (x) digits[cnt++] = x % 10, x /= 10;
    for (int i = cnt - 1; i >= 0; --i) putchar(digits[i] | 48);
}
inline void write(const char ch) { putchar(ch); }
template <class T, class... R> inline void write(const T x, R... args) { write(x), write(args...); }
template <class... R> inline void writeln(R... args) { write(args...), putchar('\n'); }
}
using namespace FastIO;

int t, id;
int n, m;

bool mp[M][M];
int mxr[M][M];

int c () {
    
}

int f () {

}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    read (t, id);
    while (t--) {
        read (n, m);
        for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= m; j++)
                mp[i][j] = gc() - '0';
        for (int j = m; j; j--) 
            for (int i = 1; i <= n; i++) {
                if (!mp[i][j]) mxr[i][j] = 0;
                else mxr[i][j] = mxr[i][j + 1] + 1;
            }
        writeln(c(), f());
    }
    return 0;
}


// 计时
// 一遍过