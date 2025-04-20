#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator

    ofstream outfile("large_input.txt");

    // Number of test cases
    outfile << 1 << endl;

    // Dimensions of the matrix
    int n = 1000, m = 1000;
    outfile << n << " " << m << endl;

    // Generate the matrix with random values
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            outfile << j+1 << " "; // Random values between 1 and 1000
        }
        outfile << endl;
    }

    outfile.close();
    return 0;
}