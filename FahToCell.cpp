#include <iostream>

using namespace std;

int main() {

    double value_input;

    cout << "Enter a value in fahrenheit: (Must be a floating point.)" << endl;
    cin >> value_input;


    cout << "Your value is " << value_input << "º in Fahrenheit" << endl;
    
    double fah_to_cel = (value_input-32) * 5/9; 
    
    cout << "Your value is " << fah_to_cel << "º in Celsius" << endl;
    


 
}