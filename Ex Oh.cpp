#include <iostream>
using namespace std;

string ExOh(string str) { 

  // code goes here   
  int num_x = 0;
  int num_o = 0;
  for(int i = 0; i < str.length(); i++){
    if(str[i] == 'x'){
     num_x += 1; 
    }
    
    else if(str[i] == 'o'){
      num_o += 1;
    }
  }
  
  if(num_x == num_o){
   return "true"; 
  }
  
  else if (num_x < num_o){
   return "false";
  }
  
  else if (num_o < num_x){
   return "false"; 
  }
  
  return "false"; 
            
}

int main() { 
  
  // keep this function call here
  cout << ExOh(gets(stdin));
  return 0;
    
}           
