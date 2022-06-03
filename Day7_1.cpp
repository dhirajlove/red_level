#include<iostream> 
#include<string> 

using namespace std; 

class Person 
{
    private:
        string name;  // 24 bytes 
        int age;  // 4 bytes 
    public: 
        Person( void ):name(""),age(0){

        } 
        Person(string name,int age):name(name),age(age){

        }
        void showRecord( void  )
        {
               cout<<"Name  :   "<<this->name<<endl;
               cout<<"Age  :   "<<this->age<<endl; 
        }
}; 

class Employee
{
    private: 
        string name;  // 24 
        int age;  // 4 
        int empid; // 4 
        float salary; // 4 
    public: 
        Employee( void ):name(""),age(0),empid(0),salary(0){

        }
        Employee(string name, int age , int empid, float salary):name(name),
        age(age),empid(empid),salary(salary){

        } 
        void displayRecord( void  )
        {
            cout<<"Name :   "<<this->name<<endl;
            cout<<"Age :   "<<this->age<<endl; 
            cout<<"Empid :   "<<this->empid<<endl;
            cout<<"Salary :   "<<this->salary<<endl;
        }

};  


int main( )
{
    //Employee e;  
    Employee emp("Ketan",30,1,10000);
    emp.displayRecord( );   
    
    return 0; 
}



int main3( )
{
    Employee e; 
    size_t size = sizeof(e); 
    cout<<"Size :   "<<size;  
    return 0; 

}

int main2( )
{
    //Person p; 
    Person p("Ketan",30);  
    p.showRecord( );  
    return 0; 
}


int main1( )
{
    Person p; 
    size_t size = sizeof(p); 
    cout<<"Size :   "<<size;  
    return 0; 
}


