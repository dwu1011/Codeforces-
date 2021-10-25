//Assinging to Classes 618B
//1000

#include <bits/stdc++.h>
using namespace std;


void Test(){
	int n;
	cin >> n;
	int students = n*2;
	int total[students];
	for(int i = 0;i < students; i++){
		cin >> total[i];
	}
	sort(total, total+students);
	cout << total[n] - total[n-1] << endl;
	
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	for(int i = 0; i< T; i++){
		Test();
	}

}
