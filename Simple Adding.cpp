#include <iostream>
using namespace std;

int SimpleAdding(int num) { 

  // code goes here
  int answer = 0;
  for(int i = 1; i <= num; i++)
    answer += i;
  return answer; 
            
}

int main() { 
  
  // keep this function call here
  cout << SimpleAdding(gets(stdin));
  return 0;
    
}    
