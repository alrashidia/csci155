#include<iostream>
#include "vehicle.h" 




int main () {
Vehicle nissan ;
  nissan.setName ("hyunda");
  nissan.setModel("geneses");
  nissan.setYear(2016);
  nissan.setSpeed(260);
  nissan.setMilage(0);
  
  
   cout << nissan.getName() << " is "<< nissan.getModel() << " model and it was made in " << nissan.getYear() <<
    ". and it travells at speed of " <<nissan.getSpeed() << " and it has already travelled about "<<nissan.getMilage()<<" kilometer per hour."<<endl;
  
  
  Vehicle toyota("Corolla", "L Manual", 2012, 180, 105);
  
  
  
     cout << toyota.getName() << " is "<< toyota.getModel() << " model and it was made in " << toyota.getYear() <<
    ". and it travells at speed of " <<toyota.getSpeed() << " and it has already travelled about "<<toyota.getMilage()<<" kilometer per hour."<<endl;
	
	
	
	
		
	Truck van ("ford ", "c-max", 1997, 155 , 109.9, "worlwide");
	cout<<"Number of Vehicle "<< Vehicle::getNumOfVehicle()<<"." <<endl ;
	
	van.getareaServed();
	
	
 nissan.toString();
	van.toString();
	
	van.Truck::toString();
	
	
	Vehicle_d a [3] ;
  a[0].numOfTires = 4 ;
  a[0].color = "black";
  
  a[1].numOfTires = 4 ;
  a[1].color = "red";
	
	
	a[2].numOfTires = 6 ;
  a[2].color = "white";
	
  
  cout << "Hyunda : number of tires are "<< a[0].numOfTires << "  "<< "and its color is  "<<a[0].color<<"." << endl ;
  
   cout << "Corolla :  number of tires are "<< a[1].numOfTires << "  "<< "and its color is  "<<a[1].color<<"." << endl ;
	
	
	cout << "C-max : number of tires are "<< a[2].numOfTires << "  "<< "and its color is  "<<a[2].color <<"."<< endl ;
	
	
	
	

  
	return 0;
}

