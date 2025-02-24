//
//  Lab 1 Exercise: The Shape Menu
//  Create a menu where it gives the user options in order to draw certain shapes
//
//  Created by Marios Kyriacou (U244N0037) on 24/02/2025.

#include <iostream>

using namespace std;

// Function prototypes
void drawHorizontalLine(int, char) ;
void drawVerticalLine(int, char);
void drawSquare(int, char);
void drawSquareFilled(int, char);
void drawRectangle(int, int, char);
void drawRectangleFilled(int, int, char);
bool dataValidation(int, int);

int main() {
    // Variable declarations
    int choice;
    char character;
    bool isValid;
    
    // User Option Menu
    cout << "1) Draw a horizontal line" << endl;
    cout << "2) Draw a vertical line" << endl;
    cout << "3) Draw a square" << endl;
    cout << "4) Draw a rectangle" << endl;
    cout << "5) Quit" << endl;
    
    // Prompt user to enter a choice
    cout << "Enter your option: ";
    cin >> choice;
    
    // Data validation from user. If it isn't valid prompt them to enter a choice until it is valid
    while(choice > 5 || choice < 1) {
        cout << "I need a choice between 1 and 5. If you want to quit enter 5: ";
        cin >> choice;
    }
    
    // Switch function to choose the correct choice
    switch(choice) {
        // If the choice is 1 through 3, get the size and the character and validate the size so it's positive
        // if it isn't, request a positive number until one is entered.
        case 1:
        case 2:
        case 3:
            // Temporary variable declarations
            int size;
            
            // Prompt user to enter the size and the character
            cout << "Enter the size and the character you want the shape to be: ";
            cin >> size >> character;
            
            // Validate the size
            isValid = dataValidation(size, 1);
            
            // If it is not valid request a new number, otherwise run the correct function
            while(!isValid) {
                cout << "Please enter a size that is positive! ";
                cin >> size;
                
                // Validate size again
                isValid = dataValidation(size, 1);
            }
            
            // Run the corresponding function
            if(isValid) {
                if(choice == 1) drawHorizontalLine(size, character);
                if(choice == 2) drawVerticalLine(size, character);
                if(choice == 3) drawSquare(size, character);
            }
            
            break;
        case 4:
            int width, height;
            
            cout << "Enter the width, height and the character you want the shape to be: ";
            cin >> width >> height >> character;
            
            isValid = dataValidation(width, height);
            
            // If it is not valid request a new number, otherwise run the correct function
            while(!isValid) {
                cout << "Please enter a width and height that is positive! ";
                cin >> width >> height;
                
                // Validate size again
                isValid = dataValidation(width, height);
            }
            
            // Run the corresponding function
            if(isValid) {
                drawRectangle(width, height, character);
            }
            
            break;
        // If they want to exit it breaks automatically and shows "Have a good day!"
        case 5:
        default:
            break;
    }
    
    cout << "Have a good day!" << endl;
    
    return 0;
}

void drawHorizontalLine(int length, char ch) {
    cout << "I am drawHorizontalLine" << endl;
}

void drawVerticalLine(int height, char ch) {
    cout << "I am drawVerticalLine" << endl;
}

void drawSquare(int size, char ch){
    cout << "I am drawSquare" << endl;
}

void drawSquareFilled(int size, char ch){
    cout << "I am drawSquareFilled" << endl;
}

void drawRectangle(int height, int length, char ch){
    cout << "I am drawRectangle" << endl;
}

void drawRectangleFilled(int height, int length, char ch){
    cout << "I am drawRectangleFilled" << endl;
}

// If both of the numbers are > 0 then return true, otherwise it is not valid
bool dataValidation(int num1, int num2) {
    if(num1 > 0 && num2 > 0) return true;
    
    return false;
}
