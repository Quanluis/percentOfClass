#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //variables

    double  percentageMales,
            percentageFemales;

    int males,
        females,
        total;

    // input/Output 

    cout << "Welcome to my program.\n";

    cout << "Males?\n";
    cin >> males;

    cout << "Females?\n";
    cin >> females;

        total = males + females;


        percentageMales = static_cast<float>(males)/ total * 100, 
        percentageFemales = static_cast<float>(females)/ total * 100;

    
    cout << setprecision(4) << "Percentage of Males: " << percentageMales  << '%' << endl;
    cout << setprecision(4) << "Percentage of Females: " << percentageFemales  << '%' << endl;

    system("pause");

    return 0;
}
