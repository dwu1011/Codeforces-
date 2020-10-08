//Young Physicist 69A
//1000

#include <bits/stdc++.h>
using namespace std;

int main(){
	int k;
	cin >> k;
	int x[k], y[k],z[k];
	int sumX, sumY,sumZ;
	sumX = 0;
	sumY = 0;
	sumZ = 0;
	for(int i = 0;i < k; i++){
		cin >> x[i] >> y[i] >> z[i];
	}
	for(int i = 0; i< k; i++){
		sumX = sumX + x[i];
		sumY = sumY + y[i];
		sumZ = sumZ + z[i];
	}
	if(sumX == 0 && sumY == 0 && sumZ == 0) {
		cout << "YES" << endl;
	} else{
		cout << "NO" << endl;
	}
	
	
	
	

}
