#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:

    Student(string name, int age) {
        
        this->name = name;
        this->age = age;
    }

    void introduce() {
        cout << "Hi, I am " << this->name
             << " and I am " << this->age << " years old." << endl;
    }

    Student& olderBy(int years) {
        this->age += years;  
        return *this;        
    }
};

int main() {

    Student s("Alice", 20);

 
    s.introduce();

    s.olderBy(2).introduce();

    return 0;
}
