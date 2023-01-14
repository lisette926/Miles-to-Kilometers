#include <iostream>
#include <ctime>

#define Conversion 1.609

using namespace std;

void Miles2Km(float miles)
{
    float Kilometers = miles*Conversion;
    cout  <<miles << " miles becomes " << Kilometers << " kilometers" << endl;
}

int main()
{
    time_t t = time(NULL);
    double Miles;

    cout << "Enter Mileage: ";
    cin>> Miles;
    Miles2Km(Miles);
    cout << "Today is: " << ctime(&t) << endl;
    return 0;
}
