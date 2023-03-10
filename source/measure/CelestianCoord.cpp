#include "CelestianCoord.h"


CelestianCoord::CelestianCoord(double h, double m, double s) {
    this->h = h;
    this->m = m;
    this->s = s;
}


void CelestianCoord::set_from_string(std::string coord) {
    /*
    read the data from string
    */
    int prev = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = prev; j < coord.length() + 1; j++) {
            if ((coord[j] == ' ') or (coord[j] == '\0')) {
                switch (i) {
                case 0:
                    h = std::stod(coord.substr(prev, j - prev));
                    break;
                case 1:
                    m = std::stod(coord.substr(prev, j - prev));
                    break;
                case 2:
                    s = std::stod(coord.substr(prev, j - prev));
                    break;
                default:
                    break;
                }
                prev = j + 1;
                break;
            }
        }
    }
}

double CelestianCoord::get_h() {
    return this->h;
}

double CelestianCoord::get_m() {
    return this->m;
}

double CelestianCoord::get_s() {
    return this->s;
}