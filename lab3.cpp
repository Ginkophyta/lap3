#include <iostream>
using namespace std;

int main()
{
    double sum=0,n=6;
    while(n<20){
        sum=1/n+sum;
        n=n+1;
    }
    cout << sum ;
    return 0;
}