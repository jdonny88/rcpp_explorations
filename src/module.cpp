#include <Rcpp.h>

RCPP_EXPOSED_CLASS(Demo)

class Demo {
    public:
        int myInt;
        double myDouble;
        Demo() : myInt(0), myDouble(0.0) {}
};

RCPP_MODULE(demo_module) {
    Rcpp::class_<Demo>("Demo")
        .constructor()
        .field("myInt", &Demo::myInt)
        .field("myDouble", &Demo::myDouble);
}