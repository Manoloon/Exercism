//
// Created by Manoloon on 28/11/2021.
//

#ifndef EXERCISM_SPACE_AGE_H
#define EXERCISM_SPACE_AGE_H
#include <map>

class space_age
{
private:
    double secs;
    const double _EarthYearInSec = 31557600.0;
public:
    explicit space_age(double secs);

    double GetAge(std::string Planet) const;

    double	    seconds() const;
    double		on_earth() const;
    double		on_mercury() const;
    double		on_venus() const;
    double		on_mars() const;
    double		on_jupiter() const;
    double		on_saturn() const;
    double		on_uranus() const;
    double		on_neptune() const;
};


#endif //EXERCISM_SPACE_AGE_H
