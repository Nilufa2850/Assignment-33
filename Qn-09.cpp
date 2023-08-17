/*9. Create a base class called volume. Use this class to store two double type values
that could be used to compute the volume of figures. Derive two specific classes
called cube and sphere from the base. Add to the base class, a member
function set_data() to initialise base class data members and another member
function display_volume() to compute and display the volume of figures. Make
display_volume() as a virtual function and redefine this function in the derived
classes to suit their requirements.
Using these three classes, design a program that will accept dimensions of a cube
or a sphere interactively, and display the volume.*/

#include<iostream>
using namespace std ;

class volume
{
    protected :
        double x , y ;

    public :
        void setData(double a , double b=0)
        {
            x = a ;
            y = b ;
        }

        virtual void display_volume() = 0 ;
};
class Cube : public volume
{
    public :
        void display_volume()
        {
            cout<<"Vloume of cube is "<<x*x*x <<endl;
        }

} ;

class Sphere : public volume
{
    public :
        void display_volume()
        {
            cout<<"Vloume of sphere is "<<(4*3.14*x*x*x) / 3 <<endl ;
        }
} ;

int main ()
{
    Cube c ;
    Sphere s ;

    c.setData(2) ;
    s.setData(3) ;

    c.display_volume() ;
    s.display_volume() ;
}

