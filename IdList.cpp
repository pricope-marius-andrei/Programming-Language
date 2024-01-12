#include "IdList.h"
using namespace std;

void IdList::addVar(const char* type, const char*name) {
    IdInfo var = {string(type), string(name)};
    vars.push_back(var);
}

bool IdList::existsVar(const char* var) {
    string strvar = string(var);
     for (const IdInfo& v : vars) {
        if (strvar == v.name) { 
            return true;
        }
    }
    return false;
}

bool IdList::existsConst(const char* s) {
    string strconst = string(s);
    for (const IdInfo& c : consts) {
        if (strconst == c.name) 
            return true;
    }
    return false;

}

void IdList::addConst(const char* type, const char* name) {
        IdInfo constant = {string(type), string(name)};
        consts.push_back(constant);
}

void IdList::printVarsAndConstants() {
    for (const IdInfo& v : vars) {
        cout << ' ' << v.type << " " << v.name << ' ';
    }

    for (const IdInfo& c : consts) {
        cout << ' ' << c.type << " " << c.name << ' ';
    }
}

IdList::~IdList() {
    vars.clear();
}

bool ClassList::existClass(const char *s)
{
    string strconst = string(s);
    for (const Class& c : classes) {
        if (strconst == c.name) 
            return true;
    }
    return false;
}

void ClassList::addClass(const char *s)
{
    IdList ids;
    MethodList m;
    Class var = {string(s), ids,m};
    classes.push_back(var);
}

void ClassList::addVars(const char* class_name,const char *type, const char *name)
{
    IdInfo var = {string(type), string(name)};
    for (Class& c : classes) {
        if(c.name == string(class_name))
        {
            if(!c.vars.existsVar(name))
                c.vars.addVar(type,name);
        }
    }
}

void ClassList::addMethods(const char *class_name, const char *type, const char *name)
{
    for(Class &c : classes)
    {
        if(c.name == string(class_name))
        {
            if(!c.methods.existMethod(name))
                c.methods.addMethod(type,name);
        }
    }
}

MethodList* ClassList::getMethods(const char* class_name)
{
    for(Class &c : classes)
    {
        if(c.name == string(class_name))
        {
            return &c.methods; 
        }
    }

    return nullptr;
}

void ClassList::printClasses()
{
    for (Class& c : classes) {
        cout << "Clasa " << c.name << " cu variabilele: ";
        c.vars.printVarsAndConstants();
        cout << "\nsi metodele:\n";
        c.methods.printMethods();
    }
}

ClassList::~ClassList()
{
}

void MethodList::addMethod(const char *type, const char *name)
{
    IdList params;
    IdList vars;
    MethodsInfo mi = {string(type),string(name), params,vars};
    methods.push_back(mi);
}

void MethodList::addParameter(const char* method_name, const char *type, const char *name)
{
    for (MethodsInfo& m : methods) {
        if(m.name == string(method_name))
        {
            if(!m.parameters.existsVar(name)) {
                m.parameters.addVar(type,name);
            }
        }
    }
}

void MethodList::addVar(const char *method_name, const char *type, const char *name)
{
    for (MethodsInfo& m : methods) {
        if(m.name == string(method_name))
        {
            if(!m.vars.existsVar(name))
                m.vars.addVar(type,name);
        }
    }
}

bool MethodList::existMethod(const char *name)
{
    string strvar = string(name);
     for (const MethodsInfo& m : methods) {
        if (strvar == m.name) { 
            return true;
        }
    }
    return false;
}

void MethodList::printMethods()
{
    for(MethodsInfo& m : methods) {
        cout << m.type << ' ' << m.name << '(';
        m.parameters.printVarsAndConstants();
        cout << ") {\n";
        m.vars.printVarsAndConstants();
        cout << "\n}\n";   
    }
}

MethodList::~MethodList()
{
}
