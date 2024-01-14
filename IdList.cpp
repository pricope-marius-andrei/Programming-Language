#include "IdList.h"
#include <stdlib.h>
using namespace std;


void IdList::addVar(const char* type, const char*name, const char* initValue) {
    IdInfo var = {string(type), string(name)};

    if (initValue != nullptr) {
        var.value = string(initValue);
    }
    else {
        if (type == "int" || type == "float")
            var.value = "0";
        else
            if (type == "bool")
                var.value = "false";
            else
                var.value = "";
    }

    vars.push_back(var);
}

void IdList::updateVarValueNR(const char* name, const char* newValue) {
    string strName = string(name);
    for (IdInfo& v : vars) {
        if (v.name == strName) {
            v.value = string(newValue);
            return;
        }
    }
}

void IdList::updateVarValueID(const char* dest, const char* source) {
    string strDest = string(dest);
    string strSource = string(source);

    for (IdInfo& v : vars) {
        if (v.name == strDest) {
            for (const IdInfo& src : vars) {
                if (src.name == strSource) {
                    v.value = src.value;
                    return;
                }
            }
            return;
        }
    }
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

void IdList::addConst(const char* type, const char* name, const char* initValue) {
        IdInfo constant = {string(type), string(name)};
        constant.value = string(initValue);
        consts.push_back(constant);
}

bool IdList::existsArray(const char* s) {
    string strconst = string(s);
    for (const IdArray& a : arrays) {
        if (strconst == a.name) 
            return true;
    }
    return false;

}

void IdList::addArray(const char* type, const char* name, string size) {
    IdArray array = {string(type), string(name), size};
    arrays.push_back(array);
}

void IdList::getType(const char *id)
{
    for (const IdInfo& v : vars) {
        if(v.name == string(id))
        {
            cout << v.name  << " has type: " << v.type << endl;
            break;
        }
    }

    for (const IdInfo& c : consts) {
        if(c.name == string(id))
        {
            cout << c.name  << " has type: const " << c.type << endl;
            break;
        }
    }
    for (const IdArray& a : arrays) {
        if(a.name == string(id))
        {
            cout << a.name  << " has type: " << a.type << "[" << a.size << "]" << endl;
            break;
        }
    }
}

void IdList::getEval(const char* id) {
    for (const IdInfo& v : vars) {
        if (v.name == string(id)) {
            cout << v.name << " value: " << v.value << '\n';
        }
    }

    for (const IdInfo& c : consts) {
        if(c.name == string(id))
        {
            cout << c.name  << " value: " << c.value << endl;
            break;
        }
    }
}

string IdList::getValueForID(const char* id) {
    string strId = string(id);

    for (const IdInfo& v : vars) {
        if (v.name == strId) {
            return v.value;
        }
    }
    return string();
}

void IdList::printVarsAndConstants() {
    for (const IdInfo& v : vars) {
        cout << ' ' << v.type << " " << v.name << ' ' << v.value << "; ";
    }

    for (const IdInfo& c : consts) {
        cout << ' ' << c.type << " " << c.name << ' ' << c.value << "; ";
    }
    for (const IdArray& a : arrays) {
        cout << a.type << ' ' << a.name << "[" << a.size << "]" << endl;
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
            else 
            {
                cout << "Redefine a member of class:" <<  c.name << endl;
                exit(EXIT_FAILURE);
            }
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
            else {
                cout << "Redefine a method error in class:" << c.name << endl;
                exit(EXIT_FAILURE);
            }
        }
    }
}

void ClassList::addParamsConstructor(const char* class_name, const char *type, const char *name)
{
    for (Class &c : classes)
    {
        if(c.name == string(class_name))
        {
            if(!c.params_constructor.existsVar(name))
                c.params_constructor.addVar(type,name);
            else 
            {
                cout << "The parameter already defined!"<< endl;
                exit(EXIT_FAILURE);
            }
        }
    }
    
}

bool ClassList::isConstructor(const char* class_name, const char *id)
{
    return string(class_name) == string(id);
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
            else 
            {
                cout << "Redefine a parameter error in method:" << m.name << endl;
                exit(EXIT_FAILURE);
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
            else 
            {
                cout << "Redefine a variable error in method:" << m.name << endl;
                exit(EXIT_FAILURE);
            }
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
