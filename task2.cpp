#include<iostream>
#include<iomanip>
using namespace std;

float Pyramidvolume(int length,int width,int height,string units);

int main(){
    int length ,  width , height;
    string units;

 cout<<"Enter the length of the pyramid(in meters): ";
 cin>>length;
 cout<<"Enter the width of the pyramid(in meters): ";
 cin>> width;
 cout<<"Enter the height of the pyramid(in meters): ";
 cin>>height;
 cout<<"Enter the desired output unit(millimeters, centimeters, meters, kilometers): ";
 cin>>units;

 float output = Pyramidvolume( length , width ,  height, units);
 
  cout<<"The volume of the pyramid is: "<<fixed<<setprecision(3)<<output <<" cubic " <<units;

}

float Pyramidvolume(int length, int width, int height, string units)
{   
  float output;
  output =  length * height * width * 1/3 ;

 if(units == "meters")
 {
  output = (1.0/3.0) * length * height * width;
 }
 if(units == "millimeters")
 {
  output = ((1/3) * length * height * width)* (1000000000);
 }
 if(units == "centimeters")
 {
  output = ((1/3) * length * height * width)* (1000000);
 }
 if(units == "kilometers")
 {
  output = ((1/3) * length * height * width)/ (1000000000);
 }
 return output;
}
