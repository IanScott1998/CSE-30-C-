#ifndef FindMin_h
#define FindMin_h
using namespace std;

int findMin(int numbers[], int start, int end){
int min = numbers[start];
int minSpot = start;
for(int i = start; i<end; i++){
  if(numbers[i]<min){
    min=numbers[i];
    minSpot=i;
  }
}
// Declare and define the findMin function here

return(minSpot);
}
// Do not write any code below this line
#endif
