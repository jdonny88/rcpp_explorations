#include <Rcpp.h>

RCPP_EXPOSED_CLASS(Demo)

class Demo {
    public:
        int myInt;
        Demo() : myInt(0) {}
};

RCPP_MODULE(demo_module) {
    Rcpp::class_<Demo>("Demo")
        .constructor();
        .field("myInt", &Demo::myInt);
}