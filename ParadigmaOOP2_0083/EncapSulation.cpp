#include <iostream>
using namespace std;

class remoteLampu {
private:
    string sakLarNo[10];
public:
    void setSakLarNo(int i, string value) {
        sakLarNo[i] = value;
    }
    string getSakLarNo(int i) {
        return sakLarNo[i];
    }
};

