#include "MetaClass.h"
#include <iostream>

using namespace::std;

MetaClass::MetaClass(string className): m_className(className){
    cout << m_className;
}

void MetaClass::printClass(){
    cout << m_className;
}