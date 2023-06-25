#include <bits/stdc++.h>
#include <vector>
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#define taskname"J"
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
int songuyen (int n, int m)
{
	int a=n, b=m;
	int tmp;
	while (m!=0)
	{
		tmp = n%m;
		n=m;
		m=tmp;
	}
	return (a*b)/n;
}
void Solve(){
      int n,m;cin>>n>>m;
   int all_part = songuyen (n, m);
	int part_1 = all_part/n;
	int part_2 = all_part/m;
 
	int S=0;
	int count_cut=0;
	for (int i=1; i<=m; i++)
	{
		while (S<part_2)
		{
			S+=part_1;
		}
		if (S==part_2) S=0;
		else 
		{
			count_cut++;
			S-=part_2;
		}
	}
	cout << count_cut;
}
int main(){
	Input();
	Solve();
	return 0;
}