// Eunice Wu
// Nov 12, 2024
// Hw 4

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
// Exercise 1
void filterEvens (int a, int b, int c, int d, int e, int f, int g, int h) ;
void dna_to_rna (string a);
int main () {
// Exercise 4 

// Exercise 1

    int myArray[8];
    cout << "Enter 8 values: ";
    for (int i=0; i<=7; i++) {
        cin >> myArray[i];
    }

    filterEvens (myArray[0], myArray[1], myArray[2], myArray[3], myArray[4], myArray[5], myArray[6], myArray[7]);
// Exercise 2
    // 1
        int sum;
        int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8};
        for (int i=0; i<=9; i++) {
            sum = sum + cars[i];
        }
        cout << "The total number of cars sold at the entire dealership is:" << sum;
    //2
        int biggest=0;
        int person=0;
        for (int i=0; i<=9; i++) {
            if (cars[i] > biggest)
            biggest = cars[i];
            person = i+1;
        }
        cout << "Salesperson #" << person << " sold the most cars.";
    //2
        cout << "They soldc" << biggest << " cars.";

// Exercise 4
    string dna;
    cin >>  dna;
    cout << dna_to_rna(dna);
    return 0;
}
// Exercise 1
void filterEvens (int a, int b, int c, int d, int e, int f, int g, int h) 
{
    int myArrayeven[8] = {a,b,c,d,e,f,g,h};
    for (int i=0; i<=7; i++) 
    {
        if ( myArrayeven[i] % 2 == 0)
            cout << myArrayeven[i] << " ";
    }
}
void dna_to_rna (string a) 
{
double sequnce[]= {a};


}
// Exercise 4

