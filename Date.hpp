#ifndef JZ_DATE_HPP
#define JZ_DATE_HPP

#include <string>
#include <iostream>

namespace JZ {

/**
 * \brief Represents a calendar date.
 */
class Date {
private:
    int m_day;    ///< Day of the month
    int m_month;  ///< Month
    int m_year;   ///< Year

public:
    /**
     * \brief Default constructor. Initializes date to 0.0.0.
     */
    Date();

    /**
     * \brief Constructs a Date with given day, month and year.
     * \param d Day
     * \param m Month
     * \param y Year
     */
    Date(int d, int m, int y);

    /**
     * \brief Sets the day.
     * \param d Day value (1–31)
     */
    void setDay(int d);

    /**
     * \brief Sets the month.
     * \param d Month value (1–12)
     */
    void setMonth(int d);

    /**
     * \brief Sets the year.
     * \param d Year
     */
    void setYear(int d);

    /// \return Day
    int getDay() const;

    /// \return Month
    int getMonth() const;

    /// \return Year
    int getYear() const;

    /**
     * \brief Returns formatted date string (DD.MM.YYYY).
     */
    std::string printDate() const;

    /**
     * \brief Returns date formatted for CSV saving (DD;MM;YYYY).
     */
    std::string saveDate() const;
};

} // namespace JZ

#endif //JZ_DATE_HPP
