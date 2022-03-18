#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    int h; //smallest num
    int k; //largest num
    cout << "input x and press enter" << endl;
    cin >> x ;
    cout << "input y and press enter" << endl;
    cin >> y ;
    cout << "input z and press enter" << endl;
    cin >> z ;
    cout<< "Sum is " << x + y + z << endl;
    cout<< "Average is " << ( x + y + z ) / 3 << endl;
    cout<< "Product is " << x * y * z << endl;

    if ( y > x && z > x )
        h = x;
    if ( x > y && z > y )
        h = y;
    if ( x > z && y > z)
        h = z;
    cout << "Smallest number is " << h << endl;

    if (x > y && x > z )
        k = x;
    if ( y > z && y > x)
        k = y;
    if (z > x && z > y )
        k = z;
    cout << "Largest number is " << k << endl;

        return 0;
}
