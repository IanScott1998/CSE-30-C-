
#ifndef Queue_h
#define Queue_h

#include <string>
#include <queue>


struct Link {
  const char*data;
  Link *Link;
};
Link *front=NULL;
Link *back=NULL;
struct Queue {
    // Provide your code here...


    bool isEmpty() 
    {
    if(front==NULL&&back==NULL){
      return true;
    }else{
      return false;
    }
  }
    void push (const char* data){
      Link *ptr = new Link();
      ptr->data=data;
      ptr->Link=NULL;

      if(front == NULL){
        front = ptr;
        back = ptr;
      }
      else{
        back->Link=ptr;
        back=ptr;
      }
      }
      const char* pop(){
        Link *ptr = front;
        if(front==back){
          ptr = front;
          front =back = NULL;
          return ptr->data;
        }else{
          front = front -> Link;
          return ptr->data;
        }
      }
};


#endif
