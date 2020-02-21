/*
Meta class representing a C++ class
*/
#ifndef DEF_METACLASS
#define DEF_METACLASS

#include <string>

class MetaClass {
    public:
    MetaClass(std::string className);
    void printClass();
    
    protected:
    // Multi def protection
    std::string m_beginDef;
    std::string m_endDef;
    // Class name
    std::string m_className;
    // Class keywords
    std::string m_classKeyWord;
    std::string m_beginClass;
    std::string m_endClass;

};

#endif