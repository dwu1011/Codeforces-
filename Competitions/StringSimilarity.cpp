//String Similarity
//A

#include <bits/stdc++.h>
using namespace std;

void TEST(){
	int n;
	cin >> n;
	string sim,ans;
	cin >> sim;
	for(int i = 0; i< n; i++){
		ans += sim[n-1];
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	for(int i = 0; i< T; i++){
		TEST();
	}

}
