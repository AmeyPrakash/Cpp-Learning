#include<iostream>
#include<string> 

//encapsulation is the process of hiding the implementation details of a class from the user
//it is achieved by using access specifiers

class Teacher{ 
private:
    //Properties
    double salary;    
public:
    //Properties
    std::string name;
    std::string subjects;
    std::string department;
    


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

};

int main(){
    Teacher t1;
    t1.changedept(std::string("computer science"));
    t1.name = "Amey";
    t1.subjects = "Data Structures and Algorithms";
    t1.changesalary(50000);

    std::cout<<"Name:"<<t1.name<<std::endl;
    std::cout<<"Department:"<<t1.department<<std::endl;
    std::cout<<"Subjects:"<<t1.subjects<<std::endl;
    std::cout<<"Salary:"<<t1.getSalary()<<std::endl;


    return 0;
}