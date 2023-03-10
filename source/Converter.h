#pragma once
#define EARTH_RADIUS 6378.140

#include "./measure/CartesianCoord.h"
#include "./measure/CylindricalCoord.h"
#include "./measure/CelestianCoord.h"
#include "./measure/GeocentricCoord.h"

#include "./measure/InterpolationTimeFrame.h"
#include "./measure/InterpolationHubbleFrame.h"

#include "../sofa/src/sofa.h"
#include "Observation.h"
#include <vector>
#include <iostream>


// ????? ??? ???????? ????? ?????????? ?????????
class Converter
{
public:
	CartesianCoord cylindrical_to_cartesian(CylindricalCoord cylindrical_coord); 
	//void julian_date_to_tdb(Date);
	void interpolation_date_to_tt_tdb(std::vector<Observation> observations, std::vector<InterpolationTimeFrame> interpolation_time);

	GeocentricCoord cartesian_to_geocentric(CartesianCoord, Date);

	void transpose(double mtr[3][3]);
};

