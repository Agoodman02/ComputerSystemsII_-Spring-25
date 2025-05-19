/**************************************
* FILE: main.cpp                      *
* AUTHOR: Amber Goodman               *
* DATE: 04/2025                       *
* PURPOSE: Driver file for project 4  *
            CSC36000                  *
***************************************/

#include <iostream>
#include <string>

using namespace std;

int knapsack(long int s, long int input)
{
  
  //cout << s << " " << input << endl;  // good so far here
  long int arr[8][s];
  
  for (long int n = 0; n <= s; n++)
  { 
    arr[0][s] = 0;         // make first row 0
  }
  
  
  for(long int i= 1; i <= 8; i++)
  {
    for(long int j = 1; j <= s; j++)
    {
      // base case
      if (arr[i][j] > arr[i-1][j])
        arr[i][j] = arr[i-1][j];
      else
      {
        if (arr[i-1][j] > arr[i-1][j-input] + input) //error here
          arr[i][j] = arr[i-1][j];
        else
          arr[i][j] = arr[i][j];
      }
     knapsack(s, arr[i][j]);    
    }
    
  }
  
  cout << arr[8][(int)s] << endl;   // return largest score
}


int main(int argc, char* argv[])
{
  string linescore;
  
  cout << "Enter linescore: ";
  cin >> linescore;
  
  long int s = linescore.size();
  cout << "Size: " << " " << s << endl;
  
  long int score = stoi(linescore);
  cout << "Linescore: " << " " << score << endl;
  
  cout << "calling knapsack()" << endl;
  
  cout << knapsack(s, score) << endl;
  
  cout << "if you get here knapsack() finished" << endl;
  
  

  return 0;
}
