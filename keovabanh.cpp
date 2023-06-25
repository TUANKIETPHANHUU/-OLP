#include <bits/stdc++.h>
#include <vector>
#define taskname"L"
using namespace std; 
typedef long long ll;
void Input() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
   if (fopen(taskname".inp", "r")) {
        freopen(taskname".inp", "r", stdin);
       freopen(taskname".out", "w", stdout);
    }
}

void Solve(){
 ll A,B,K;
 cin>>A>>B>>K;
   if(A >= K){
   	A = A - K;
   }
   else if(A < K){
   	K -= A;
   	A = 0;
   	  if(B >= K) B-=K;
   	  else B = 0;
   }
   cout << A << " " << B << endl;
   
}
int main(){
	Input();
	Solve();
	return 0;
}
