include <bits/stdc++.h>
#include <vector>
#define taskname "H"
using namespace std; 
typedef long long ll;
  bool cmp (pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}
void Input() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
   if (fopen(taskname".inp", "r")) {
        freopen(taskname".inp", "r", stdin);
       freopen(taskname".out", "w", stdout);
    }
}
 ll check(ll x){
         ll s=0;
        if (x%9!=0) 
	for (int i=1; i<=(x-1)%9+1; i++) 
	        s+=i;
    return (ll) 45*((ll)x/9) + s;
}
void Task(){
	ll t;cin>>t;
	while(t--){
		ll l,r;cin>>l>>r;
		cout << check(r) - check(l-1) << '\n';
	}
}
int main(){
	Input();
	Task();
	return 0;
}
