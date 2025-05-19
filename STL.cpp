#include <iostream>
#include <list>
#include <string>

using namespace std;

int main (int argc, char* argv[])
{

  list<string> toSort;
  
  toSort.push_back("blythe");
  toSort.push_back("smith");
  toSort.push_back("hurts");
  toSort.push_back("mahomes");
  
  cout << "UNSORTED" << endl;
  for(string name: toSort)
    cout << name << " " << endl;
    
  toSort.sort();
  cout << "SORTED" << endl;
  for(string name: toSort)
    cout << name << " " << endl;
    
  
 
 
  return 0;
}
