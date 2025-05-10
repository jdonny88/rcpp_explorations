#include <Rcpp.h>
#include <string>

RCPP_EXPOSED_CLASS(Demo)

class Demo {
    public:
        int myInt;
        double myDouble;
        std::string myString;
        Demo() : myInt(0), myDouble(0.0), myString("hello") {}
};

RCPP_MODULE(demo_module) {
    Rcpp::class_<Demo>("Demo")
        .constructor()
        .field("myInt", &Demo::myInt)
        .field("myDouble", &Demo::myDouble)
        .field("myString", &Demo::myString);
}