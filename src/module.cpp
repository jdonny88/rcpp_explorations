#include <Rcpp.h>
#include <string>
#include <vector>

RCPP_EXPOSED_CLASS(Demo)

class Demo {
    public:
        int myInt;
        double myDouble;
        std::string myString;
        std::vector<double> myVec;
        Demo() : myInt(0), myDouble(2.0), myString("hello"), myVec({1.1, 2.2, 3.3}) {}
};

RCPP_MODULE(demo_module) {
    Rcpp::class_<Demo>("Demo")
        .constructor()
        .field("myInt", &Demo::myInt)
        .field("myDouble", &Demo::myDouble)
        .field("myString", &Demo::myString)
        .field("myVec", &Demo::myVec);
}