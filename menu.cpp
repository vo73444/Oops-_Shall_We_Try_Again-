#include <iostream>

using namespace std;

int input_validation(int lower_bound, int upper_bound, string prompt, string error_message){

    int input;
    cout << prompt;
    cin >> input;
    while (input > upper_bound || input < lower_bound){
        cout << error_message << prompt;
        cin >> input;
    }

    return input;
}

int main(){
    int input = input_validation(0, 100, "Please enter a value: ", "Your value is invalid.\n\n\n");

    cout << "\n\nThe value chosen by the user is " << input << endl;

    return 0;
