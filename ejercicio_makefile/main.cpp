#include <iostream>
#include "RoboticArm.h"

static void show(const RoboticArm &arm) {
    std::cout << "Posición: (" << arm.get_x() << ", " << arm.get_y() << ", "
              << arm.get_z() << "); sujetando objeto: "
              << (arm.is_holding() ? "sí" : "no") << std::endl;
}

int main() {
    RoboticArm arm;
    show(arm);

    arm.move(1.5, 2.0, 3.25);
    arm.grab();
    show(arm);

    arm.move(0.0, 0.0, 0.0);
    arm.release();
    show(arm);

    return 0;
}
