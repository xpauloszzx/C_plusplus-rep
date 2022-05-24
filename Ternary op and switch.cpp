#include <iostream>
#include <stdio.h>
using namespace std;
void switch_case();
string ternary_op(int n1,int n2){
  /*  Sintax: 
  (Cond) ? true : false ;
	True and false refers to do something in that space when the condition is true or false (that's what will be returned). 
  */

  string res;
  (n1>n2) ? res="greater" : res="no";
  return res;
}

int main() {
  string res; 
  cout << ((50==10) ? "Yes" : "No")<<"\n";
  int x=0;
  cout<< (x%2==0) ? x++ : x-- ;
    
}

void switch_case(){
/* Sintax: 
switch (variable){
  case value1:
    commands;
    break;
  case value2:
    commands;
    break;
  case value3:
    commands;
    break;
    .2
    .
    .
  default:
    commands;

  }
*/
  char op;
  switch (op){
    case ('+'):
    case ('-'):
      printf("+-");
      break;

    case ('*'):
      printf("*");
      break;
    case('/'):
      printf("/");
      break;
    default:
    printf("op not found");
    }
  

  
  
}