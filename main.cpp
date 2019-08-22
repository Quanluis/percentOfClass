#include <iostream>
using namespace std;

int main(){

    // Number of students in a class based on gender.
    // Change values if needed (only change male and female variables)

    int males = 10,
        females = 10,
         total = males + females,
        percentage = (total / males) + 30;

    cout << "Welcome to my program.\n";

    cout << total << endl;
    cout << percentage << endl;

    return 0;
}