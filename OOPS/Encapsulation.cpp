#include <iostream>
using namespace std;

class Employee{
    private:
    string Name;
    string Company;
    int Age;


    public:
    //Setter and Getter
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }

    Employee(string n,string c,int a){
        Name = n;
        Company = c;
        Age = a;
    }

    void Introduce(){
        cout << "Name: " << Name << endl;
        cout << "company: " << Company << endl;
        cout << "age: " << Age << endl;
    }
};
int main(){

    Employee obj("Divyanshu", "CWdsd", 21);
    //obj.Introduce();
    cout << obj.getName();




    return 0;
}