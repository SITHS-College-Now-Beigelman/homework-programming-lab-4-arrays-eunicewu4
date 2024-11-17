// Eunice Wu
// Nov 12, 2024
// Hw 4

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

    // Exercise 4 user made void fuction declaration 
void filterEvens (int a, int b, int c, int d, int e, int f, int g, int h);
    // Exercise 4 user made void fuction declaration 
void dna_to_rna (string a);

int main () {

    // Exercise 1
    // Creates and ask user for list components
    int myArray[8];
    cout << "Enter 8 values: ";
    for (int i=0; i<=7; i++) {
        cin >> myArray[i];
    }
    //Uses user made fuction with the parimeters of the 8 user inputted numbers
    filterEvens (myArray[0], myArray[1], myArray[2], myArray[3], myArray[4], myArray[5], myArray[6], myArray[7]);

    // Exercise 2
    // 1
        int sum=0; //for values to be added in later and get the sum
        int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8}; // Creates and initialize the list
        for (int i=0; i<=9; i++) { //loop that adds the value of every component to the sum
            sum = sum + cars[i];
        }
        cout << "The total number of cars sold at the entire dealership is: " << sum <<"\n"; //outputs the sum
    //2
        int biggest=0; //set to zero to prevent garbage values
        int person=0; // loop will find the biggest seller's person number and the sales they have
        for (int i=0; i<=9; i++) { // loop runs through every component and switches the person/biggest value if the component is larger
            if (cars[i] > biggest)
            biggest = cars[i]; 
            person = i+1;
        }
        cout << "Salesperson #" << person << " sold the most cars." <<"\n"; //Outputs person with biggest sales
    //3
        cout << "They sold " << biggest << " cars." <<"\n"; // gotten value the previous loop, also outputs the sales that person had

    // Exercise 4
        //Ask user for their dna sequnce 
        string dna;
        cout << "Enter your dna sequence to convert to rna: ";

        getline(cin, dna); // using getline because some dna have spaces so string only ends at \n
        getline(cin, dna); // repeats two times because sometimes the leftover \n in the system just skips the first getline
        dna_to_rna(dna); // after getting dna value, use the user made void fuction

        return 0;
}
    // Exercise 1
void filterEvens (int a, int b, int c, int d, int e, int f, int g, int h) 
{
    int myArrayeven[8] = {a,b,c,d,e,f,g,h}; // transfer the previous componets to this one so you can run a loop with them
    for (int i=0; i<=7; i++) 
    {
        if ( myArrayeven[i] % 2 == 0) // if its even (can divide by 2), then it will be printed out
            cout << myArrayeven[i] << " ";
    }
    cout << endl;
}
    //Exercise 4
void dna_to_rna (string a) 
{
    char dnachar[20]; //dna sequnce set to 20 so it can convert all of the dna examples given and longer ones
    
    for (int i=0;i<=19;i++) //convert the string list to char to prevent random garbage values for loops later on if you just use a string list 
    {
        dnachar[i]=a[i];
    }
    
    cout << "Your RNA sequence is: ";

    for (int i=0;i<=19;i++) // loop that changes every output dna letter to rna
    {
        switch (dnachar[i]) 
        {
            case 'A':
                cout << 'U';
                break;
            case 'C':
                cout << 'G';
                break;
            case 'G':
                cout << 'C';
                break;
            case 'T':
                cout << 'A';
                break;
            default: // if any other char was used that A,C,G,T, nothing would happen
                break;
        }
    }

}

/*
Enter 8 values: 52 82 61 73 28 15 25 0   
52 82 28 0 
The total number of cars sold at the entire dealership is: 58
Salesperson #10 sold the most cars.
They sold 14 cars.
Enter your dna sequence to convert to rna: ACG TGCA
Your RNA sequence is: UGCACGU
*/
