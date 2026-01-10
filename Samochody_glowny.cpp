#include <iostream>
#include <string>
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
   
    void setDay(d){
        if(d>1&&d<32)
        {
            
            m_day= 0;
            return std::cout<<"Invalid nuber"
        }
        else
        {
            m_day=d;
        }
    }
    void setMonth(d){
        if(d>1&&d<13)
        {
            m_month= 0;
            return std::cout<<"Invalid nuber"
        }
        else
        {
            m_month=d;
            return std::cout<<"Invalid nuber"
        }
    }
    void setYear(d){
        if(y<1)
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
}
class Vehicle{
    public:
    std::string name;
    Date race_date;
    int weight;
    int power;
    Vehicle(const std::string& name,const Date& race_date,int weight,int power): name(name),race_date(race_date),weight(weight),power(power){

    }
};

class Car: public Vehicle{
    public:
    std::string drive;
    std::string engine;
    std::string bodyType; 
    int doors;
    int seats;
    Car(const std::string& name,const Date& race_date,int weight,int power,const std::string& drive,const std::string& engine,const std::string& bodyType,int doors,int seats): Vehicle(name, race_date, weight, power),drive(drive),engine(engine),bodyType(bodyType),doors(doors),seats(seats){
        std::cout<<"Car instance has been created!"<<endl;
    }
};
class Motorcycle : public Vehicle {
public:
    bool abs;
    std::string motoType;
    Motorcycle(const std::string& name,const Date& race_date,int weight,int power,bool abs,const std::string& motoType): Vehicle(name, race_date, weight, power),abs(abs),motoType(motoType){
        std::cout<<"Motocycle instance has been created!"<<endl;  
    }
};
