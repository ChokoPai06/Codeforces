#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9+7;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    vi pod(n);
    for (int i = 0; i < n; i++) {
        cin >> pod[i];
    }
    int ans = 1, sum = 0, t = 1;
    for (int i = 1; i < n; i++){
        sum += pod[i];
        while(sum >= t *  4 + 4) {
            if (sum == t * 4 + 4) {
                ans++;
            }
            sum -=  t * 4 + 4;
            t += 2;
        }

    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}