#include<iostream> 
#include<string> 

using namespace std; 

class Person  // base class / parent class 
{
    private:
        string name;  // 24 bytes 
        int age;  // 4 bytes 
    
        
    public: 
        Person( void ):name(""),age(0){
                cout<<"Person( void ):name(""),age(0)"<<endl; 
        } 
        Person(string name,int age):name(name),age(age){
                cout<<"Person(string name,int age):name(name),age(age)"<<endl; 
        }
        
        void showRecord( void  )
        {
               cout<<"Name  :   "<<this->name<<endl;
               cout<<"Age  :   "<<this->age<<endl; 
        }
}; 

class Employee : public Person // child class / derived class 
{
    private: 
        //string name;  // 24 
        //int age;  // 4 
        int empid; // 4 
        float salary; // 4 
    public: 
        Employee( void ):empid(0),salary(0){
             cout<<"Employee( void ):empid(0),salary(0)"<<endl;    
        }
        Employee(int empid, float salary):empid(empid),salary(salary){
             cout<<"Employee(int empid, float salary)"<<endl;    
        } 
        // this = &e 
        void displayRecord( void  )
        {
            this->showRecord( ); 
            cout<<"Empid :   "<<this->empid<<endl;
            cout<<"Salary :   "<<this->salary<<endl;
        }
     

};  


int main( )
{
    
    Employee e; 
    e.displayRecord( );  // e.displayRecord( &e ); 
    //e.showRecord( ); 
    return 0;  
}



