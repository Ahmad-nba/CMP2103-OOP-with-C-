#include <iostream>
#include <cmath>
#include <vector>

void pow(std::vector<std::vector<double>>& df, double exponent) {
    for (auto& row : df) {
        for (auto& value : row) {
            value = std::pow(value, exponent);
        }
    }
}

int main() {
    // the sample dataframe modelled as a 2D vector
    std::vector<std::vector<double>> df = {
        {2.0, 3.0, 4.0},
        {5.0, 6.0, 7.0}
    };
// calling the power function on the dataframe to power it to 2
    pow(df, 2.0);

    // looping over to see each and every value having been powered
    for (const auto& row : df) {
        for (const auto& value : row) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }

    return 0;
}