/*************************************************
 * FILE: main.cpp                                *
 * AUTHOR: S. Blythe                             *
 * DATE: 1/2025                                  *
 * PURPOSE: main method for project. Essentailly *
 *  * pulls an input file name from command line *
 *  * constructs appropriate Sorter              *
 *  * reads data from input file                 *
 *  * sorts data                                 *
 *  * prints sorted results                      *
 *************************************************/
#include <fstream>
#include <iostream>
#include <string>

#include "BubbleSorter.hpp"
#include "HeapSorter.hpp"
#include "MergeSorter.hpp"
#include "QuickSorter.hpp"
#include "Sorter.hpp"
#include "SystemSorter.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  if(argc<3 || argc>4)
  {
    cerr << "Usage: " << argv[0] << " <input-file> <sort-type> {-print}" 
         << endl;
    return 1;
  }
  ifstream ifile(argv[1]); // open an input file based on command line

  string stype = argv[2];  // fihure out requested sort method

  Sorter *s; // holds (pointer to) request sort type
  
  // based on user command, build appropriate sort type
  if (stype == "bubble")
    {
      s=new BubbleSorter();
    }
  else if (stype == "heap")
    {
      s=new HeapSorter();
    }
  else if (stype == "merge")
    {
      s=new MergeSorter();
    }
  else if (stype == "quick")
    {
      s=new QuickSorter();
    }
  else if (stype == "sys")
    {
      s=new SystemSorter();
    }
  else
    {
      cerr<< "Sorting Type: \"" << stype << "\" is undefined!" << endl;
      return 1;
    }

  // now that we've got the right sort type, read in the data
  s->read(ifile);

  // let virtual function call right version of sorting for us ...
  s->sort();

  // if user actually wanted to see resulting sorted data, print it. 
  if (argc==4 && string(argv[3])=="-print")
    {
      s->print(cout);
    }

  return 0;
}
