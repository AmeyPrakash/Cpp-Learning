#include<iostream>
#include<vector>
#include<string>

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