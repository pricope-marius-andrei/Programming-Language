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

void IdList::addArray(const char* type, const char* name, string size) {
    IdArray array = {string(type), string(name), size};
    arrays.push_back(array);
}

void IdList::printVarsAndConstants() {
    cout << "Variables:" << endl;
    for (const IdInfo& v : vars) {
        cout << "name: " << v.name << ", type: " << v.type << endl;
    }

    cout << "Constants:" << endl;
    for (const IdInfo& c : consts) {
        cout << "name: " << c.name << ", type: " << c.type << endl;
    }

    cout << "Arrays:" << endl;
    for (const IdArray& a : arrays) {
        cout << "name: " << a.name << ", type: " << a.type << ", size: " << a.size << endl;
    }

}



IdList::~IdList() {
    vars.clear();
}











