#ifndef JZ_CAR_HPP
#define JZ_CAR_HPP

#include "Vehicle.hpp"

namespace JZ {

/**
 * \brief Represents a car.
 */
class Car : public Vehicle {
public:
    std::string drive;     ///< Drive type (FWD, RWD, AWD)
    std::string engine;    ///< Engine description
    std::string bodyType;  ///< Body type
    int doors;             ///< Number of doors
    int seats;             ///< Number of seats

    /**
     * \brief Default constructor.
     */
    Car();

    /**
     * \brief Constructs a Car with full specification.
     */
    Car(int id,
        const std::string& name,
        const Date& race_date,
        int weight,
        int power,
        const std::string& drive,
        const std::string& engine,
        const std::string& bodyType,
        int doors,
        int seats);

    /**
     * \brief Returns formatted car info for display.
     */
    std::string printCar() const;

    /**
     * \brief Returns formatted car data for CSV saving.
     */
    std::string saveCar() const;
};

} // namespace JZ

#endif //JZ_CAR_HPP
