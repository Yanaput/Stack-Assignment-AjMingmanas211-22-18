#include <iostream>
using namespace std;
#include "stack.h"
#include <cstring>

int main(int argc, char *argv[]) {
  Stack s;
  char c;

  for(int j = 1; j<argc; j++){
    int match = 0;
    int in_out=0
    for(int i = 0; i<strlen(argv[j]); i++){
      switch(argv[j][i]){
        case '[' :
          s.push(argv[j][i]);
          in_out++;
          break;
        case '{' :
          s.push(argv[j][i]);
          in_out++;
          break;
        case ']' :
          c = s.pop();
          in_out--;
          if(c=='[')
            match ++;
          else
            match --;
          break;
        case '}' :
          c = s.pop();
          in_out--;
          if(c=='{')
            match ++;
          else
            match--;
        default:break;
      }

      if(match==0)
        cout<<"Match\n";
      else if(match!=0)
        cout<<"Not Match\n";

      if(in_out>0)
    }
  }





  
 /*for(int i=0;i<strlen(argv[1]);i++){
    switch(argv[1][i]){
      case '[' :
      case '{' :
        s.push(argv[1][i]);
        break;
      case ']' :
        c = s.pop();
        if(c!='[')
          match = 0;
        break;
      case '}' :
        c = s.pop();
        if(c!='{')
          match = 0;
        break;       
      default:break;
    }
  }
  if(match == 1)
    cout<<"match \n";
  else if(match){
  
  }
  else if(match){
    
  }
  else 
    cout<<"not match\n";*/
}