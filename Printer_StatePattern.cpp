// Author: Vahid Vaisi

#include <iostream>
#include "Printer.h"
using namespace std;
 
int main()
{
    Printer* printer = new Printer();

    for (int i = 0; i <= 100; i++)
        printer->step();
    
    delete printer;
    
    return 0;
}

 
