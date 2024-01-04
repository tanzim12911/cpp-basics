// arrPractice.cpp

#include <iostream>
using namespace std;

// set numItems array values to all ones
void setArrToOnes(int numIteams, int arr[]);

// print first numItems value from array arr
void printValues(int numIteams, int arr[]);

int main()
{
    int score[10] = {1, 2, 3, 4};
    int allInitialized[] = {6, 5, 4, 3, 2, 1};
    int myStuff[10][20];

    printValues(10, score);
    printValues(10, myStuff[0]);
    printValues(10, myStuff[1]);
    printValues(6, allInitialized);
    printValues(30, allInitialized); // array overflow

    cout << endl;
}

void setArrToOnes(int numIteams, int arr[])
{
    for (int i = 0; i < numIteams; i++)
    {
        arr[i] =  1;
    }
}

void printValues(int numIteams, int arr[])
{
    for (int i = 0; i < numIteams; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    
}