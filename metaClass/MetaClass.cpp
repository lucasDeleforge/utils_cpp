#include "MetaClass.h"
#include <iostream>
#include <string>
#include <boost/algorithm/string.hpp>

using namespace::std;

MetaClass::MetaClass(string className):
m_className(className),
m_classKeyWord("class"),
m_beginClass("{\n"),
m_endClass("};\n\n")
{
    string tmp_str;
    // Multiple definition protection
    tmp_str += "#ifndef DEF_" + boost::to_upper_copy<std::string>(className); 
    tmp_str += "\n";
    tmp_str += "#define DEF_" + boost::to_upper_copy<std::string>(className); 
    tmp_str += "\n\n";
    this->m_beginDef = tmp_str;
    this->m_endDef = "#endif\n";
}

string MetaClass::printClass(){
    string str;
    str += m_beginDef;
    str += m_classKeyWord + " ";
    str += m_className + " ";
    str += m_beginClass;
    str += m_endClass;
    str += m_endDef;
    return str;
}