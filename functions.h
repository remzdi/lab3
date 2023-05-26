#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <iomanip>
#include <cmath>

class Vector3D {
private:
    double x, y, z;

public:
    Vector3D(double x_val, double y_val, double z_val)
            : x(x_val), y(y_val), z(z_val) {}

    double length() const;
};

Vector3D** createVectorArray(int numVectors);

void findLongestVector(Vector3D** vectors, int numVectors);

#endif
