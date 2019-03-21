
#include "Data.hpp"


int main()
{
    std::random_device randomDevice;

    std::uniform_int_distribution<int> EngineDistribution(1, 100);

    for (auto i = 0u; i < 20; ++i) {
        std::cout << EngineDistribution(randomDevice) << std::endl;
    }

    return EXIT_SUCCESS;
}
