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





