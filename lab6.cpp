/*CIS 180
Assignment 6
Stone, Daria*/

#include <iostream>
#include<fstream>
#include<iomanip>
#include <math.h>
using namespace std;
const int ROWS=4;
const int COLS=5;
int total;
int getTotal (int[ROWS][COLS]);
int getRowTotal (int[ROWS][COLS], int);
int getColumnTotal (int[ROWS][COLS], int);
int getLowestInRow(int[ROWS][COLS]);  
int getHighestInRow(int[ROWS][COLS]); 
float getAverage(int[ROWS][COLS]);

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
    cout <<"Sum of all the elements of the array is: " << getTotal(testArray) <<"."<<endl;
    cout <<"Average of all the elements of the array is: " << getAverage(testArray) <<"."<<endl;
    cout <<"Sum of all the elements of the Row 0 is: " << getRowTotal(testArray, 0) <<"."<<endl;
    cout <<"Sum of all the elements of the Column 2 is: " << getColumnTotal(testArray, 0) <<"."<<endl;
    cout <<"The lowest value in Row 2 is: " << getLowestInRow(testArray) <<"."<<endl;
    cout <<"The highest value in Row 2 is: " << getHighestInRow(testArray) <<"."<<endl;
return 0;
}

/*FUNCTION TO GET TOTAL OF ALL THE ELEMENTS"*/
int getTotal(int testArray[ROWS][COLS])
{for (int row = 0; row < ROWS; row++)
    for (int col = 0; col < COLS; col++)
        {
       total += testArray[row][col];
        }
        return total;
        }

/*FUNCTION TO GET AVERAGE OF ALL ROWS*/
float getAverage(int testArray[ROWS][COLS])
{ double average;
total = 0;
total=getTotal(testArray);
average = total/(float(ROWS*COLS));
return average;
}


 /*FUNCTION TO GET TOTAL OF COLUMN 2*/

 int getColumnTotal(int testArray[ROWS][COLS], int row)   
    {   int total =0;
      
    for (int col = 2; row < ROWS; row++)
        {
       total += testArray[row][2];
        }
        return total;
        }
/*FUNCTION TO GET TOTAL OF ROW 0*/

int getRowTotal(int testArray[ROWS][COLS], int col)   
    {   int total =0;
      
    for (int row = 0; col < COLS; col++)
        {
       total += testArray[0][col];
        }
        return total;
        }

/*FUNCTION TO GET LOWEST VALUE OF ROW 2*/

int getLowestInRow(int testArray[ROWS][COLS])   
    { 
    int lowest = testArray[2][0];
         for (int i = 0; i < COLS; i++)
        {if (testArray[2][i] < lowest)
           {
           lowest = testArray[2][i];
           }
        }
        return lowest;
        }

/*FUNCTION TO GET HIGHEST VALUE OF ROW 2*/

int getHighestInRow(int testArray[ROWS][COLS])   
    { 
    int highest = testArray[2][0];
         for (int i = 0; i < COLS; i++)
        {if (testArray[2][i] > highest)
           {
           highest = testArray[2][i];
           }
        }
        return highest;
        }