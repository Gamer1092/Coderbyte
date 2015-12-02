#include <iostream>
using namespace std;

int AdditivePersistence(int num) { 

  // code goes here   
  int count = 0;
  
  //If num is already a single digit we are done
  if(num < 10){
    return 0;
  }
  
  //Until num is a single digit do the follwing
  //1) Cut out the last digit and add it to a sum and then divide num to cut out 
  // that digit
  //2) Once all digits have been added to sum, add one to count and assign sum
  // to be the new value of num
  while(num > 9){
    int sum = 0;
    while(num > 0){
      sum += num % 10;
      num = num/10;
    }
    count += 1;
    num = sum;
  }
  return count; 
            
}

int main() { 
  
  // keep this function call here
  cout << AdditivePersistence(gets(stdin));
  return 0;
    
}           
