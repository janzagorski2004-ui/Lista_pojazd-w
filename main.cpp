#include <iostream>
#include <string>
#include <vector>
class Date{
    private:
    int m_day;
    int m_month;
    int m_year;
    public:
    Date(){
        m_day=0;
        m_month=0;
        m_year=0;
    }
    Date(int d, int m ,int y):m_day(d), m_month(m), m_year(y)
    {

    }
   
    void setDay(int d){
        if(d<1&&d>31)
        {
            
            m_day= 0;
            std::cout<<"Invalid nuber ";
        }
        else
        {
            m_day=d;
        }
    }
    void setMonth(int d){
        if(d>1&&d<13)
        {
            m_month= 0;
            std::cout<<"Invalid nuber ";
        }
        else
        {
            m_month=d;
            std::cout<<"Invalid nuber ";
        }
    }
    void setYear(int d){
        if(d<1)
        {
            m_year= 0;
            
        }
        else
        {
            m_year=d;
        }
    }
    int getDay(){
        return m_day;
    }
    int getMonth(){
        return m_month;
    }
    int getYear(){
        return m_year;
    }
};
class Vehicle{
    public:
    int id;
    std::string name;
    Date race_date;
    int weight;
    int power;
    Vehicle(const int id, const std::string& name,const Date& race_date,int weight,int power): id(id), name(name),race_date(race_date),weight(weight),power(power){

    }
};

class Car: public Vehicle{
    public:
    std::string drive;
    std::string engine;
    std::string bodyType; 
    int doors;
    int seats;
    Car(const int id,const std::string& name,const Date& race_date,int weight,int power,const std::string& drive,const std::string& engine,const std::string& bodyType,int doors,int seats): Vehicle(id, name, race_date, weight, power),drive(drive),engine(engine),bodyType(bodyType),doors(doors),seats(seats){
        std::cout<<"Car instance has been created!"<<std::endl;
    }
};
class Motorcycle : public Vehicle {
public:
    bool abs;
    std::string motoType;
    Motorcycle(const int id, const std::string& name,const Date& race_date,int weight,int power,bool abs,const std::string& motoType): Vehicle(id, name, race_date, weight, power),abs(abs),motoType(motoType){
        std::cout<<"Motorcycle instance has been created!"<<std::endl;  
    }
};
int main()
{  while(true)
    {
        std::vector<Car> cars;
        std::vector<Motorcycle> motorcycles;
        int a;
        std::string b;
        int d;
        int e;
        std::string f;
        std::string g;
        std::string h;
        int i;
        int j;
        bool l;
        int m;
        int n;
        int o;
        int id_counter = 0;
        std::cout<<"Main menu"<<std::endl;
        std::cout<<"Choose option"<<std::endl;
        std::cout<<"1. Add raced vehicle"<<std::endl;
        std::cout<<"2. Modify raced vehicle"<<std::endl;
        std::cout<<"3. Remove raced vehicle"<<std::endl;
        std::cout<<"4. Print all raced vehicles to terminal"<<std::endl;
        std::cout<<"5. Save and exit"<<std::endl;
        std::cin>>a;
        switch(a){
            case 1:
                while(true)
                {
                    std::cout<<"What did you raced"<<std::endl;
                    std::cout<<"1. Car"<<std::endl;
                    std::cout<<"2. Motorcycle"<<std::endl;
                    if(a==1)
                    {   
                        std::cout<<"Enter data of the car"<<std::endl;
                        std::cout<<"Name: ";
                        while (!(std::cin>>b))
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear();
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        std::cout<<"Race day: ";
                        while (!(std::cin >> m)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        std::cout<<"Race month: ";
                        while (!(std::cin >> n)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        std::cout<<"Race year: ";
                        while (!(std::cin >> o)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        Date c(m,n,o);
                        std::cout<<"Weight(kg): ";
                        while (!(std::cin >> d)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        std::cout<<"Engine power(HP): ";
                        while (!(std::cin >> e)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        std::cout<<"Drive (FWD,RWD,AWD): ";
                        while (!(std::cin >> f)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        std::cout<<"Engine name and size: ";
                        while (!(std::cin >> g)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        std::cout<<"Body type: ";
                        while (!(std::cin >> h)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        };
                        std::cout<<std::endl;
                        std::cout<<"Doors: ";
                        while (!(std::cin >> i)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        std::cout<<"Seats: ";
                        while (!(std::cin >> j)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        Car ca(id_counter,b,c,d,e,f,g,h,i,j);
                        cars.push_back(ca);
                        id_counter++;
                        break;
                    }
                    else if(a==2)
                    {
                        std::cout<<"Enter data of the motorcycle"<<std::endl;
                        std::cout<<"Name: ";
                        std::cout<<std::endl;
                        std::cout<<"Race day: ";
                        while (!(std::cin >> m)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        std::cout<<"Race month: ";
                        while (!(std::cin >> n)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        std::cout<<"Race year: ";
                        while (!(std::cin >> o)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        Date c(m,n,o);
                        std::cout<<"Weight(kg): ";
                        while (!(std::cin >> d)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        std::cout<<"Engine power(HP): ";
                        while (!(std::cin >> e)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        std::cout<<"Has it ABS?(if not 0, if true 1): ";
                        while (!(std::cin >> l)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        };
                        std::cout<<std::endl;
                        std::cout<<"Motor type: ";
                        while (!(std::cin >> f)) 
                        {  
                            std::cout << "Invalid input. Try again: ";
                            std::cin.clear(); 
                            std::cin.ignore(10000, '\n'); 
                        }
                        std::cout<<std::endl;
                        Motorcycle mo(id_counter,b,c,d,e,l,f);
                        motorcycles.push_back(mo);
                        id_counter++;
                        break;
                    }
                    else
                    {
                        std::cout<<"Invalid number try again!";
                        
                    }
                    
                }
                break;
            case 4:
                for (auto i : cars) 
                { 
                    
                }
                break;
        }
    }
}
