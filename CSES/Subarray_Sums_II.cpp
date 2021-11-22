#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <unordered_map>

using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
#define pb push_back
#define f first
#define s second
#define all(x) begin(x), end(x)

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n,x;
	ll arr[100000];
	scanf("%lld %lld", &n, &x);

	for(int i =0; i< n ;i++){
		scanf("%lld", &arr[i]);
	}

	ll psum[n];
	psum[0] = arr[0];
	for(int i = 1; i< n; i++){
		psum[i] = psum[i-1] +arr[i];
		cout << psum[i] << endl;
	}
	ll ans = 0;

	for(int i = 0; i< n ;i++){
		for(int j = i+1; j< n; j++){
			if(psum[j] - psum[i] == x){
				//cout << j << "  " << i << endl;
				ans++;
			}
		}
	}
	printf("%lld",ans);
}
