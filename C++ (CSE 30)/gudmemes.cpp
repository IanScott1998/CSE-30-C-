#include <iostream>
#include "RandomSupport.h"
#include "BST.h"
#include "BSTUtil.h"

using namespace std;

int main(int argc, const char* argv[]){
  long size = 0;
  cin >> size;

  Node* root = NULL;

  randomizer meme = new_randomizer();
  uniform_distribution b = new_distribution(1,size);

  for(int i = 0; i < size; i++){
    long numb = sample(b,meme);
    root = insert(root,numb);
  }

  root = insertSpecialNumber(root);

  findSpecialNumber(root);
  return 0;
}
