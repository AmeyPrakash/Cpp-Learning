#include<iostream>
#include<vector>
#include<string>
#include<algorithm> 


enum class Priority{
    Low = 1,
    Medium = 2,
    High = 3,
};

class task{
    public:
        std::string tsk;
        bool done;
        Priority priority;

        task(){      //No name task
            tsk = "";
            done = false;
            priority = Priority::Low;
        }

        task(std::string t){    //Only name task
            tsk = t;
            done = false;
            priority = Priority::Low;
        }

        task(std::string t, Priority p){   //task with name and priority
            tsk = t;
            done = false;
            priority = p;
        }


        //func to get the priority as string.
        std::string fetchPriority(){
            switch(priority){
                case Priority::Low:
                return "low";
                case Priority::Medium:
                return "medium";
                case Priority::High:
                return "high";
                default:
                return "low";
            }
        }
        bool operator<(const task& other)const{     //operator overloading to sort the tasks based on priority.
            return this->priority < other.priority;  
        }
};

class feature {
public:
    std::vector<task> tasks;
    
    void addTask(const task& t){   //passed the direct object to avoid copy where const allows us to make no changes to the original object and also allows us to pass temporary objects.
        tasks.push_back(t);          //calls the copy constructor to add the task to the list.
        std::cout << "Task added successfully!" << std::endl;
    }

    //  function to print all tasks
    void displayTasks() {
        std::cout << "\nMy Tasks\n";
        if (tasks.empty()) {
            std::cout << "List is empty!\n";
            return;
        }

        for (size_t i = 0; i < tasks.size(); i++) {
            std::cout << (i + 1) << ". " << tasks[i].tsk 
                      << " | Priority: " << tasks[i].fetchPriority() 
                      << " | Done: " << (tasks[i].done ? "Yes" : "No") << "\n";
        }
        std::cout << "\n";
    }

    //function to sort the list using  overloaded '<' operator

    void sortTasks() {
        //sort automatically uses < to figure out the order
        sort(tasks.begin(), tasks.end());
        std::cout << "Tasks sorted by priority!\n";
    }
    void taskcomplete(int index){
        if(tasks.empty()){
            std::cout << "list is empty!"<< std::endl;
            return;
        }
        if(index <1 || index > tasks.size()){
            std::cout<<"invalid task" << std::endl;
            return;
        }
        tasks[index-1].done = true;
        std::cout << "task done"<<std::endl;

    }
};


int main(){
    feature myFeature;
    int choice;
    Priority p;
    while(true){
        std::string taskName;
        int priorityio;
        std::cout << "1.Add task \n 2.Display tasks \n 3.Sort tasks \n 4.completed task \n 5.exit \n Enter you choice::  "<<std::endl;
        std::cin >> choice;
        std::cin.ignore();
        switch(choice){
            case 1: {

            std::cout << "Enter task name::  ";
            std::getline(std::cin,taskName);
            std::cout << "Enetr priority 1 for low, 2 for medium, 3 for high::  ";
            std::cin>>priorityio;
            std::cin.ignore();
            Priority p = static_cast<Priority>(priorityio);
            myFeature.addTask(task(taskName,p));
            break;
            }

            case 2:{
            myFeature.displayTasks();
            break;
            }

            case 3:{
            myFeature.sortTasks();
            break;
            }

            case 4:{
            int index;
            std::cout << " Enter the task number to mark as completed::  ";
            std::cin >> index;
            std::cin.ignore();
            myFeature.taskcomplete(index);
            break;
            }

            case 5:{
            std::cout << "Exiting the program..."<<std::endl;
            return 0;
            }

            default:{
            std::cout << " Invalid choice! PLease try again."<< std::endl;
            }
        
        } 

    }


    // while(true){
    //     std::string taskName;
    //     int priorityio;
    //     std::cout << "Enter task name or exit ";
    //     std::getline(std::cin,taskName);
    //     if(taskName == "exit"){
    //         break;
    //     }
    //     std::cout << "Enter priority (1 for Low, 2 for medium, 3 for high)";
    //     std::cin >> priorityio;
    //     std::cin.ignore(); // to ignore the buffer of priorityio.
    //     Priority p = static_cast<Priority>(priorityio);  //enum value conversion
    //     myFeature.addTask(task(taskName,p));
    //     myFeature.displayTasks();
    // }






    // myFeature.addTask(task("Buy groceries", Priority::Medium));
    // myFeature.addTask(task("Finish project", Priority::High));
    // myFeature.addTask(task("Call mom", Priority::Low));

    // myFeature.displayTasks();

    // myFeature.sortTasks();
    // myFeature.displayTasks();

    return 0;
}