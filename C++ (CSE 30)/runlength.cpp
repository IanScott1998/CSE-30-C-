#include <iostream>

int main(){
using namespace std;
char thing;

int thing2;

while(thing2 != -2){

	cin >> thing;
	cin >> thing2;
	if(thing2 == -1){
		cout<< endl;
	}
	else if(thing2 != -2){
		
		for(int i = 0; i < thing2; i++){
			cout<< thing;
		}
	}
}
return 0;
}
