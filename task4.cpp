#include<iostream>
#include<string>
#include<cmath>

using namespace std;
string projectTimeCalculation(int, int, int);
int main()
{
   int hours, days, workers;
  string output;
  do{
  cout<<"Enter the needed hours: ";
  cin>>hours;
  if(hours<0 || hours>200000)
    {
      cout<<"Invalid input. Please enter a number within the range (0-200000)";
    }
  } while(hours<0 || hours>200000);
  do{
  cout<<"Enter the days that the firm has:";
  cin>>days;
  if(days<0 || days>20000)
    {
      cout<<"Invalid input. Please enter a number within the range (0=20000)";
    }
  } while(days<0 || days>20000); 
  do{
  cout<<"Enter the number of all workers: ";
  cin>>workers;
  if(workers<0 || workers>200)
   {
     cout<<"Invalid input. Please eneter a number within the range (0-200)";
   }
  } while(workers<0 || workers>200);
  output=projectTimeCalculation(hours, days, workers);
  cout<<output;
}

string projectTimeCalculation(int hours, int days, int workers)
{
float training_time, timeavailable, final_time, hoursreq;
string output;
int inthoursreq;
float days1;
days1 = days;
training_time= days1 * 0.1;
days1 = days1 - training_time;
timeavailable = days1 * 10;
final_time = final_time * workers;
hoursreq = hours - final_time;
inthoursreq = hoursreq;
if(final_time > hours){
 inthoursreq = inthoursreq * -1;
 output = "Yes! " + to_string(inthoursreq) + " hours left.";
 return output;
}
if(final_time < hours){

 output = "Not enough time! " + to_string(inthoursreq) + " hours needed.";
 return output;
}
}