
#include <iostream>
#include <iomanip>
// #include <memory>
// #include <algorithm>
// #include <vector>
// #include <list>
// #include <unordered_map>

#include <chrono>  // for high_resolution_clock

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Eigen>


using namespace std;
using namespace std::chrono;
using namespace Eigen;

constexpr int DIM_SIZE = 100'000'000;

//typedef Array<double,10000000,1> LongArray; // Won't work - will try to allocate on stack


int main()
{

    // Holy crap, this is so Ugly, really no better Eagen way to do his?
    ArrayXd x(DIM_SIZE);
    ArrayXd y(DIM_SIZE);
    x.setRandom();
    y.setRandom();
    x = (x + 1.0) * 0.5;
    y = (y + 1.0) * 0.5;

    auto start = high_resolution_clock::now();
    double v = x.cwiseProduct(y).sum(); // Srsly? no dot product for Array, invent your own?
    auto finish = high_resolution_clock::now();

    cout << "===============\n" << std::fixed << std::setprecision(3) << v  << endl;
    std::cout << "Calculation took "
              << duration_cast<milliseconds>(finish - start).count()
              << "ms.\n";

    return 0;
}

