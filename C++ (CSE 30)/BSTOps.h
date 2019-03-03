#ifndef BSTOps_h
#define BSTOps_h

#include "BSTComplete.h"

int occurrences(Node* root, int value){
  int times = 0;
  root = findNode(root,value);
  while(root!=NULL){
    root = findNode(root->right,value);
    times++;
  }
  return times;
}

#endif
