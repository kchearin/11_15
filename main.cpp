#include <iostream>
#include "health.h"
using namespace std;
int main() {
	CHealth kim, lee(25), * park;
	park = new CHealth(30);

	kim.measure();
	cout << "kim's Health Measurements:\n";
	cout << "age: " << kim.giveage() << " year old\n";
	cout << "cel: " << kim.cel << "C\n";
	cout << "Height: " << kim.height << " meters\n";
	cout << "Weight: " << kim.giveweight() << " kg\n";
	cout << "Body Mass Index (BMI): " << kim.BMIvalue << "\n";
	cout << "HealthAge: " << kim.healthAge << "\n\n";

	lee.measure(40);
	cout << "Iee's Health Measurements:\n";
	cout << "age: " << lee.giveage() << " year old\n";
	cout << "cel: " << lee.cel << "C\n";
	cout << "Height: " << lee.height << " meters\n";
	cout << "Weight: " << lee.giveweight() << " kg\n";
	cout << "Body Mass Index (BMI): " << lee.BMIvalue << "\n";
	cout << "HealthAge: " << lee.healthAge << "\n\n";
	
	park->measure();
	cout << "park's Health Measurements:\n";
	cout << "age: " << park->giveage() << " year old\n";
	cout << "cel: " << park -> cel << "C\n";
	cout << "Height: " << park -> height << " meters\n";
	cout << "Weight: " << park -> giveweight() << " kg\n";
	cout << "Body Mass Index (BMI): " << park -> BMIvalue << "\n";
	cout << "HealthAge: " << park -> healthAge << "\n\n";
}