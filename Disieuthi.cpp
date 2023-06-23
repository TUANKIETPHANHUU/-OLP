#include <bits/stdc++.h>
#include <vector>
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define all(a) a.begin(),a.end()
#define taskname "H"
unsigned long long a[31][31],n,k,i,j,ln,u;
typedef long long ll;
using namespace std; 
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
void Solve(){
	int n,k;
	cin>>n>>k;
	cin>>ln;
	for(i=2;i<=n;i++){cin>>u;
	    if (ln<u) ln=u;}
	for (i=1;i<=n;i++)
	{
		a[i][1]=i;a[i][0]=1;
		for (j=2;j<=k;j++) a[i][j]=a[i][j-1]+a[i-1][j];
	}
	cout<<a[n][k]<<" "<<ln*k;
}

int main(){
	Input();
	Solve();
	return 0;
}