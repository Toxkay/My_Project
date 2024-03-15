#include <iostream>

using namespace std ;

int main()
{
    long long n ;
    cin >> n ;
    long long array[n] = {};
    long long a ;
    for (int i = 0; i < n; i++)
    {
        cin >> a ;
        array[i] += a;
    }
    long long x ;
    cin >> x ;
    long long index = -1 ;


    for (int i = 0; i < n; i++)
    {
        if (array[i] == x )
        {
            index = i ;
            break;
        }
    }


        cout << index << endl;

    return 0 ;
}