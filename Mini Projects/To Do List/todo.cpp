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
    
    void addTask(const task& t){    //passed the direct object to avoid copy where const allows us to make no changes to the original object and also allows us to pass temporary objects.
        tasks.push_back(t);          //calls the copy constructor to add the task to the list.
        std::cout << "Task added successfully!" << std::endl;
    }

    //  function to print all tasks
    void displayTasks() {
        std::cout << "\n+++ My Tasks +++\n";
        if (tasks.empty()) {
            std::cout << "List is empty!\n";
            return;
        }

        for (size_t i = 0; i < tasks.size(); i++) {
            std::cout << (i + 1) << ". " << tasks[i].tsk 
                      << " | Priority: " << tasks[i].fetchPriority() 
                      << " | Done: " << (tasks[i].done ? "Yes" : "No") << "\n";
        }
        std::cout << "+++++++++++++++\n";
    }

    //function to sort the list using your overloaded '<' operator

    void sortTasks() {
        //sort automatically uses < to figure out the order
        sort(tasks.begin(), tasks.end());
        std::cout << "Tasks sorted by priority!\n";
    }
};


// int main(){
//     feature myFeature;

//     myFeature.addTask(task("Buy groceries", Priority::Medium));
//     myFeature.addTask(task("Finish project", Priority::High));
//     myFeature.addTask(task("Call mom", Priority::Low));

//     myFeature.displayTasks();

//     myFeature.sortTasks();
//     myFeature.displayTasks();

//     return 0;
// }