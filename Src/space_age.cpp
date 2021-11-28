//
// Created by Manoloon on 28/11/2021.
//

#include "space_age.h"

space_age::space_age(double secs):secs(secs){}

double space_age::GetAge(std::string Planet) const
{
    if(Planet !="Earth")
    {
        static std::map<const std::string,const double>Data
                {
                        {"Mercury", 0.2408467},
                        {"Venus",0.61519726},
                        {"Mars",1.8808158},
                        {"Jupiter",11.862615},
                        {"Saturn",29.447498},
                        {"Uranus",84.016846},
                        {"Neptune",164.79132}
                };
        return secs/(_EarthYearInSec* Data[Planet]);
    }
    else
    {
        return secs/_EarthYearInSec;
    }
}

double space_age::seconds() const
{
    return (secs);
}

double space_age::on_earth() const
{
    return GetAge("Earth");
}

double space_age::on_mercury() const
{
    return GetAge("Mercury");
}

double space_age::on_venus() const
{
    return GetAge("Venus");;
}

double space_age::on_mars() const
{
    return GetAge("Mars");;
}

double space_age::on_jupiter() const
{
    return GetAge("Jupiter");;
}

double space_age::on_saturn() const
{
    return GetAge("Saturn");;
}

double space_age::on_uranus() const
{
    return GetAge("Uranus");;
}

double space_age::on_neptune() const
{
    return GetAge("Neptune");
}
