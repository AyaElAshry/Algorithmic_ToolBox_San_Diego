#include <iostream>
#include <vector>
using namespace std;

using std::cin;
using std::cout;


template <class T>

int EuclidenGCD(T a, T b)
{
    if (a<b)
 {
    int temp=a;
    a=b;
    b=temp;
}
    if(b==0)
    return a;
    else
    {
        T r= a % b;
        return EuclidenGCD(b,r);
    }
   
}


template <class T>
long long LCM(T a, T b)
{
    T LCM= (a*b)/EuclidenGCD(a,b);
    return LCM;
}
 int main ()
 {
   long long a, b;
   cin >> a>>b;
   long long result =LCM(a,b);
   cout << result <<"\n";

   return 0;

 }