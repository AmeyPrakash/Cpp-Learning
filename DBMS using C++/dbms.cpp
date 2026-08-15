#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include<conio.h>

struct ID{
    std::string nameofstudent;
    std::string number;
    int gradepoint;

};
struct node{
    ID data;
    node* next;
    node* back;
};
class Studentdatabase{
private:
    node* first, *last, *new_Node;
    long int type;
    int counter; int flag = 0;
public:
    Studentdatabase(){first = last = NULL; counter = 1; }

    int Construct( long int i,std::string n,std::string x, long double y){
        if(NULL == first){
            type = i;
            new_Node = new node;
            new_Node -> data.nameofstudent = n;
            new_Node -> data.number = x;
            new_Node -> data.gradepoint = y;
            new_Node -> next = NULL;
            new_Node -> back = NULL;
            first = new_Node;
            last = new_Node;
            counter++;
            return 1;
        }
        else{
            std::cout << "Already Created \n";
            return 0;
        }
    }
    int inserElement(std::string n,std::string x, long double y){
        new_Node = new node;
        new_Node -> data.nameofstudent = n;
        new_Node -> data.number = x;
        new_Node -> data.gradepoint = y;
        if(NULL != first){
            switch(type){
            case 1:
                if(first -> data.nameofstudent[0] >= n[0]){             //compares the alphabetical order and inserts the student at first.
                    first -> back = new_Node;
                    new_Node -> next = first;
                    new_Node -> back = NULL;
                    first = new_Node;
                    counter++;
                    return 1;
                }
                else if(last -> data.nameofstudent[0] <= n[0]){         //here it inserts the student at last.
                    last->next = new_Node;
                    new_Node -> next = NULL;
                    new_Node -> back = last;
                    last = new_Node;
                    counter++;
                    return 1;
                }
                else{
                    node *current = first;                              // inserts in middle 
                    node *cur_next = current->next;
                    for( ; cur_next->next != NULL ; ){
                        current = current -> next;
                        cur_next = cur_next->next;
                        if(cur_next -> data.nameofstudent[0] >= n[0])
                            break;
                    }
                    cur_next->back = new_Node;
                    new_Node ->next = cur_next;
                    new_Node ->back = current;
                    current ->next = new_Node;
                    counter++;
                    return 1;

                }
                break;
            case 2:
                if(first -> data.number >= x){                          //here it compares the IDs (first)
                    first-> back = new_Node;
                    new_Node ->next = first;
                    new_Node ->back = NULL;
                    first = new_Node;
                    counter++;
                    return 1;
                }
                else if(last->data.number <= x){                         //last
                    last-> next = new_Node;
                    new_Node ->next = NULL;
                    new_Node->back = last;
                    last = new_Node;
                    counter++;
                    return 1;
                }
                else{
                    node* current = first;                              //Middle
                    node* cur_next = current -> next;

                    for(; cur_next ->next != NULL; ){
                        current = current ->next;
                        cur_next = cur_next->next;
                        if(cur_next-> data.number >= x){
                            break;
                        }
                    }
                        cur_next-> back = new_Node;
                        new_Node ->next = cur_next;
                        new_Node -> back = current;
                        current -> next = new_Node;
                        counter++;
                        return 1;
                }
                break;

            }
            
                
        }
        else {
            std::cout<< "Please create first.";
            return 0;
        }
    }
    int deleteElement(std::string x){                               //Delete a student
        if (NULL != first)                                          //DB is not empty?
        {
            node* del_first = first;
            node* del_last = last;
            node* del_next = del_first-> next;
            node* del_back = last -> back;
            
            if(first->data.number == x){                           // if the ID is of the First Student
                first = del_next;
                delete(del_first);
                counter--;
                return 1;
            }
            else if(last -> data.number == x){                      //if the ID is of last student
                last = del_back;
                last-> next = NULL;
                delete(del_last);
                counter--;
                return 1;
            }
            else{                                                   //if the ID is in Middle
                for(; del_first -> next != NULL; ){
                    del_first = del_first->next;
                    del_back = del_first->back;
                    del_next = del_first->next;

                    if(x == del_first->data.number){
                        del_next-> back = del_first->back;
                        del_back-> next = del_first->next;
                        delete(del_first);
                        flag = 1;
                        counter--;
                        return 1;

                    }
                }
            }
          
        }
        if(0 == flag){
            std::cout<< "ID inavlid\n";
            return 3;
        }
        else{
            std::cout<<"Database if empty";
            return 0;
        }

        
    }
    void print(void){
        std::cout<< "Student Name\t\tStudent ID\tNet GradePoint\n\n";
        node* print_Element = first;
        for(; print_Element != NULL ; ){
            std::cout<<print_Element->data.nameofstudent <<"\t" << print_Element->data.number<< "\t" << print_Element->data.gradepoint << std::endl;
            print_Element = print_Element-> next;       
        }
    }
    int save_file(void){
        node* save = first;
        int fs = 0;
        std::ofstream fout("save.txt");
        
        if(!fout.is_open()){
            std::cout<<"file could not be opened" << "save.txt" <<std::endl;
            return 0;
        }
        fout << "Student Name\t\tStudent ID\tNet GradePoint\n\n";

        for(; save != NULL; ){
            fout<< save->data.nameofstudent<< "\t"<< save->data.number<<"\t"<<save->data.gradepoint<<std::endl;
            save = save->next;
        }
    }
};