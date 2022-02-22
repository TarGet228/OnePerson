#include "OnePers.h"
using namespace std;
int main()
{
    OnePers a("Taras", 2006);
    a.print();
  
    OnePers* pt = new OnePers("Valerka", 2005);
    pt->print();
    delete pt;
}