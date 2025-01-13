#include <iostream>
#include "pnc_map.h"
using std::cout, std::endl;

void mapTest()
{
    cout<< "This is pnc_map Test" <<endl;
    PNC_Map my_map;
    my_map.mapInfo();
}

int main()
{
    mapTest();
    return 0;
}