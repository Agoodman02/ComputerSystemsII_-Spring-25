/************************************
 * File: main.cpp                   *
 * Author: Amber Goodman            *
 * Date: 02/2025                    *
 * PURPOSE: Project 1 for CSC35500  *
 ************************************/

#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>


using namespace std;


string partition(string &arr[], int p)
{
  int pivot = arr[p]
  
  

}
string bubbleSort(string arr[], int n)  // fix later
{
  
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr [j] > arr[j+1])
        arr[j] = arr[j+1];
        arr[j+1] = arr[j];
    }
  }
 return arr;
}

string mergeSort(string arr[])
{
  if arr.size() <= 1
    return;
  else
  {
   string arr1[] + string arr2[] = partition(arr, arr.size()/2);
   mergeSort(arr1);
   mergeSort(arr2);
   arr[] = merge(arr1, arr2);
  }
  return arr;
}
   
string merge(string arr1[], string arr2[])
{
  int n = arr1.size() + arr2.size();  // size of the total array
  int arrS[n];
  
  int s = n;  // to fill in arrS[]
  
  for (int i = 0; i < n; i++)
  {
    if (arr1[i] < arr2[i])
    {
      arrS[s] = arr1[i];  // copy value
    }
    else
    {
      arrS[s] = arr2[i]; // copy value
    }
    s--;
  }
  return arrS;
}


string quickSort(string arr[], int n)
{ 
  
  for (int i = 0; i < n; i++)
  {
    
  }
  return
}

string heapSort(file)
{

  return
}

string sysSort(string arr[])
{
  for (int i = 0; i < arr.size(); i++)
    arr.push_back(arr[i]);
    
  arr.sort();
  
  return arr;
}

int main (int argc, char* argv[])
{
  // read in file
  ifstream fin;
  fin.open(argv[0]);
  


  return 0;
}
