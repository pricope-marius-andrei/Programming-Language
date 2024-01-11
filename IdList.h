#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct IdInfo {
    string type;
    string name;
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
    void addVar(const char* type, const char* name );
    void addConst(const char* type, const char* name);
    void addArray(const char* type, const char* name, string size);
    void printVarsAndConstants();
    ~IdList();
};





