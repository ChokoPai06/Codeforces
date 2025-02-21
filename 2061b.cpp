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
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    map<int, int> map;
    vector<int> dup;

    for (int i = 0; i < n; i++){
        map[a[i]]++;
        if (map[a[i]] == 2){
            dup.push_back(a[i]);
        }
    }
    if (dup.empty()) {
        cout << "-1" << endl;
        return;
    }
    if (dup.size() > 1) {
        cout << dup[0] << " " << dup[0] << " " << dup[1] << " " << dup[1] << endl;
        return;
    }

    int x = dup[0];
    vector<int> notdup;
    int y = 2;
    for (int i = 0; i < n; i++){
        if (a[i] == x && y > 0){
            y--;
        } else notdup.push_back(a[i]);
    }
    for (int i = 0; i < notdup.size() - 1; i++){
        if(2 * x > abs(notdup[i] - notdup[i + 1])){
            cout << x << " " << x << " " << notdup[i] << " " << notdup[i + 1] << endl;
            return;
        }
    }
    cout << "-1" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}