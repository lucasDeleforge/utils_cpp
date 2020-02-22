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

void MetaClass::print(ostream &flux) const{
    flux << m_beginDef;
    flux << m_classKeyWord + " ";
    flux << m_className + " ";
    flux << m_beginClass;
    flux << m_endClass;
    flux << m_endDef;
}

ostream &operator<<(ostream &flux, MetaClass const &metaClass){
    metaClass.print(flux);
    return flux;
}