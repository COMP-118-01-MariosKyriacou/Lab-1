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

int main() {
    // Variable declarations
    int choice;
    
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
