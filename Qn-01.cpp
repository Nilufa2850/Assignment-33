/*1. Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called
triangle and rectangle from the base shape. Add to the base class, a member
function set_data() to initialise base class data members and another member
function display_area() to compute and display the area of figures. Make
display_area() as a virtual function and redefine this function in the derived classes to
suit their requirements.
Using these three classes, design a program that will accept dimensions of a
triangle or a rectangle interactively, and display the area.
Remember the two values given as input will be treated as lengths of two sides in
the case of rectangles, and as base and height in the case of the triangles, and used
as follows:
Area of rectangle = x * y Area of triangle = 1/2 * x * y*/

#include<iostream>
using namespace std ;

class Shape 
{
    protected : 
        double x , y ;

    public :
        void set_data(double a , double b)
        {
            x = a ;
            y = b ;
        }
        virtual void display_area() = 0 ; // pure virtual function
        
} ;
class Triangle : public Shape
{
    public :
        void display_area ()
        {
            cout<<"Display of triangle called"<<endl ;
            cout<<"Area of Triangle is "<<(1/2.0*x*y) <<endl ;
        }
} ;
class Rectangle : public Shape 
{
    public :
        void display_area ()
        {
            cout<<"Display of Rectangle called"<<endl ;
            cout<<"Area of Rectangle is "<< (x*y) <<endl ;
        }

} ;

int main ()
{
    Triangle t ;

    t.set_data(5.5 , 6.1) ;
    t.display_area() ;

    Rectangle r ;
    r.set_data(4 , 5) ;
    r.display_area() ;
}
