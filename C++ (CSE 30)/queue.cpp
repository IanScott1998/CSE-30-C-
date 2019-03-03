#include <iostream>
#include "StringQueue.h"
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {

    Queue queue;
    /*
    queue.push("Jack");
    queue.push("Jill");
    queue.push("Jane");
    queue.push("John");
    */
    string input;
    string name;
    while (input != "q") {
      /* code */
    cin >> input;
    if(input == "a"){
      cin>>name;
      queue.push(name);
      cout << name << " Arrived" << endl;
    }
    if(input=="s"){
      if(!queue.isEmpty()){
        name = queue.pop();
        cout<< "Now serving: " << name << endl;
      }else{
        cout << "No customers waiting" << endl;
      }
    }
    if(input=="n"){
      if(!queue.isEmpty()){
        name = queue.peek();
        cout << "Next in line: " << name << endl;
      }else{
        cout << "The waiting queue is empty" << endl;
      }

    }
    if(input=="q"){
      cout << "Come back tomorrow: " << endl;

      while (!queue.isEmpty()) {
        cout << queue.pop() << endl;
      }
    }
  }

    cout << "Closing up now." << endl;

    return 0;
}
