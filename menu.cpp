#include <iostream>

using namespace std;


int input_validation(int lower_bound, int upper_bound, string prompt, string error_message, string def){

    string input;

    cout << prompt; // outputs prompt which caller has set in the parameters

    getline(cin, input); //takes input from user and stores it in the input variable


    if(input != "default"){
    //loop that error checks to see if the user entered a valid input
    //based on the bounds set by the caller
        while (stoi(input) > upper_bound || stoi(input) < lower_bound){
            cout << error_message << prompt;
            getline(cin, input);
            
        }

    } 

    else{
        
        input = def;
    }

    return stoi(input);
}

string input_validation(string prompt, string error_message){

    string input;

    cout << prompt;

    getline(cin, input);

    while(input.size() <= 0){
        cout << error_message << "\n\n" << prompt;
        getline(cin, input);
    }

    return input;

}

int main(){
    int value = input_validation(0, 100, "Please enter a value. Enter 'default' to use the value 100: ", "Your value is invalid.\n\n\n", "100");

    cout << "The value chosen by the user is " << value << "\n\n";

    string input = input_validation("Please enter a string: ", "Your string is invalid");

    cout << "\nThe string you chose is '" << input << "'\n\n";

    return 0;

}
