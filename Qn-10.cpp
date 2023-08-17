/*10. Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called
square and parallelogram from the base shape. Add to the base class, a member
function set_data() to initialise base class data members and another member
function display_area() to compute and display the area of figures. Make
display_area() as a virtual function and redefine this function in the derived classes to
suit their requirements.
Using these three classes, design a program that will accept dimensions of a
square or a parallelogram interactively, and display the area.*/

#include<iostream>
using namespace std ;

class Shape
{
    protected :
        double x , y ;

    public :
        void setData(double a , double b=0)
        {
            x = a ;
            y = b ;
        }
        virtual void display_Area() = 0 ;
};
class Square : public Shape
{
    public :
        void display_Area()
        {
            cout<<"Area of Sqr is "<<x*x <<endl;
        }
} ;

class Parallelogram : public Shape
{
    public :
        void display_Area()
        {
            cout<<"Area of parallelogram is "<<x*y <<endl ;
        }
} ;

int main ()
{
    Square s ;
    Parallelogram p ;

    s.setData(4) ;
    p.setData(5,6) ;

    s.display_Area() ;
    p.display_Area() ;
    return 0 ;
}

