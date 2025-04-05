#include <iostream>

using namespace std;

int main(){
	
	string S;
	cin >> S;
	
	int x=0,y=0;
	
	for(int i = 0; i < S.length(); i++){
		if(S[i] == 'R'){
			x++;
		}else if(S[i] == 'U'){
			y++;
		}else if(S[i] == 'L'){
			x--;
		}else if(S[i] == 'D'){
			y--;
		}
		
	}
	cout << x << " " << y << endl;
	
	return 0;
}

 

