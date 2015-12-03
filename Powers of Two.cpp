#include <iostream>
using namespace std;

string PowersofTwo(int num) { 

  // code goes here 
  while(num > 1){
    if(num % 2 == 0){
     num = num/2; 
    }
  }
  
  if(num == 1){
   return "true"; 
  }
  
  else{
   return "false"; 
  }
  
  return "false"; 
            
}

int main() { 
  
  // keep this function call here
  cout << PowersofTwo(gets(stdin));
  return 0;
    
}           
