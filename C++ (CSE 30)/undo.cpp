#include <iostream>
#include "OpStack.h"
//#include <string>

using namespace std;

int main(int argc, const char * argv[]) {

    Stack* myStack = new Stack();
    /*
    queue.push('Jack');
    queue.push('Jill');
    queue.push('Jane');
    queue.push('John');
    */
    char input;
    long total = 0;
    long num;
    cin >> input;
    while (input != 'q') {
      /* code */

    if(input == 'a'){
      cin>>num;
      total = total + num;
      myStack->push(num, 'a');

    }
    if(input=='s'){
        cin>>num;
        total = total - num;
        myStack->push(num, 's');

    }
    if(input=='z'){
      if(myStack->isEmpty()){
        cout << "Nothing to undo..."<<endl;
      }else{
        Link* temp = myStack->pop();
        long num1 = temp->data;
        char n = temp->op;

        if(n=='a'){
          total = total - num1;
        }else if(n=='s'){
          total = total + num1;
        }
      }
      }
      cout << "Total: "  << total << endl;
      cin >> input;
  }
    return 0;
}
