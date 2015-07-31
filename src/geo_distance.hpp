#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif
#include <cmath>

#ifndef M_PI
#define M_PI    3.1415926535897932384626433832795
#endif

static constexpr double earth_radius_km = 6371.0;
static constexpr double earth_radius_m  = 6371000.0;
static constexpr double earth_radius_mi = 3959.0;

double deg_to_rad(double deg);
double haversine_distance(double latitude1, double longitude1, double latitude2,
                          double longitude2);
double vincenty_distance(double latitude1, double longitude1, double latitude2,
                         double longitude2);

