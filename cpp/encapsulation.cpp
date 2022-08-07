// Encapsulation - Wrapping Up of Data so that they cannot be changed by other classes.

#include <bits/stdc++.h>
using namespace std;

class Employee{
    private:
        string Name;
        string Company;
        int Age;

    public:
        void setName(string name){
            Name = name;
        }
        string getName(){
            return Name;
        }
        void setCompany(string company){
            Company = company;
        }
        string getCompany(){
            return Company;
        }
        void setAge(int age){
            Age = age;
        }
        int getAge(){
            return Age;
        }
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
    cout << e1.getName() << e1.getAge() << e1.getCompany() << endl;
    e1.setAge(23);
    e1.setCompany("google");
    e1.setName("Shakti Ratan");
    cout << e1.getName() << e1.getAge() << e1.getCompany() << endl;
    e2.introduce();
    e3.introduce();
    return 0;
}