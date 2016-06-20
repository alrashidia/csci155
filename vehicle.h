#ifndef VEHICLE_H
#define VEHICLE_H

//commit #2

using namespace std;
 
// Creating class



  
  struct Vehicle_d {
  
  int numOfTires ;
  string color ;
  
  
};




  
  






class Vehicle
{
 private:
    string name ;
    string model ;
    int year ;
    int speed ;
    double milage ;
    
    static int numOfVehicles;
    
    
  public:
  string getName(){return name ;}
  string getModel(){return model;}
  int getYear(){return year;}
  int getSpeed(){return speed;}
  double getMilage(){return milage;}
  void setName(string vehcileName){name = vehcileName;}
  void setModel(string vehicleModel){model = vehicleModel;}
  void setYear (int num){year = num;}
  void setSpeed(int mph){speed = mph;}
  void setMilage(double mph1){milage = mph1;}
  
 //protected :
// int year ;
// int speed ;
  // ask about python ?
  
    Vehicle();
    Vehicle(string , string , int , int , double);
    ~Vehicle();
    
    
    static int   getNumOfVehicle(){return numOfVehicles;}
    
    void toString();
    
};

int Vehicle::numOfVehicles = 0 ;

Vehicle::Vehicle(string name, string model, int year, int speed , double milage){
  this -> name=name;
  this -> model = model;
  this -> year = year;
  this -> speed = speed;
  this -> milage = milage ;
  Vehicle::numOfVehicles++;
}
 Vehicle :: ~Vehicle(){
   cout << "Vehicle " << this -> name << " destroyed ."<<endl;
 }
Vehicle::Vehicle(){
  Vehicle::numOfVehicles++;
}
void Vehicle::toString(){
  cout << this -> name << "is "<< this -> model << "model and it was made in" << this-> year <<
    ". and it travells at speed of " <<this ->speed << "and it has already travelled about ."<<this-> milage <<endl;
  
    
}



class Truck : Vehicle {
  
   private :
   
       string areaServed = "worldwide." ;
  
public :
  void getareaServed() {cout << areaServed << endl;}
  
  
  Truck (string , string , int , int , double, string );
  
  
  Truck() : Vehicle(){};
  
  void toString ();
  
};

Truck::Truck (string name , string model, int year , int speed , double milage, string areaServed):
Vehicle(name, model, year, speed, milage ){
  
  this -> areaServed = areaServed ;
  
  
}

void Truck::toString(){
  
 cout << this -> getName() << "is "<< this -> getModel() << "model and it was made in" << this-> getYear() <<
    ". and it travells at speed of " <<this ->getSpeed() << "and it has already travelled about"
    <<this-> getMilage() << ". and area served is "<< this -> areaServed<<"." <<endl;
    
  
}



#endif 