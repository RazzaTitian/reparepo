#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int  num1, num2, result;
    char operation;

    cout << "Insert 1st number : ";
    cin >> num1;
    cout << "Insert 2nd number: "; 
    cin >> num2;

    cout << "Choose the operation that you want (+ for addition, - for substraction) : ";
    cin >> operation;

    if (operation == '+'){
        result = num1 + num2;
    }
    else if (operation == '-'){
        result = num1 - num2;
    }
    else{
        cout << "Invalid operation";
        return 1;
    }

    cout << "The result is : " << result << endl;

    ofstream outfile("result.txt");
    outfile << "The result of the operation is: " << result << endl;
    outfile.close();

    cout << "Result is saved on 'result.txt'" << endl;

    return 0;
}

