#include <iostream>
#include "MetaClass.h"
#include <fstream>

using namespace std;


int main(int argc, char *argv[]){
    // If there are arguments, use command line
    ofstream headerFlux("./test.h");
    if(argc > 1){
        MetaClass c1(argv[1]);
        headerFlux << c1;
    }
    // Else run the GUI creator

}