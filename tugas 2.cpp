#include <iostream>
using namespace std;

int maxarray
(int arr[],int n);
int minarray
(int arr[],int n);
bool iseven (int a);
bool isodd (int a);
bool isfactor
(int a,int b);
int sum_even
(int arr[],int n);
int sum_odd
(int arr[],int n);

int main()
{
    int g,b;
    cout << " Max & Min \n";
    cout << " Bilangan Pertama : ";
    cin >> g;
    cout << " Bilangan Kedua : ";
    cin >> b;
    cout << endl;
    cout << " Bilangan Terbesar : " << max(g,b) << endl;
    cout << endl;
    cout << " Bilangan Terkecil : " << min(g,b) << endl;
    cout << endl;
    cout << " Apakah " << b << " Adalah Faktor Dari " << g << " : " << isfactor(g,b) << endl;

    int i;
    cout << "\n Jumlah ARRAY : " ;
    cin >> i;
    int arr[i];
    cout << " Input Array : " << endl;
    for(int j=0 ; j<i ; j++ )
    {cin >> arr[j];}
    cout << endl;

    cout << " Bilanga Terbesar : " << maxarray( arr , i ) << endl;
    cout << endl;
    cout << " Bilangan Terkecil : " << minarray( arr , i ) << endl;
    cout << endl;
    cout << " Jumlah Bilangan Genap : " << sum_even( arr , i ) << endl;
    cout << endl;
    cout << " Jumlah Bilangan Ganjil : " << sum_odd( arr , i ) << endl;
    cout << endl;

    int gnp;
    cout << " Input Bilangan : " ;
    cin >> gnp;
    cout << endl;
    cout << " 1 = BENAR & 0 = SALAH " << endl;
    cout << endl;
    cout << " GENAP  : " << iseven( gnp ) << endl;
    cout << endl;
    cout << " GANJIL : " <<  isodd( gnp ) << endl;
    cout << endl;


    return 0;
}

int maxarray
(int arr[],int b)
{
    int temp = arr[0];
    for( int i = 0; i < b; i++ )
    {
        if ( arr[i] > temp )
        {
            temp = arr[i];
        }
    }
    return temp;
}

int minarray
(int arr[],int b)
{
    int temp = arr[0];
    for( int i = 0; i < b; i++ )
    {
        if ( arr[i] < temp )
        {
            temp = arr[i];
        }
    }
    return temp;
}

bool iseven
(int b)
{
    if (b % 2 == 0)
{
        return true;
    }
    else
    {
        return false;
    }
}

bool isodd
(int b)
{
    if (b % 2 != 0)
    {
        return true;
    }
    else
    {        return false;
    }
}

bool isfactor
(int g, int b)
{
    if( g % b == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int sum_even (int arr[],int x)
{
    int sum = 0;
    for(int i = 0; i < x ; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}

int sum_odd
(int arr[],int x)
{
    int sum = 0;
    for(int i = 0; i < x ; i++)
    {
        if (arr[i] % 2 != 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}
