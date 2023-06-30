#ifndef stack_h
#define  stack_h
#include "node.h"

class Stack{
private:
	 NodePtr top;
	 int size;
public:
    Stack(NodePtr = NULL);
    ~Stack();
    char pop();
    void push(char);
};

Stack::Stack(NodePtr t){
  if(t) {
    top=t;
    size=1;
  }
 else{
   top=NULL;
	 size=0;
   }
}
void Stack::push(char x){
   NodePtr newnode=new NODE(x);
    if(newnode){
	 	  newnode->set_next(top);
      top = newnode;
      ++size;
   }
 else cout<<"No memory left for new nodes"<<endl;
		 // Left missing for exercises…
}

char Stack::pop(){
 	NodePtr t=top;
	char value;		
	if(t){
     value=t->get_value();
     top=t->get_next();
	// Left missing for exercises
      delete t;
     --size;
     return value;
  }  
	//cout<<"Empty stack"<<endl;
  return 0;
}

Stack::~Stack(){
    cout<<"Clearing all stacks"<<endl;
  	int i;
    NodePtr t=top;
    for(i=0;i<size;i++){
      top = top->get_next();
      delete t;
      t=top;
   	// Left missing for exercises
  }
}

#endif