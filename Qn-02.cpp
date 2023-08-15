/*2. Extend the above program to display the area of circles. This requires the addition of
a new derived class 'circle' that computes the area of a circle. Remember, for a circle
we need only one value, its radius, but the get_data() function in the base class
requires two values to be passed. (Hint: Make the second argument of get_data()
function as a default one with zero value.)*/

#include<iostream>
using namespace std ;

class Shape 
{
    protected : 
        double x , y ;

    public :
        void set_data(double a , double b=0 )
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
            cout<<"Area of Triangle is "<<(x/2*y) <<endl ;
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
class Circle : public Shape
{
    public : 
        void display_area()
        {
            cout<<"Display of Circle called"<<endl ;
            cout<<"Area of Circle is "<< (3.14*x*x) <<endl ;
        }
} ;

int main ()
{
    Triangle t ;
    Rectangle r ;
    Circle c ;

    t.set_data(5 , 6) ;
    r.set_data(4 , 5) ;
    c.set_data(2) ;


    t.display_area() ;
    r.display_area() ;
    c.display_area() ;
}
