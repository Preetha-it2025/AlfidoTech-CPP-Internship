#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    void setData(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }
    
    void displayData() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.setData("Preetha", 101, 95.5);
    s1.displayData();
    return 0;
}
