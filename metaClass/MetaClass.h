/*
Meta class representing a C++ class
*/
#ifndef DEF_METACLASS
#define DEF_METACLASS

#include <string>
#include <ostream>

class MetaClass {
    public:
    MetaClass(std::string className);
    void print(std::ostream &flux) const;
    
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

std::ostream &operator<<(std::ostream &flux, MetaClass const &metaClass);

#endif