#ifndef JZ_MOTORCYCLE_HPP
#define JZ_MOTORCYCLE_HPP

#include "Vehicle.hpp"

namespace JZ {

/**
 * \brief Represents a motorcycle.
 */
class Motorcycle : public Vehicle {
public:
    bool abs;             ///< ABS availability
    std::string motoType; ///< Motorcycle type

    /**
     * \brief Default constructor.
     */
    Motorcycle();

    /**
     * \brief Constructs a Motorcycle with full specification.
     */
    Motorcycle(int id,
               const std::string& name,
               const Date& race_date,
               int weight,
               int power,
               bool abs,
               const std::string& motoType);

    /**
     * \brief Returns formatted motorcycle info for display.
     */
    std::string printMotorcycle() const;

    /**
     * \brief Returns formatted motorcycle data for CSV saving.
     */
    std::string saveMotorcycle() const;
};

} // namespace JZ

#endif //JZ_MOTORCYCLE_HPP
