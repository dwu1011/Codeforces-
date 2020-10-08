//From Hero to Zero 66A
//900


#include <bits/stdc++.h>
using namespace std;
void Test(){
	long long n, k;
	cin >> n >> k;
	long long moves = 0;
	while(n != 0){
		if(n%k == 0){
			n = n/k;
			moves ++;
		}else{
			long long dit = n%k;
			n -= dit;
			moves += dit;
		}
	}
	cout << moves << endl;
}


int main(){
	int T;
	cin >> T;
	for(int i = 0; i< T; i++){
		Test();
	}

}
