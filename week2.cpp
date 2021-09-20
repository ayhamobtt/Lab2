
#include<iostream>

using namespace std;

class MyFirstClass { 
private:
	int age;
	char* firstName, * lastName;

public:
	MyFirstClass() : MyFirstClass(0,NULL,NULL) {

	}
	MyFirstClass(int a, char* f, char* l) 
	{
		age = a;
		firstName = f;
		lastName = l;  
	}

	~MyFirstClass() {
		int i = 0; i++;
	}
	int getAge() { return age; }
	char* getFirstName() { return firstName; }
	char* getlastName() { return lastName; }
	
protected: 
	void setFirstName(char* f) { firstName = f; }
	void setLastName(char* l) { lastName = l; }

};

class MySecondClass { };


#include"iostream"

using namespace std;

class Vehicle
{
	int numWheels;
	int numDoors;

public:
	Vehicle(int w, int d);
	Vehicle(int w);
	Vehicle();
	~Vehicle();
};

Vehicle::Vehicle()
{
	Vehicle(4); //A nameless local object will be created by calling Vehicle(int)
	cout << "Constructor with 0 parameter" << endl;

}

Vehicle::Vehicle(int w)
{
	Vehicle(4, w); //A nameless local object will be created by calling Vehicle(int,int)
	cout << "Constructor with 1 parameter, where wheel=" << w << endl;
}

Vehicle::Vehicle(int w, int d)
{
	numWheels = w;
	numDoors = d;
	cout << "Constructor with 2 parameter" << endl;
}

Vehicle::~Vehicle()
{
	cout << " “In destructo" << endl;
}

int main(int argc, char** argv)
{
	Vehicle myVehicle(4); Vehicle CST8219 ;
	Vehicle myVehicle(4, 2); 
	Vehicle myVehicle; CST8219; //An object will be created by calling Vehicle(), two intermediate object, total three objects
	cout << "I made a Vehicle" << endl;
	return 0;
}