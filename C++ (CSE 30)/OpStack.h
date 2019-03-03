#ifndef OpStack_h
#define OpStack_h

// Define the Link struct below...

struct Link {
  long data;
  char op;
  Link *next;
};

// Now define the Stack struct. It should be a stack of Links...

struct Stack {
  Link *front=NULL;
  bool isEmpty(){
  if(front==NULL){
    return true;
  }else{
    return false;
  }
}
  void push (long data, char op){
    Link *ptr = new Link();
    ptr->data=data;
    ptr->op=op;
    //ptr->Link=NULL;
    if(front!=NULL){
      ptr->next=front;
    }
    front = ptr;
    }

  //  std::string peek () {
    //  return front-> data , front-> data2;
  //  }
    Link* pop(){
      Link* oldFront = front;
      front=front->next;
      return oldFront;
    }
};

#endif
