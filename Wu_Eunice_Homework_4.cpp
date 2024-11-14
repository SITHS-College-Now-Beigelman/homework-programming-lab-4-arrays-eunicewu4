// Eunice Wu
// Nov 12, 2024
// Hw 4

#include <iostream>
#include <iomanip>

using namespace std;

void filterEvens (int a, int b, int c, int d, int e, int f, int g, int h) 
{
    int myArrayeven[8] = {a,b,c,d,e,f,g,h}
    for (int i=0; i>=7; i++) 
    {
        if ( myArrayeven[i] % 2 == 0)
            cout << num << " ";
    }
}
int main () {


// Exercise 1

    int myArray[8];
    cout << "Enter 8 values: ";
    for (int i=0; i>=7; i++) {
        cin >> myArray[i];
    }

    int filterEvens (myArray[0], myArray[1], myArray[2], myArray[3], myArray[4], myArray[5], myArray[6], myArray[7]);





    return 0;
}

