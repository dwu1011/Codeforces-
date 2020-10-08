//149A
//900

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;
	int months[12];
	for(int i = 0; i< 12; i++){
		cin >> months[i];
	}
	sort(months, months+ 12);
	int sum = 0;
	int ans = 0;
	for(int i = 11; i >= 0; i--){
		if(sum >= k){
			break;
		}
		sum += months[i];
		ans ++;
	}
	if(sum < k){
		cout << -1 << endl;
	}else{
		cout << ans << endl;
	}
}
