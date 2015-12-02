#include <iostream>
using namespace std;

int FirstFactorial(int num) { 

  // code goes here  
  int answer = 1;
  
  if(num == 0)
  	return 1;
  
  if(num == 1)
  	return 1;
  
  for(int i = 1; i <= num; i++){
  	answer = answer * i; 
  }
  return answer; 
}

int main() { 
  
  // keep this function call here
  cout << FirstFactorial(gets(stdin));
  return 0;
    
}           
