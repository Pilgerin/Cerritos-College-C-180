#include <iostream>
#include<fstream>
#include<iomanip>
#include <math.h>
using namespace std;
const int ROWS=4;
const int COLS=5;
int total;
int getTotal (int[ROWS][COLS]);

/*Main function*/
int main()
{
    int testArray[ROWS][COLS] = { { 1, 2, 3, 4, 5 },
               { 6, 7, 8, 9, 10 },
               { 11, 12, 13, 14, 15 },
               { 16, 17, 18, 19, 20 }};
    
     cout << setw(20)<< "Table content:  "<<endl;

    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
         cout <<setw(4)<< testArray[i][j] << ' ';
        }
        cout << endl;
      };
    cout <<"Sum of all the elements of the array is " << getTotal(testArray) <<"."<<endl;
}
/*FUNCTION TO GET TOTAL OF ALL THE ELEMENTS"*/
getTotal(int testArray[ROWS][COLS])
{for (int row = 0; row < ROWS; row++)
    for (int col = 0; col < COLS; col++)
        {
       total += testArray[row][col];
        }
        return total;
        }
    
