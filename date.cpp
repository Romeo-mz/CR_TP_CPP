#include "date.h"
#include <assert.h> 
#include <string>



Date::Date(int month, int day, int year) : _month(month), _day(day), _year(year)
{
    bool status = isDate(month, day, year);
    assert(status && "Date is not valid");
}

//Méthode permettant de récupérer le mois de la date
int Date::month() const {
	return _month;
}

//Méthode permettant d récupérer le jour de la date
int Date::day() const {
	return _day;
}

//Méthode permettant de récupérer l'année de la date
int Date::year() const
{
    return _year;
}

//Méthode permettant de modifier le mois de la date
void Date::updateMonth(int month) {
    bool status = isDate(month, _day, _year);
    assert(status==true && "New month is not valid");
    _month = month;
}

//Méthode permettant de modifier le jour de la date
void Date::updateDay(int day) {
    bool status = isDate(_month, day, _year);
    assert(status==true && "New day is not valid");
    _day = day;
}

//Méthode permettant de modifier l'année de la date
void Date::updateYear(int year)
{
    bool status = isDate(_month, _day, year);
    assert(status==true && "New year is not valid");
    _year = year;
}

//Méthode permettant de passer au jour suivant, voir au mois et année si besoin
void Date::next() {
    if ((_month==12) && (_day==31)) {
        _day=1;
        _month=1;
        ++_year;
    }
    else if (_day==getDaysInMonth(_month)) {
        _day=1;
        _month++;
    }
    else {
        _day++;
    }
}

//Méthode permettant de reculer au jour précédent, voir au mois et année si besoin
void Date::back() {
    if ((_month==1) && (_day==1)) {
        _day=31;
        _month=12;
        --_year;
    }
    else if (_day==1) {
        _month--;
        _day=getDaysInMonth(_month);
    }
    else {
        _day--;
    }
}

//Helper permettant de vérifier la validité de la date
bool isDate(int month, int day, int year) {
    if ((day < 1) || (day>31)) return false;
    if ((month <1) || (month>12)) return false;
    if ((month == 2) && (day > 28)) return false;
    if (((month == 4) || (month == 6) || 
        (month == 9) || (month == 11)) && (day > 30)) return false;
    
    return true;
}

//Helper permettant de vérifier la validité du nombre de jours en fonction du mois
int getDaysInMonth(int month)  { 
    assert(((month >=1) && (month<=12)) && "Month is not valid");
    if (month == 2) return 28;
    if ((month == 1 || month == 3 || month == 5 || month == 7
    || month == 8 || month == 10 || month == 12)) return 31;
    return 30;
}

//Helper permettant de ????
int dayOfYear(Date d) {
    auto day=0;
    for (auto i=1;i<d.month();i++) {
        day+=getDaysInMonth(i);
    }
    day+= d.day();
    return day;
}

//Helper permetteant d'afficher la date
std::string toString(Date d) {
    return std::to_string(d.day()) + "/" + std::to_string(d.month()) + "/" + std::to_string(d.year()) ;
}