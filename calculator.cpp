#include <iostream>
#include <cctype> // for toupper()
using namespace std;

int main() {
    int choice;
    double num1,num2;
    char repeat;
    
    do{
        cout << "\n~~~ CALCULATOR ~~~" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice(1-5): ";
        cin >> choice;
        
        if(choice >= 1 && choice <= 4){
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }
        
        switch(choice) {
            case 1 :
                cout << "Sum = " << num1 + num2 << endl;
                break;
            case 2 :
                cout << "Difference = " << num1 - num2 << endl;
                break;
            case 3 :
                cout << "Product = " << num1 * num2 << endl;
                break;
            case 4 :
                if (num2 != 0)
                    cout << "Quotient = " << num1 / num2 << endl;
                else 
                    cout << "Error: Division by zero is not possible! " << endl;
                break;
            case 5 :
                cout << "Exiting..." << endl;
                return 0;
            default :
                cout << " Invalid choice! Try again." << endl;
                
        }
        cout << "\nDo you want to perform another operation?(Y/N): ";
        cin >> repeat;
        repeat = toupper(repeat);
        
    }while ( repeat == 'Y');
    
    cout << "Happy to help!" << endl;
    
    return 0;
}
