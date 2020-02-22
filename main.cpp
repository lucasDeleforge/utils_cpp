#include <iostream>
#include "MetaClass.h"

using namespace std;


int main(int argc, char *argv[]){
    // If there are arguments, use command line
    if(argc > 1){
        MetaClass c1(argv[1]);
        cout << c1;
    }
    // Else run the GUI creator

}