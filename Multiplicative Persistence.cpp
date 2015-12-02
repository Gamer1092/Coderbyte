#include <iostream>
using namespace std;

int MultiplicativePersistence(int num) { 

  // code goes here
  int persistence = 0;
  
  //If num is already a single digit we are done
  if(num < 10){
   return 0; 
  }
  
  //Until num is a single digit do the following:
  //1) Cut out the last digit from num and multiply that to the product
  //2) After all digits have been multiplied to the product assign that to be
  // the new num and then add 1 to the persistence
  while(num > 9){
   int product = 1;
    while(num > 0){
      product *= num % 10;
      num = num/10;
    }
    persistence += 1;
    num = product;
  }
  return persistence; 
            
}

int main() { 
  
  // keep this function call here
  cout << MultiplicativePersistence(gets(stdin));
  return 0;
    
}           
