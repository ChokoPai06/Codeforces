#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9+7;
using vi = vector<int>;

void solve() {
    int sc = 0;
    int n, k;
    unordered_map<int, int> freg;
    cin >> n >> k;
    vi arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        int target = k - arr[i];
        if (freg[target] > 0){
            sc++;
            freg[target]--;
        } else {
            freg[arr[i]]++;
        }
    }
    cout << sc << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}