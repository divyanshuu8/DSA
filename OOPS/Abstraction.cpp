#include <iostream>
using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee: AbstractEmployee{
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

    void AskForPromotion(){
        if(Age > 30){
            cout << Name << " got Promoted.";

        }else{
            cout << "Sorry";
        }
    }
};
int main(){

    Employee obj("Divyanshu", "CWdsd", 31);
    //obj.Introduce();
    obj.AskForPromotion();

    return 0;
}