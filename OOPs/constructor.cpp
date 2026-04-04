#include<iostream>
#include<string>

//constructor is a special member function which is used to initialize the objects of a class
//it is called automatically when an object is created

class Teacher{ 
private:
    //Properties
    double salary;    
public:
    //Properties
    std::string name;
    std::string subjects;
    std::string department;


    Teacher(std::string name, std::string subjects, double salary){   //Constructor
        this->name = name;
        this->subjects = subjects;
        this->salary = salary;
        this->department = "MAths"; //LHS=> class property, RHS=> constructor parameter
    }

    Teacher(Teacher &t){   //Copy Constructor
        std::cout<<"made Copy Constructor called"<<std::endl;

        this->name = t.name;
        this->subjects = t.subjects;
        this->salary = t.salary;
        this->department = t.department;
    }
    


    //Methods
    void changedept(std::string newdept){
        department = newdept;
    }

    void changesalary(double newsalary){
        salary = newsalary;
    }   

    double getSalary(){
        return salary;
    }

    void getinfo(){
        std::cout<<"Name:"<<name<<std::endl;
        std::cout<<"Department:"<<department<<std::endl;
        std::cout<<"Subjects:"<<subjects<<std::endl;
        std::cout<<"Salary:"<<getSalary()<<std::endl;
    }

};


class account{
private:
    std::string password;
    std::string balance;  
public:
    std::string accountId;
    std::string username;
      
};



int main(){
    Teacher t1("Amey", "Data Structures and Algorithms", 50000);   //Constructor is called automatically when an object is created


    // Teacher t2("John", "Calculus", 60000);   //Constructor is called automatically again

    Teacher t2(t1);  //Constructor is called automatically when an object of the same class is created

    t1.getinfo();
    std::cout<<std::endl;

    t2.getinfo();

    return 0;
}