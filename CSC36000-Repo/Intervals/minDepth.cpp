#include "Classroom.hpp"
#include "Interval.hpp"

#include "GenericHeap.tpp"

#include <fstream>
#include <list>

using namespace std;

bool classLess(const Interval &i1, const Interval &i2)
{
  
  return i1.start() < i2.start();
}

#define MAX_CLASSROOMS 500
int main(int argc, char *argv[])
{
  GenericHeap<Classroom> classrooms(MAX_CLASSROOMS);
  list<Interval> classes;

  ifstream ifile(argv[1]);

  Interval lecture;
  ifile >> lecture;

  while(ifile)
    {
      classes.push_back(lecture);
      
      ifile >> lecture;
    }
  
  classes.sort(classLess);

  for(Interval c:classes)
  {
    /*
    //cout << c << endl;
    c.display();
    cout << endl;
    */
  
  // c is compatible with classrooms ...)
    if (!classrooms.isEmpty() && classrooms.peekMin() <= c.start() )
    {
     // add c to schedule (depth does not increase
     // 1. remove current classroom
    classrooms.removeMin();
     // 2. update its available time
     
     // 3. put classroom back in heap
     classrooms.insert(c.finidh
    }
    else
      add one to number of classrooms ...
      put c in the new classroom
  }
  return 0;
}
