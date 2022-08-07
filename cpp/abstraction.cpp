// Abstraction - Hidding Complex things, ex : phone call and take pictures
// Abstraction - It is implemented using pure virtual functions in C++.

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


int main(){
    Employee e1 = Employee("Shakti" , "Mine", 25);
    Employee e2 = Employee("Krishna" , "His", 25);
    Employee e3 = Employee("Yash" , "Yashis", 25);
    // e1.introduce();
    // e2.introduce();
    // e3.introduce();
    e1.AskForPromotion();
    e2.AskForPromotion();
    e3.AskForPromotion();
    return 0;
}