#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    int numVectors;
    cout << "Enter the number of vectors: ";
    cin >> numVectors;

    Vector3D** vectors = createVectorArray(numVectors);

    findLongestVector(vectors, numVectors);

    return 0;
}
