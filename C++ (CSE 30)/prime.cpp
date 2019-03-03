#include <iostream>

int main(){
	using namespace std;

	int thing;
	cin>> thing;
	int count = 0;

	for(int n = 1; n<thing; n++){
    		for(int i = 2; i < n; i++){
          		if(n % i == 0){
          		count++;
          		}
      		}
		if(count<1 && n != 1){
			cout<< n << endl;
		}
		count=0;
   	 }
return 0;
}