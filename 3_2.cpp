// write a program that asks for your height in feet and inches and your weight in pounds.
// (Use three variables to store the information.) Have the proogram report
// your BMI.
// First, convert your height in feet and inches to your height in inches
// 1 foot = 12 inches.
// Then, convert your height in inches to your height in meters 
// by multiplying 0.0254.
// Then convert your your weight in pounds into your mass in kilograms by 
// dividing by 2.2
// Finally, compute your BMI by dividing your mass in kilo by the square of your height
// in meters.
// Use symbolic constants to represent the various conversion factors.

// 3_2.cpp

#include <iostream>
#include <iomanip>

using namespace std;

const int In_per_ft = 12;
const float in_per_m = 0.0254;
const float pound_per_kg = 2.2;

int main()
{
	int height_ft, height_in, weight_pd;
	cout << "Calculating your Body Mass Index (BMI)!" << endl;
	cout << "Please first enter your height: \n(foot): _\b";
	cin >> height_ft;
	cout << "(inches): __\b\b";
	cin >> height_in;

    int h_in_tot = height_ft * In_per_ft + height_in;
	
	cout << "Your height in meters is ";
	float h_meter = h_in_tot * in_per_m;
	cout << setprecision(2) << fixed << h_meter << "(m)." << endl;
	
	cout << "Please enter your weight in pounds: ___\b\b\b";
	cin >> weight_pd;
	float weight_kg = weight_pd / pound_per_kg;
	cout << "Your weight in kilograms is ";
    cout << setprecision(2) << fixed << weight_kg << "(kg)." << endl;
	
	float BMI = weight_kg / (h_meter * h_meter);
	cout << endl << "BMI Categories:" << endl;
	cout << "Underweight  = BMI < 18.5" << endl;
	cout << "Normal weight = 18.5 - 24.9" << endl;
	cout << "Overweight = 25 - 29.9" << endl;
	cout << "Obesity = BMI > 30" << endl;
	cout << "\nYour BMI is: ";
	cout << setprecision(2) << fixed << BMI << "." << endl;

    return 0; 	
}