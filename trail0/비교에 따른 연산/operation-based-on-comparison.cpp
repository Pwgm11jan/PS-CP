#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using str = string;
using ci = const int&;
using cl = const ll&;
const ll inf = 4e18;
#define all(v) (v).begin(), (v).end()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a,b; cin >> a >> b;
    if (a > b) cout <<a *b;
    else cout << b/a;
    return 0;
} // 