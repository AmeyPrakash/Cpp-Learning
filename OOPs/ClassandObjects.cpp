#include<iostream>
#include<string>


//class is a user defined data type which has data members and member functions
//objects are instances of a class
//class is a blueprint for creating objects



//access specifiers: public, private, protected
//public: members are accessible from outside the class
//private: members are not accessible from outside the class
//protected: members are accessible from derived classes


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