//
//

#include <bits/stdc++.h>
using namespace std;

void TEST(){
	int a, b;
	cin >> a >> b ;
	int dif = abs(b-a);
	int ans = (dif/10);
	if(dif%10 > 0 ){
		ans = ans + 1;
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	for(int i = 0; i< T;i++){
		TEST();
	}
}
