#ifndef VERSION1_H
#define VERSION1_H

//commit #2

using namespace std;
 
// Creating class
 
class Vehicle
{
 private:
    
  public:
    Vehicle();
    
    void display() {
      cout << "Hello World\n";
    }
    
    ~Vehicle();
};

Vehicle::Vehicle()
{	cout << "Hello Gearhead " << endl;
}

Vehicle::~Vehicle()
{	cout << "Goodbye Gearhead " << endl; 
}

#endif 