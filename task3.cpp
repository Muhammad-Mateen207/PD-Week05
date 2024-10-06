#include<iostream>
using namespace std;

float taxCalculator( char item, float price);

int main()
{
    char type;
    float price;

    cout<<"Enter the vehicle type: ";
    cin>>type;

    cout<<"Enter the price of vehicle: ";
    cin>> price;

    float Final_Price = taxCalculator( type, price);
    cout<<"The final price of a vehicle of type "<<type<<" after adding the task is $"<<Final_Price;


}
float taxCalculator( char type, float price)
{
     float tax;
     if (type== 'M')
      {
        tax = 6.0;
      }
      if (type == 'E')
      {
        tax = 8.0;
      }
      if (type == 'S')
      {
        tax = 10.0;
      }
      if (type == 'V')
      {
        tax = 12.0;
      }
      if (type == 'T')
      {
        tax = 15.0;
      }

    float Tax_amount;
    Tax_amount = price * tax/100;

    float Final_Price;
    Final_Price = price + Tax_amount;
    return Final_Price;

}

