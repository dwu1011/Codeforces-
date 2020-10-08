// Keyboard 474A 
//900

#include <bits/stdc++.h>
using namespace std;
char find(char e,char dir){
	string top = "qwertyuiop";
	string mid = "asdfghjkl;";
	string bot = "zxcvbnm,./";
	for(int i = 0; i< 10; i++){
		if(top[i] == e){
			if(dir == 'L'){
				return top[(i+1)%10];
			}else{
				return top[((i+10)-1)%10];
			}
		}else if(mid[i] ==e ){
			if(dir == 'L'){
				return mid[(i+1)%10];
			}else{
				return mid[((i+10)-1)%10];
			}
		}else if(bot[i] == e){
			if(dir == 'L'){
				return bot[(i+1)%10];
			}else{
				return bot[((i+10)-1)%10];
			}
		}
	}
	return 'a';
}
int main(){
	char direction;
	string transcribe,answer;
	cin >> direction >> transcribe;
	for(int i = 0; i< transcribe.size();i++){
		answer += find(transcribe[i],direction);
	}
	cout << answer << endl;

}
