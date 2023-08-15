/*7. Create a base class called Matrix. Use this class to store 4 int type values that could
be used to calculate determinants and create matrices. Create class
calculate_determinant which will calculate the determinant of a matrix.
Using these classes, calculate the determinant of the matrix.*/

#include<iostream>
using namespace std ;

class Matrix
{
    protected :
        int m[2][2] ;

    public :
        void setData()
        {
            int i , j ;
            cout<<"Enter array values [2][2] : "<<endl ;

            for(i=0 ; i<2 ; i++)
                for(j=0 ; j<2 ; j++)
                    cin>>m[i][j] ;

        }
        virtual void show_det() = 0 ;

};
class calculate_determinant : public Matrix
{
    int result ;
    public :
        int cal_det()
        {
            result = ( (m[0][0]*m[1][1])-(m[1][0]*m[0][1]) ) ;
            return result ;
        }

        void show_det()
        {
            cout<<"Detrerminant is "<<result <<endl ;
        }
} ;

int main ()
{
    calculate_determinant m1 ;

    m1.setData () ;
    m1.cal_det() ;
    m1.show_det() ;
}

