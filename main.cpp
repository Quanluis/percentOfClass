#include <iostream>
#include <cmath>
using namespace std;

int main(){

    // Number of students in a class based on gender.
    // Change values if needed (only change male and female variables)

    double males = 25,
        females = 25,
        total = males + females,
        percentageMales = (float)males / (float)total * 100, 
        percentageFemales = (float)females / (float)total * 100;

    cout << "Welcome to my program.\n";
    
    cout << round(percentageMales) << '%' << endl;
    cout << round(percentageFemales) << '%' << endl;

    return 0;
}