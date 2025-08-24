// ColorPickerDinal.cpp : This file contains the 'main' function. Program execution begins and ends there. 
//Kindly Note this is only the cpp file available in GitHub, not the whole solution from Visual Studio 2022

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // List of colors
    string colors[] = { "Yellow", "Green", "Red", "Blue" };
    int numColors = 4;

    // Print list of colors
    cout << "List of colors:\n";
    for (int i = 0; i < numColors; i++) {
        cout << colors[i] << endl;
    }

    // Seed the random generator
    srand(time(0));

    // Pick a random color
    int randomIndex = rand() % numColors;
    cout << "\nRandom color: " << colors[randomIndex] << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
