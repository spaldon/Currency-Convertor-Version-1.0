#include <iostream>
#include <math.h>
#include <string>
using namespace std;



int main()
 {
	 double pounds;
	 string currency;

	 cout << "CURRENCY CONVERTER\n";

	 cout << "\n";
	 cout << "\n";
	 cout << "\n";
	 cout << "\n";
	 cout << "\n";

	 cout << "Enter the amount of pounds you want to convert:\n";
	 cin >> pounds;
	 double dollar = pounds * 1.25;
	 double euro = pounds * 1.14;
	 double rupee = pounds * 102.033;

	 cout << "Enter:\n________________________________\n INR|For converting GBP to INR  |\n________________________________\n USD|For GBP to USD             |\n________________________________\n EUR|For GBP to EUR             |\n---------------------------------\n";
	 cin >> currency;

	 if (currency == "INR")
	 {
		 cout << pounds << "Pounds In Rupees + " << rupee;
	 }
	 else if (currency == "EUR")
	 {
		 cout << pounds << "Pounds in Euro = " << euro;
	 }
	 else if (currency == "USD")
	 {
		 cout << pounds << "Pounds In Dollars = " << dollar;
	 }
	 else
	 {
		 cout << "Thats an Invalid Input! Please Try Again";
	 }
		 


 }