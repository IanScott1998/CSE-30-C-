#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Write a program that keeps reading in strings of varied sizes.
//If an input string has length greater than one store it in a vector.
//When an input string has length one (a single character) you will output the
//string stored in your vector that has the first letter matching the input character.
//Keep doing this while you read string "quit".

int main()
{
  //Define the vector here
  vector<string> vect;

  // Variable for testing
  string word;



  while (word != "quit")
  {
    // user input here
    cin >> word;

    // This is where we store the strings with more than 1 character
    if (word.length() > 1)
    {
      vect.push_back(word);
      //cout << "Hello" << endl;
    }
    // This is where we store the strings with just 1 character
    else if (word.length() == 1)
    {
      if (word == "c")
      {
        cout << vect[0] << endl;
      }
      else if (word == "h")
      {
        cout << vect[1] << endl;
      }
      else if (word == "p")
      {
        cout << vect[2] << endl;
      }

    }

  }


  return 0;
}
// How to push a string into a vector
//vect.push_back(var);


// show the size of the vector
//cout << vect.size() << endl;

// show what is in the vector
//cout << vect[0] << endl;
