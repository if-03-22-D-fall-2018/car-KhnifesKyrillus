#include "car.h"
#include <stdbool.h>

struct ImplementationCar
{
  enum CarType carType;
  enum Color color;
  double fill_level;
  double acceleration_rate;
  int speed;
  bool is_available;
};

struct ImplementationCar aixam { AIXAM, RED, 16.0, 0.0, 0, true };
struct ImplementationCar fiat_mutipla1 { FIAT_MULTIPLA, GREEN, 65.0, 0.0, 0, true };
struct ImplementationCar fiat_mutipla2 { FIAT_MULTIPLA, BLUE, 65.0, 0.0, 0, true };
struct ImplementationCar fiat_mutipla3 { FIAT_MULTIPLA, ORANGE, 65.0, 0.0, 0, true };
struct ImplementationCar jeep1 { JEEP, SILVER, 80.0, 0.0, 0, true };
struct ImplementationCar jeep2 { JEEP, BLACK, 80.0, 0.0, 0, true };


static Car car_park[20] = {&aixam};

void init()
{
  
}

Car get_car(enum CarType carType)
{
  return &aixam;
}

enum CarType get_type(Car car)
{
  return car->carType;
}
enum Color get_color(Car car)
{
  return car->color;
}
double get_fill_level(Car car)
{
  return 1111111.002;
}
double get_acceleration_rate(Car car)
{
  return 1111111.002;
}
void set_acceleration_rate(Car car, double acceleration)
{

}
int get_speed(Car car)
{
  return 0;
}
void accelerate(Car car)
{

}
