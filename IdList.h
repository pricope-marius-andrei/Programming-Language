#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct IdInfo {
    string type;
    string name;
};


class IdList {
    vector<IdInfo> vars;
    vector<IdInfo> consts;
   
    public:
    bool existsVar(const char* s);
    bool existsConst(const char* s);
    void addVar(const char* type, const char* name );
    void addConst(const char* type, const char* name);
    void printVarsAndConstants();
    ~IdList();
};


struct MethodsInfo {
    string type;
    string name;
    IdList parameters;
    IdList vars;
};

class MethodList {
    vector<MethodsInfo> methods;
    public:
    void addMethod(const char* type, const char *name);
    void addParameter(const char* method_name, const char* type, const char *name);
    void addVar(const char *method_name, const char* type, const char *name);
    bool existMethod(const char *name);
    void printMethods();
    ~MethodList();
};


struct Class {
    string name;
    IdList vars;
    MethodList methods;
};

class ClassList {
    vector<Class> classes;

    public:
    bool existClass(const char* s);
    void addClass(const char *s);
    void addVars(const char* class_name,const char* type, const char* name);
    void addMethods(const char* class_name, const char*type, const char* name);
    void printClasses();
    MethodList* getMethods(const char *class_name);
    ~ClassList();
};

