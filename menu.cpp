#include <iostream>

using namespace std;

//function that takes in arguments which can be set by the caller
int input_validation(int lower_bound, int upper_bound, string prompt, string error_message){

    int input; // declares variable that user will eventually input

    cout << prompt; // outputs prompt which caller has set in the parameters

    cin >> input; //takes input from user and stores it in the input variable

    //loop that error checks to see if the user entered a valid input
    //based on the bounds set by the caller
    while (input > upper_bound || input < lower_bound){
        cout << error_message << prompt;
        cin >> input;
    }

    return input;
}

int main(){
    int input = input_validation(0, 100, "Please enter a value: ", "Your value is invalid.\n\n\n");

    cout << "The value chosen by the user is " << input << "\n\n";

    return 0;

}
