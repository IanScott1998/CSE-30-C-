#include <iostream> 
#include <string>

int main(){
	using namespace std;
	string sentence;
	int runs;
	getline(cin, sentence);
	cin >> runs;
	for(int i = 0; i<runs; i++){
	cout << sentence << endl;
	} 
	return 0;
}
