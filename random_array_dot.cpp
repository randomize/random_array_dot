
#include <iostream>
#include <memory>
#include <algorithm>
#include <vector>
#include <list>
#include <unordered_map>

#include <chrono>  // for high_resolution_clock

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Eigen>


using namespace std;
using namespace std::chrono;
using namespace Eigen;

typedef Matrix<double,10000000,1> ArrayRandy;

int main()
{

    auto x = ArrayRandy::Random();
    auto y = ArrayRandy::Random();

    auto start = high_resolution_clock::now();
    auto v = x.dot(y);
    auto finish = high_resolution_clock::now();

    cout << "===============\n" << v  << endl;
    std::cout << "Calculation took "
              << duration_cast<milliseconds>(finish - start).count()
              << "ms.\n";

    return 0;
}

