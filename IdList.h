#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct IdInfo {
    string type;
    string name;
    string value;
};

struct IdArray {
    string type;
    string name;
    string size;
};


class IdList {
    vector<IdInfo> vars;
    vector<IdInfo> consts;
    vector<IdArray> arrays;
   
    public:
    bool existsVar(const char* s);
    bool existsConst(const char* s);
    bool existsArray(const char* s);
    void addVar(const char* type, const char* name, const char* initValue = nullptr);
    void updateVarValueNR(const char* name, const char* newValu);
    void updateVarValueID(const char* dest, const char* source);
    void addConst(const char* type, const char* name, const char* initValue);
    void addArray(const char* type, const char* name, string size);
    void getType(const char* id);
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
    IdList params_constructor;
};

class ClassList {
    vector<Class> classes;

    public:
    bool existClass(const char* s);
    void addClass(const char *s);
    void addVars(const char* class_name,const char* type, const char* name);
    void addMethods(const char* class_name, const char*type, const char* name);
    void addParamsConstructor(const char* class_name, const char* type, const char* name);
    bool isConstructor(const char* class_name, const char *id);
    void printClasses();
    MethodList* getMethods(const char *class_name);
    ~ClassList();
};

