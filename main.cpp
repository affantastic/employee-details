#include <iostream>
using namespace std;
class employee{
    int id;
    string name;
    double salary;
public:
employee(int id,string name,double salary){
    this->id=id;
    this->name=name;
    this->salary=salary;
    }
friend void displaydetails(employee &obj);
friend void calculatesalary(employee &obj);
friend void updatesalary(employee &obj, double newSalary);

};

void display (){
    cout<<"Press 1 to Display Details"<<endl;
    cout<<"Press 2 to Calculate Salary"<<endl;
    cout<<"Press 3 to Update Salary"<<endl;
    cout<<"Press 4 to Exit"<<endl;
}

void displaydetails(employee &obj){

    cout<<"Employee Name: "<< obj.name<<endl;
    cout<<"Employee Id: "<< obj.id<<endl;
    cout<<"Employee Monthly salary: $ "<< obj.salary<<endl;
}

void calculatesalary(employee &obj){
    cout<<"Annual Salary : "<<obj.salary*12<<endl;
}

void updatesalary(employee &obj, double newSalary){

    obj.salary=obj.salary+newSalary;
    cout<<"Updated Salary : "<<obj.salary<<endl;
}
main(){
    employee obj(145,"Affan",1200);
    int choice;
    double addedSalary;
    do{
        display();
        cout<<"Enter your Choice : ";
        cin>>choice;
    switch(choice){
        case 1:
        displaydetails(obj);
        break;
        case 2:
        calculatesalary(obj);
        break;
        case 3:
        cout<<"Enter added salary: ";
        cin>>addedSalary;
        updatesalary(obj, addedSalary);
        break;
        case 4:
        cout<<"Program Exited";
        break;
        default:
        cout<<"Enter Valid Choice.";
    }

}
    while(choice!=4);
}
