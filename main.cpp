#include <iostream>
using namespace std;
#include "stack.h"
#include <cstring>

int main(int argc, char *argv[]) {
  Stack s;


  for(int j = 1; j<argc; j++){
    int match = 0,in_out=0;
    for(int i = 0; i<strlen(argv[j]); i++){
      char c;
      switch(argv[j][i]){
        case '[' :
          s.push(argv[j][i]);
          match++;
          in_out++;
          break;
        case '{' :
          s.push(argv[j][i]);
          match++;
          in_out++;
          break;
        case ']' :
          c = s.pop();
          in_out--;
          if(c=='[')
            match --;
          else
            match ++;
          break;
        case '}' :
          c = s.pop();
          in_out--;
          if(c=='{')
            match --;
          else
            match++;
        default:break;
      }
    }
      if(match==0)
        cout<<"Match";
      else if(match!=0)
        cout<<"Not Match";

      if(in_out>0)
        cout<<" Too many open parenthesis";
      else if(in_out<0)
        cout<<" Too many close parenthesis";
      cout<<"\n";
    }
}