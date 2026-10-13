#ifndef ROBOTICARM_H
#define ROBOTICARM_H

class RoboticArm {
    private:
        double x;
        double y;
        double z;
        bool holding;

    public:
        RoboticArm(double x = 0.0, double y = 0.0, double z = 0.0);

        double get_x() const;
        double get_y() const;
        double get_z() const;
        bool is_holding() const;

        void grab();
        void release();
        void move(double x, double y, double z);
};

#endif
