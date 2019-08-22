#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    // Number of students in a class based on gender.
    // Change values if needed (only change male and female variables)

    double males = 35,
        females = 23,
        total = males + females,
        percentageMales = (float)males / (float)total * 100, 
        percentageFemales = (float)females / (float)total * 100;

    cout << "Welcome to my program.\n";
    
    cout << setprecision(4) << percentageMales  << '%' << endl;
    cout << setprecision(4) << percentageFemales  << '%' << endl;

    return 0;
}