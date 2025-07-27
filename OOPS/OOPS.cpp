#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    string company;
    int age;

    Employee(string n,string c,int a){
        name = n;
        company = c;
        age = a;
    }

    void Introduce(){
        cout << "Name: " << name << endl;
        cout << "company: " << company << endl;
        cout << "age: " << age << endl;
    }
};
int main(){

    Employee obj("Divyanshu", "CWdsd", 21);
    obj.Introduce();




    return 0;
}