/*5. Create a base class called Photon. Use this class to store double type value of
wavelength that could be used to calculate photon energy. Create class
calculate_photonEnergy which will photon energy.
Using these classes, calculate photon energy.*/

#include<iostream>
#include<math.h>
using namespace std ;

class Photon
{
    protected :
        double w ;

    public :
        void setData(double a )
        {
            w = a / pow(10 , -10) ;
        }
        virtual void display() = 0 ;  
} ;

class cal_photon_energy : public Photon
{
    double E ;

    public :
        void cal_photon_eng()
        {
            E = ((6.626*(pow(10,-34))) * (3*(pow(10,8))))/w ;
        }
        void display() 
        {
            cout<<"Photon energy is "<<E<<endl ;
        }
} ;

int main ()
{
    cal_photon_energy a ;
    a.setData(0.5) ;
    a.display() ;
    return 0 ;
}

