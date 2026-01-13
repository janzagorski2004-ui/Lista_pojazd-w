#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <fstream>
#include <sstream>

namespace JZ{
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
            if(d<1||d>31)
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
            if(d>1||d<13)
            {
                m_month= 0;
                std::cout<<"Invalid nuber ";
            }
            else
            {
                m_month=d;
                
            }
        }
        void setYear(int d){
            
            m_year=d;
            
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
        std::string printDate()
        {
            return std::to_string(getDay()) + "." + std::to_string(getMonth()) + "." + std::to_string(getYear());
        }
        std::string saveDate()
        {
            return std::to_string(getDay()) + ";" + std::to_string(getMonth()) + ";" + std::to_string(getYear());
        }
    };
    class Vehicle{
        public:
        int id;
        std::string name;
        Date race_date;
        int weight;
        int power;
        Vehicle()
        {
            const int id=0;
            const std::string& name="unknown";
            const Date& race_date();
            int weight=0;
            int power=0;
        }
        Vehicle(const int id, const std::string& name,const Date& race_date,int weight,int power): id(id), name(name),
        race_date(race_date),weight(weight),power(power){
    
        }
        std::string printVechicle()
        {
            return "Id: " + std::to_string(id) + " Name: " + name + " Date: " + race_date.printDate() + " Weight: " 
            + std::to_string(weight) + " kg " + " Power: " + std::to_string(power) + " HP";
        }
        std::string saveVechicle()
        {
            return std::to_string(id) + ";" + name + ";" + race_date.saveDate() + ";" 
            + std::to_string(weight) + ";" + std::to_string(power) + ";";
        }
    };

    class Car: public Vehicle{
        public:
        std::string drive;
        std::string engine;
        std::string bodyType; 
        int doors;
        int seats;
        Car()
        {
            const std::string& drive = "Unknown";
            const std::string& engine = "Unknown";
            const std::string& bodyType = "Unknown";
            int doors = 0;
            int seats = 0;
            
        }
        Car(const int id,const std::string& name,const Date& race_date,int weight,int power,const std::string& drive,
            const std::string& engine,const std::string& bodyType,int doors,int seats): Vehicle(id, name, race_date,
            weight, power),drive(drive),engine(engine),bodyType(bodyType),doors(doors),seats(seats){
            std::cout<<"Car instance has been created!"<<std::endl;
        }
        std::string printCar()
        {
            return printVechicle() + " Drive: " + drive + " Engine name: " + engine + " Body type: " + bodyType 
            + " Nuber of doors: " + std::to_string(doors) + " Number of seats: " + std::to_string(seats);
        }
        std::string saveCar()
        {
            return saveVechicle()+ drive + ";" + engine + ";" + bodyType 
            + ";" + std::to_string(doors) + ";" + std::to_string(seats) +";"+"CAR"+"\n";
        }
    };
    class Motorcycle : public Vehicle {
    public:
        bool abs;
        std::string motoType;
        Motorcycle()
        {
            bool abs = false;
            const std::string& motoType = "Unknown";
        }
        Motorcycle(const int id, const std::string& name,const Date& race_date,int weight,int power,bool abs,
            const std::string& motoType): Vehicle(id, name, race_date, weight, power),abs(abs),motoType(motoType){
            std::cout<<"Motorcycle instance has been created!"<<std::endl;  
        }
        std::string printMotorcycle()
        {
            return printVechicle() + " Abs: " + std::to_string(abs) + " Type of motorcycle: " + motoType;
        }
        std::string saveMotorcycle()
        {
            return saveVechicle()  + std::to_string(abs) + ";" + motoType+";"+"MOTO"+"\n";
        }
    };
}    
void clearBuffer() // Cleaning buffer function
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
void addVehicle(std::vector<JZ::Car>& cars, std::vector<JZ::Motorcycle>& motorcycles, int& id_counter)
{
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
    while(true)
    {
        std::cout<<"What did you raced"<<std::endl;
        std::cout<<"1. Car"<<std::endl;
        std::cout<<"2. Motorcycle"<<std::endl;
        std::cin>>a;
        if(a==1)
        {   
            std::cout<<"Enter data of the car"<<std::endl;
            
            clearBuffer(); 
            
            std::cout<<"Name: ";
            std::getline(std::cin, b);

            std::cout<<"Race day: ";
            while (!(std::cin >> m)||m<1||m>31) 
            { 
                std::cout << "Invalid input. Try again: "; 
                clearBuffer(); 
            }
            
            std::cout<<"Race month: ";
            while (!(std::cin >> n)||n<1||n>13) 
            {
                 std::cout << "Invalid input. Try again: "; 
                 clearBuffer(); 
            }
            
            std::cout<<"Race year: ";
            while (!(std::cin >> o)) 
            {
                std::cout << "Invalid input. Try again: "; 
                clearBuffer(); 
            }
            
            JZ::Date c(m,n,o);
            
            std::cout<<"Weight(kg): ";
            while (!(std::cin >> d)) 
            {
                std::cout << "Invalid input. Try again: "; 
                clearBuffer(); 
            }
            
            std::cout<<"Engine power(HP): ";
            while (!(std::cin >> e)) 
            {
                std::cout << "Invalid input. Try again: "; 
                clearBuffer(); 
            }
            
            clearBuffer();

            std::cout<<"Drive (e.g. FWD, RWD, AWD): ";
            std::getline(std::cin, f);
            
            std::cout<<"Engine name and size: ";
            std::getline(std::cin, g);
            
            std::cout<<"Body type: ";
            std::getline(std::cin, h);
            
            std::cout<<"Doors: ";
            while (!(std::cin >> i)) 
            {
                std::cout << "Invalid input. Try again: "; 
                clearBuffer(); 
            }
            
            std::cout<<"Seats: ";
            while (!(std::cin >> j)) 
            {
                std::cout << "Invalid input. Try again: "; 
                clearBuffer(); 
            }
            
            JZ::Car ca(id_counter,b,c,d,e,f,g,h,i,j);
            cars.push_back(ca);
            id_counter++;
            break;
        }
        else if(a==2)
        {
            std::cout<<"Enter data of the motorcycle"<<std::endl;
            
            clearBuffer(); 

            std::cout<<"Name: ";
            std::getline(std::cin, b);
            
            std::cout<<"Race day: ";
            while (!(std::cin >> m)||m<1||m>31) 
            {
                std::cout << "Invalid input. Try again: "; 
                clearBuffer(); 
            }
            
            std::cout<<"Race month: ";
            while (!(std::cin >> n)||n<1||n>13) 
            { 
                std::cout << "Invalid input. Try again: "; 
                clearBuffer(); 
            }
            
            std::cout<<"Race year: ";
            while (!(std::cin >> o)) 
            { 
                std::cout << "Invalid input. Try again: "; 
                clearBuffer(); 
            }
            
            JZ::Date c(m,n,o);
            
            std::cout<<"Weight(kg): ";
            while (!(std::cin >> d)) 
            { 
                std::cout << "Invalid input. Try again: ";
                clearBuffer(); 
            }
            
            std::cout<<"Engine power(HP): ";
            while (!(std::cin >> e)) 
            { 
                std::cout << "Invalid input. Try again: "; 
                clearBuffer(); 
            }
            
            std::cout<<"Has it ABS?(if not 0, if true 1): ";
            while (!(std::cin >> l)) 
            { 
                std::cout << "Invalid input. Try again: "; 
                clearBuffer(); 
            }
            
           
            clearBuffer();

            std::cout<<"Motor type: ";
            std::getline(std::cin, f);
            
            JZ::Motorcycle mo(id_counter,b,c,d,e,l,f);
            motorcycles.push_back(mo);
            id_counter++;
            break;
        }
        else
        {
            std::cout<<"Invalid number try again!"<<std::endl;
            clearBuffer();
        }
        
    }
}
void modifyVechicle(std::vector<JZ::Car>& cars, std::vector<JZ::Motorcycle>& motorcycles)
{   
    int a;
    std::string b;
    std::cout<<"Provide id numer of vechicle";
    std::cin>>a;
    for (JZ::Car &i : cars) 
    { 
        if(i.id==a)
        {   
            while(true)
            {
                std::cout<<std::endl << i.printCar()<<std::endl;
                std::cout<<"What do you want to modify?"<<std::endl;
                std::cout<<"1. Name"<<std::endl;
                std::cout<<"2. Date"<<std::endl;
                std::cout<<"3. Weight"<<std::endl;
                std::cout<<"4. Power"<<std::endl;
                std::cout<<"5. Drive"<<std::endl;
                std::cout<<"6. Engine"<<std::endl;
                std::cout<<"7. Body type"<<std::endl;
                std::cout<<"8. Number of doors"<<std::endl;
                std::cout<<"9. Number of seats"<<std::endl;
                std::cout<<"10. Exit modify option"<<std::endl;
                std::cin>>a;
                
                
                if(a == 1 || a == 5 || a == 6 || a == 7) 
                {
                    clearBuffer();
                }
                switch(a){
                case 1:
                    std::cout << "New Name: ";
                    std::getline(std::cin, b);
                    i.name = b;
                    break;
                case 2:
                    int m, n, o;
                    std::cout<<"Race day: ";
                    while (!(std::cin >> m)||m<1||m>31) 
                    { 
                        std::cout<<"Invalid number try again!"<<std::endl;
                        clearBuffer();
                    }
                    std::cout<<"Race month: ";
                    while (!(std::cin >> n)||n<1||n>13) 
                    { 
                        std::cout<<"Invalid number try again!"<<std::endl;
                        clearBuffer(); 
                    }
                    std::cout<<"Race year: ";
                    while (!(std::cin >> o)) 
                    { 
                        std::cout<<"Invalid number try again!"<<std::endl;
                        clearBuffer(); 
                    }
                    i.race_date = JZ::Date(m,n,o);
                    break;
                case 3:
                    std::cout << "New Weight: ";
                    while (!(std::cin>>a)) 
                    {
                        std::cout<<"Invalid number try again!"<<std::endl; 
                        clearBuffer(); 
                    }
                    i.weight = a;
                    break;
                case 4:
                    std::cout << "New Power: ";
                    while (!(std::cin>>a)) 
                    {
                        std::cout<<"Invalid number try again!"<<std::endl; 
                        clearBuffer(); 
                    }
                    i.power = a;
                    break;
                case 5:
                    std::cout << "New Drive: ";
                    std::getline(std::cin, b);
                    i.drive = b;
                    break;
                case 6:
                    std::cout << "New Engine: ";
                    std::getline(std::cin, b);
                    i.engine = b;
                    break;
                case 7:
                    std::cout << "New Body Type: ";
                    std::getline(std::cin, b);
                    i.bodyType = b;
                    break;
                case 8:
                    std::cout << "New Doors: ";
                    while (!(std::cin>>a)) 
                    {
                        std::cout<<"Invalid number try again!"<<std::endl; 
                        clearBuffer(); 
                    }
                    i.doors = a;
                    break;
                case 9:
                    std::cout << "New Seats: ";
                    while (!(std::cin>>a)) 
                    {
                        std::cout<<"Invalid number try again!"<<std::endl; 
                        clearBuffer(); 
                    }
                    i.seats = a;
                    break;
                case 10:
                    return;
                default:
                    std::cout<<"Invalid option!"<<std::endl;
                    clearBuffer();
                    break;
                }
            }
        }
    }
    
    for (JZ::Motorcycle &i : motorcycles) 
    { 
        if(i.id==a)
        {   
            while(true)
            {
                std::cout<<std::endl << i.printMotorcycle()<<std::endl;
                std::cout<<"What do you want to modify?"<<std::endl;
                std::cout<<"1. Name"<<std::endl;
                std::cout<<"2. Date"<<std::endl;
                std::cout<<"3. Weight"<<std::endl;
                std::cout<<"4. Power"<<std::endl;
                std::cout<<"5. If it has ABS"<<std::endl;
                std::cout<<"6. Motorcycle type"<<std::endl;
                std::cout<<"7. Exit modify option"<<std::endl;
                std::cin>>a;
                
                
                if(a == 1 || a == 6) 
                {
                    clearBuffer();
                }
                switch(a){
                case 1:
                    std::cout << "New Name: ";
                    std::getline(std::cin, b);
                    i.name = b;
                    break;
                case 2:
                    int m, n, o;
                    std::cout<<"Race day: ";
                    while (!(std::cin >> m)||m<1||m>31) 
                    {
                        std::cout<<"Invalid number try again!"<<std::endl;
                        clearBuffer(); 
                    }
                    std::cout<<"Race month: ";
                    while (!(std::cin >> n)||n<1||n>13) 
                    {
                        std::cout<<"Invalid number try again!"<<std::endl;
                        clearBuffer(); 
                    }
                    std::cout<<"Race year: ";
                    while (!(std::cin >> o)) 
                    {
                        std::cout<<"Invalid number try again!"<<std::endl;
                        clearBuffer(); 
                    }
                    i.race_date = JZ::Date(m,n,o);
                    break;
                case 3:
                    std::cout << "New Weight: ";
                    while (!(std::cin>>a)) 
                    {
                        std::cout<<"Invalid number try again!"<<std::endl;
                        clearBuffer(); 
                    }
                    i.weight = a;
                    break;
                case 4:
                    std::cout << "New Power: ";
                    while (!(std::cin>>a)) 
                    {
                        std::cout<<"Invalid number try again!"<<std::endl;
                        clearBuffer(); 
                    }
                    i.power = a;
                    break;
                case 5:
                    bool c;
                    std::cout << "ABS (0/1): ";
                    while (!(std::cin>>c)) 
                    {
                        std::cout<<"Invalid number try again!"<<std::endl;
                        clearBuffer(); 
                    }
                    i.abs = c;
                    break;
                case 6:
                    std::cout << "New Type: ";
                    std::getline(std::cin, b);
                    i.motoType = b;
                    break;
                case 7:
                    return;
                default:
                    std::cout<<"Invalid option!"<<std::endl;
                    clearBuffer();
                    break;
                }
            }
        }
    }
    std::cout<<"ID not found!" << std::endl;
}
void deleteVehicle(std::vector<JZ::Car>& cars, std::vector<JZ::Motorcycle>& motorcycles)
{   
    int a;
    std::cout<<"Provide id numer of vechicle";
    std::cin>>a;
    int d = 0;
    for (JZ::Car &i : cars) 
    {

        if(i.id==a)
        {   
            cars.erase(cars.begin()+d);
            break;
        }
        d++;
    }
    d = 0;
    for (JZ::Motorcycle &i : motorcycles) 
    { 
        if(i.id==a)
        {   
            motorcycles.erase(motorcycles.begin()+d);
            break;
        }
        d++;
    }
    std::cout<<"ID not found!" << std::endl;
}
void safeToFile(std::vector<JZ::Car>& cars, std::vector<JZ::Motorcycle>& motorcycles)
{
    std::ofstream Program_Data("Raced_vehicles_Program_data.txt");
    for (auto& i : cars) 
    { 
        Program_Data<<i.saveCar();
    }
    for (auto& i : motorcycles) 
    { 
        Program_Data<<i.saveMotorcycle();
    }
    Program_Data.close();
}
void readFromFile(std::vector<JZ::Car>& cars, std::vector<JZ::Motorcycle>& motorcycles, int& id_counter)
{   
    std::ifstream Program_Data("Raced_vehicles_Program_data.txt");
    std::string line;
    
    while (std::getline (Program_Data, line)) 
    {
        std::vector<std::string> result;
        std::stringstream ss(line);
        std::string field;

        while (std::getline(ss, field, ';')) 
        {
            result.push_back(field);
        }
        if(result.back()=="CAR")
        {
            JZ::Car ca(std::stoi(result[0]),result[1],JZ::Date(std::stoi(result[2]),std::stoi(result[3]),
            std::stoi(result[4])),std::stoi(result[5]),std::stoi(result[6]),result[7],result[8],result[9],
            std::stoi(result[10]),std::stoi(result[11]));
            cars.push_back(ca);
        }
        else if (result.back()=="MOTO")
        {
            JZ::Motorcycle ca(std::stoi(result[0]),result[1],JZ::Date(std::stoi(result[2]),std::stoi(result[3]),
            std::stoi(result[4])),std::stoi(result[5]),std::stoi(result[6]),std::stoi(result[7]),result[8]);
            motorcycles.push_back(ca);
        }
        
        if(std::stoi(result[0])>id_counter){
            id_counter = std::stoi(result[0]);
        }
    }


    Program_Data.close();
}
int main()
{   
    std::vector<JZ::Car> cars;
    std::vector<JZ::Motorcycle> motorcycles;
    int id_counter = 0;
    readFromFile(cars,motorcycles,id_counter);
    while(true)
    {
        int a;
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
                addVehicle(cars,motorcycles,id_counter);
                break;
            case 2:
                modifyVechicle(cars,motorcycles);
                break;
            case 3:
                deleteVehicle(cars,motorcycles);
                break;
            case 4:
                for (auto& i : cars) 
                { 
                    std::cout<<i.printCar()<<std::endl;
                }
                for (auto& i : motorcycles) 
                { 
                    std::cout<<i.printMotorcycle()<<std::endl;
                }
                break;
            case 5:
                safeToFile(cars,motorcycles);
                return 0;
            default:
                std::cout<<"Invalid option!"<<std::endl;
                clearBuffer();
                break;
                
        }
    }
}