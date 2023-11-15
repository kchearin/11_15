#pragma once
class CHealth {
public:
	//member data
	static int nCHealth;
	float height, cel, faren, beat, pressure;
	float BMIvalue, healthAge;
	float* beat5min, * temp5min;

	CHealth();
	CHealth(int a);
	~CHealth();

	void measure();
	void measure(int);
	int run5min();

	void setage(float z) { age = z; }
	int giveage() { return age; };
	void setweight(float z) { weight = z; }
	float giveweight() { return weight; };

private:
	//private member data
	int age;
	float weight;
	//private member function
	void cel2faren();
	void faren2cel();
	void GetHealthAge();
	void GetBMI();
};
