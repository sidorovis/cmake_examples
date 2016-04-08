#include <iostream>
#include <boost/filesystem.hpp>
namespace fs = boost::filesystem;

int main() {
    std::cout << fs::path("./") << std::endl;
}
