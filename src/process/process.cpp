#include <iostream>
#include "process.h"
using std::cout, std::endl;

void Process::planProcess()
{
    cout<< "This is planProcess" <<endl;
    my_map.mapInfo();
    cout<< "planing success!" <<endl;
}