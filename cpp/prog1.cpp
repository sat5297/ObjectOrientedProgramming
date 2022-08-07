#include <bits/stdc++.h>
using namespace std;

class Employee{
    public:
        string Name;
        string Company;
        int Age;
        
        Employee(string name, string company, int age){
            Name = name;
            Company = company;
            Age = age;
        }

        void introduce(){
            cout << "Name " << Name << " " << "AGE " << Age << " " << "Company " << Company << endl;
        }
};


int main(){
    Employee e1 = Employee("Shakti" , "Mine", 25);
    Employee e2 = Employee("Krishna" , "His", 25);
    Employee e3 = Employee("Yash" , "Yashis", 25);
    e1.introduce();
    e2.introduce();
    e3.introduce();
    return 0;
}