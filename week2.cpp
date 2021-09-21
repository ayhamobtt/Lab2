#include"iostream"

using namespace std;

namespace cst8219 {

	class Vehicle
		// initlaizing two integer varibales by private defualt access
	{
		int numWheels;
		int numDoors;

		//creating the first public method, that contaire 3 types of constractore and one deconstractore
	public:
		Vehicle(int w, int d);
		Vehicle(int w);
		Vehicle();
		~Vehicle();
	};
	#Finished constructors
	// this first method/constractor talks no parameters 
	Vehicle::Vehicle()
	{
		Vehicle(4); //A nameless local object will be created by calling Vehicle(int)
		cout << "Constructor with 0 parameter" << endl;

	}
	// this second method/constractor talks one integer parameters 
	Vehicle::Vehicle(int w)
	{
		Vehicle(4, w); //A nameless local object will be created by calling Vehicle(int,int)
		cout << "Constructor with 1 parameter, where wheel=" << w << endl;
	}

	// this third method/constractor talks two integer parameters 
	Vehicle::Vehicle(int w, int d)
	{
		// and store them in w,d that present numWheels,numDoors
		numWheels = w;
		numDoors = d;
		cout << "Constructor with 2 parameter" << endl;
	}
	//that is the deconstractore calling automatically fuction
	Finished destructor
	Vehicle::~Vehicle()
	{
		cout << " “In destructo" << endl;
	}

	// the main method
	int main(int argc, char** argv)
	{
	Demo #1
		cst8219:Vehicle myVehicle();

		//An object will be created by calling Vehicle(), two intermediate object, total three objects
		cout << "I made a Vehicle" << endl;
		return 0;
	}
}
