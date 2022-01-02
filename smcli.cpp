#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

#define location pair<double, double>

void printHelp();

int main(int argc, char** argv) {
    if (argc < 2) printHelp();
    
    unordered_map<string, location> cities;
    cities["detroit"] = location(42.3371482629, -83.056947069);
    cities["ann arbor"] = location(42.27748804120473, -83.73521358074206);
    cities["new york"] = location(40.768162910467154, -73.97723644816625);
    cities["chicago"] = location(41.878653596945725, -87.64339302779283);
    cities["macomb"] = location(42.65963610185877, -82.89557941044062);

    for (size_t i = 1; i < argc; ++i) {
        if (cities.find(argv[i]) != cities.end()) {
            // Make API Call, parse info, print out stuff
            // https://openweathermap.org/api/one-call-api
        } else {
            cerr << argv[i] << " has not been configured in the implementation file\n";
        }
    }
    
}

void printHelp() {
    cerr << "USAGE: weather [OPTIONAL CITY_NAME] [OPTIONAL CITY_NAME] ...\n";
    cerr << "If city name provided, will only display that city's weather\n";
    cerr << "otherwise, all configured city's weather info will be displayed\n";
}