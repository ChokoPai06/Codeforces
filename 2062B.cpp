#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9+7;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        int maxdistance = max(i, n - 1 - i);
        if(a[i] <= 2 * maxdistance) {
        cout << "NO" << endl;
        return;
        }
    }   
    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}