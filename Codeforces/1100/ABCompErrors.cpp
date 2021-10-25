//
//

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>> n;
	map<int,int> tingz;
	int temp;
	for(int i = 0; i< n; i++){
		cin >> temp;
		tingz.insert({temp,0});
	}
	for(int i = 0; i< n-1; i++){
		cin >> temp;
		tingz[temp] = tingz[temp] + 1;
	}
	for(int i = 0; i< n-2; i++){
		cin >> temp;
		tingz[temp] = tingz[temp] + 1;
	}
	
}
