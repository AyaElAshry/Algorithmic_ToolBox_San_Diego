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

int main()
{
    int n1;
    int n2;
    cin >> n1 >> n2;
    int result =EuclidenGCD(n1 ,n2);
    cout << result <<"\n";
    return 0;
}