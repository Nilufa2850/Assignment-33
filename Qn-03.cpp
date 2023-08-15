/*3. Using the concept of pointers, write a function that swaps the private data values of
two objects of the same class type.*/

#include<iostream>
using namespace std ;

class ABC
{
    private :
        int a , b ;

    public :
        void set_data(int x , int y)
        {
            a = x ;
            b = y ;
        }
        void display()
        {
            cout<<"a="<<a <<" b="<<b<<endl ;
        }

        void swap(ABC *ptr)
        {
            ABC temp ;

            // Swapping of a
            temp.a = a ;
            a = ptr->a ;
            ptr->a = temp.a ;

            // Swapping of b
            temp.b = b ;
            b = ptr->b ;
            ptr->b = temp.b ;
        }
} ;


int main ()
{

    ABC a1 , a2 ;

    a1.set_data(1 , 2) ;
    a2.set_data(8 , 9) ;

    a1.display() ;
    a2.display() ;

    cout<<"After Swapping"<<endl ;
    a1.swap(&a2) ;
    a1.display() ;
    a2.display() ;
    
    /*ABC *p , *q ;

    p = new ABC ;
    q = new ABC ;

    p->set_data(4 , 5) ;
    q->set_data(10 , 12) ;

    p->display() ;
    q->display() ;

    p->swap(q) ;
    cout<<"After swapping result"<<endl ;
    p->display() ;
    q->display() ;*/

}
