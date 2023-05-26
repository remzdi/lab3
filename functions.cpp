#include "functions.h"

using namespace std;

double Vector3D:: length() const {
    return std::sqrt(x * x + y * y + z * z);
}

Vector3D** createVectorArray(int numVectors) {
    Vector3D** vectors = new Vector3D*[numVectors];

    for (int i = 0; i < numVectors; ++i) {
        double x, y, z;
        cout << endl;
        cout << "Enter the coordinates for vector " << i + 1 << ": ";
        cin >> x >> y >> z;
        vectors[i] = new Vector3D(x, y, z);
    }

    return vectors;
}

void findLongestVector(Vector3D** vectors, int numVectors) {
    int longestVectorIndex = 0;
    double maxLength = vectors[0]->length();
    cout << endl;

    for (int i = 1; i < numVectors; ++i) {
        double length = vectors[i]->length();
        if (length > maxLength) {
            maxLength = length;
            longestVectorIndex = i;
        }
    }

    cout << "The vector with the longest length is vector "
         << longestVectorIndex + 1 << " with length " << fixed << setprecision(2) << maxLength << endl;
}
