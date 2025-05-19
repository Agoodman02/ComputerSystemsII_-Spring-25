/******************************************
* File: main.cpp                          *
* Author: Amber Goodman                   *
* Date: 04/2025                           *
* Purpose: main driver file for Project 3 *
*******************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

#include "Person.hpp"

using namespace std;

void quickSort(Person *array[], int index)
{
  Person *greater = new Person[];
  Person *equal = new Person[];
  Person *less = new Person[];
  
  int pivot = rand() % index;
  
  for (Parent p : array)
  {
    if array[p] > array[index]
    {
      
  

}

double closestPair(Person *array[], int index)
{
    // compare both quiz scores
    Person *left = new Person[index];
    Person *right = new Person[index];
    
    for(int i = 0; i <= index /2; i++)    // put half of original array in left array
    {
      int j = 0;
      left[i]= array[j];
      j++;
    }
    
    while(!array.empty())       // put the rest of array in right array
    {
      int r = 0;
      int a = index / 2;
      
      right[0] = array[a];
      r++;
      a++;
    }
    
    closestPair(left);
    closestPair(right);
    
    
    double minDist = sqrt((pow(left[i].test1()-right[j].test1(), 2) + 
                           pow((left[i].test2() - right[j].test2(), 2)))); 
    
    for(int i = 1; i < left.size(); i++)
    {
      for(int j = 1; j < right.size(); i++)
      {
       double newMin = sqrt((pow(left[i].test1()-right[j].test1(), 2) + 
                             pow((left[i].test2() - right[j].test2(), 2))));
      }
      if (newMin < minDist)
        minDist = newMin;
    }
    
  
   return minDist; 
}


int main(int argc, char *argv[])
{
  Person person;
  int index;
  

  ifstream file(argv[1]);
  
  Person *array = new Person[index];
  
  while (file.peek() != EOF)    // Bug 
  { 
    file >> person.name();
    file >> person.test1();
    file >> person.test2();
    
    index++;
    // insert into array
    array[index] = person;
    
   
    cout << person.name() << " " << person.test1() << " " << person.test2() << endl;
  }
  
  file.close();
  
  double diff = 100.0;
  double newdiff;
    
  if (string(argv[2]) == "1") // greedy?
  {
    // sort 
    //string test1 = "test1";
   // mergeSort(list, test1);            //fix
  
    // compare only test 1
    for (int j = 0; j < index; j++)
    { 
      newdiff = array[j].test1() - array[j+1].test1(); // difference of two scores
      
      if (newdiff < diff)
        diff = newdiff;
        
      cout << array[j] << " " << array[j+1] << " " << diff << endl;
    }
    
  }
  
  else if (string(argv[2]) == "2")  // greedy?
  {
    // sort
   // string test2 = "test2";    // fix
   // mergeSort(list, test2);
    
    //compare only test 2
     for (int j = 0; j < index; j++)
    { 
      newdiff = array[j].test2() - array[j+1].test2(); // difference of two scores
      
        if (newdiff < diff)
          diff = newdiff;
          
        cout << array[j] << " " << array[j+1] << " " << diff << endl;
    }
    
  }
  
  else if (string(argv[2]) == "b") // divide and conquer
  {
    //closestPair(array);
    
    
  }
  
  
   else  
      cout << "Input invalid." << endl;
      
  delete[] array;

  return 0;
}
