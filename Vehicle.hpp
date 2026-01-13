#ifndef JZ_VEHICLE_HPP
#define JZ_VEHICLE_HPP

#include <string>
#include "Date.hpp"

namespace JZ {

/**
 * \brief Base class representing a generic vehicle.
 */
class Vehicle {
public:
    int id;             ///< Unique vehicle identifier
    std::string name;   ///< Vehicle name
    Date race_date;     ///< Date of race
    int weight;         ///< Weight in kilograms
    int power;          ///< Engine power in HP

    /**
     * \brief Default constructor.
     */
    Vehicle();

    /**
     * \brief Constructs a Vehicle with all parameters.
     */
    Vehicle(int id,
            const std::string& name,
            const Date& race_date,
            int weight,
            int power);

    /**
     * \brief Returns formatted vehicle info for display.
     */
    std::string printVechicle() const;

    /**
     * \brief Returns formatted vehicle data for CSV saving.
     */
    std::string saveVechicle() const;
};

} // namespace JZ

#endif //JZ_VEHICLE_HPP
