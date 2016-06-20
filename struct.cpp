#include <iostream>
#include <string>


using namespace std ;


struct car_d {
  
  int numOfTires ;
  string color ;
  
  
 
  
};



int main () {
  
  

    
      
  car_d a [1] ;
  
   for (int i = 0 ; i<1; i++){
    
    cout << "ente r ;lafknv ;lfnv's " << endl;
    cin >> a[i].numOfTires >>a[i].color >>endl ;
   }
  
  
  
  a[0].numOfTires = 4 ;
  a[0].color = "red";
  
  a[1].numOfTires = 4 ;
  a[1].color = "red";
  
  cout << "number of tires are "<< a[0].numOfTires << "  "<< "and its color "<<a[0].color << endl ;
  
   cout << "number of tires are "<< a[1].numOfTires << "  "<< "and its color "<<a[1].color << endl ;
  
  
  return 0 ;
  
  
}
  