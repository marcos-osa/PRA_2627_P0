#include "RoboticArm.h"

RoboticArm::RoboticArm(double x, double y, double z)
    : x(x), y(y), z(z), holding(false) {}

double RoboticArm::get_x() const { return x; }
double RoboticArm::get_y() const { return y; }
double RoboticArm::get_z() const { return z; }
bool RoboticArm::is_holding() const { return holding; }

void RoboticArm::grab() { holding = true; }
void RoboticArm::release() { holding = false; }

void RoboticArm::move(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}
