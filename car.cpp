#include "car.h"
#include <stdbool.h>

struct ImplementationCar
{
  enum CarType carType;
  enum Color corlor;
  double fill_level;
  double acceleration_rate;
  int speed;
  bool is_available;
};

static Car car_park[20];

void init()
{

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
Car get_car(enum CarType carType)
{
  return 0;
}
void accelerate(Car car)
{

}
