#include "Observation.h"


Date Observation::get_julian_date() {
    return this->julian_date;
}

std::string Observation::get_code() {
    return this->code;
}

CelestianCoord Observation::get_ascension() {
    return this->ascension;
}

CelestianCoord Observation::get_declination() {
    return this->declination;
}

void Observation::set_julian_date(Date value) {
    this->julian_date = value;
}

void Observation::set_code(std::string value) {
    this->code = value;
}

void Observation::set_ascension(CelestianCoord value) {
    this->ascension = value;
}

void Observation::set_declination(CelestianCoord value) {
    this->declination = value;
}

void Observation::set_ascension_from_string(std::string value) {
    this->ascension.set_from_string(value);
}

void Observation::set_declination_from_string(std::string value) {
    this->declination.set_from_string(value);
}

