#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int CountingMinutesI(string str) { 

  // code goes here   
  int hour1, hour2;
  int minutes1, minutes2;
  int totalMinutes = 0;
  
  int hyphen = str.find('-');
  string startTime = str.substr(0, hyphen);
  string endTime = str.substr(hyphen+1);
  
  int startTimeColon = startTime.find(':');
  string startTimeHour = startTime.substr(0, startTimeColon);
  string startTimeMinutes = startTime.substr(startTimeColon+1, 2);
  string startTimeAMPM = startTime.substr(startTimeColon+3);
  
  int endTimeColon = endTime.find(':');
  string endTimeHour = endTime.substr(0, endTimeColon);
  string endTimeMinutes = endTime.substr(endTimeColon+1, 2);
  string endTimeAMPM = endTime.substr(endTimeColon+3);
  
  stringstream startHour(startTimeHour);
  startHour >> hour1; 
 
  stringstream endHour(endTimeHour);
  endHour >> hour2; 
  
  stringstream startMinutes(startTimeMinutes);
  startMinutes >> minutes1;
  
  stringstream endMinutes(endTimeMinutes);
  endMinutes >> minutes2;
  
  if(startTimeAMPM == "pm" && hour1 < 12){
    hour1 += 12;
  }
  if(startTimeAMPM == "am" && hour1 == 12){
    hour1 = 0;
  }
  if(endTimeAMPM == "pm" && hour2 < 12){
    hour2 += 12;
  }
  if(endTimeAMPM == "am" && hour2 == 12){
    hour2 = 0;
  }
  
  totalMinutes = (hour2 * 60 + minutes2) - (hour1 * 60 + minutes1);
  if(totalMinutes < 0){
    totalMinutes += 1440;
  }
  return totalMinutes; 
            
}

int main() { 
  
  // keep this function call here
  cout << CountingMinutesI(gets(stdin));
  return 0;
    
}           
