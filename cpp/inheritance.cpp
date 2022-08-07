// Inheritance - subclass inherits the property of base class.

#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee : AbstractEmployee{
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

        void AskForPromotion(){
            if(Age >= 25){
                cout << Name << " got promoted !!\n";
            }else{
                cout << Name << " sorry better luck next time !!\n";
            }
        }
};

class Developer : public Employee {
    public:
        string favProgLang;

        Developer(string name, string company, int age, string lang):Employee(name, company, age){
            favProgLang = lang;
        }
        void fixBug(){
            cout << getName() << " fixed bug using " << favProgLang << " @ age of " << getAge() << endl;
        }
};

class Teacher : public Employee {
    public:
        string Subject;
        Teacher(string name, string company, int age, string subject):Employee(name, company, age){
            Subject = subject;
        }
        void prepareLesson(){
            cout << getName() << " is preparing " << Subject << " Lessson\n";
        }
};

int main(){
    Developer d = Developer("Shakti", "Mine", 23, "Java");
    d.fixBug();
    d.introduce();
    d.AskForPromotion();
    Teacher t = Teacher("Shakti", "Mine", 23, "Python");
    t.prepareLesson();
    t.AskForPromotion();
    return 0;
}