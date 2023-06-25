#include <bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ll;
void Task() {
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    if (fopen("test.inp", "r")) {
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
    }
}
void Solve() {
	int n, k;cin >> n >> k;
	vector <pair <int, int>> vector;
    vector.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> vector[i].second >> vector[i].first;
    }
    set <pair <int, int>> setBag;
    for (int i = 0; i < k; ++i) {
          ll c;cin >> c;
        setBag.insert({c, i});
    }
    sort(vector.begin(), vector.end());
    ll ans = 0;
    for (int i = n - 1; i >= 0 && !setBag.empty(); --i) {
        int weight = vector[i].second;
        setBag.insert({weight, - 1});
        auto it = setBag.find({weight, - 1});
              it++;
        if (it != setBag.end()) {
            setBag.erase(it);
            ans += (ll)vector[i].first;
        }
        setBag.erase({weight, - 1});
    }
    cout << ans;
}
int main() {
    Task();
    Solve();
}
