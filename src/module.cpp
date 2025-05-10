#include <Rcpp.h>

class Demo {
    public:
        Demo() {}
};

RCPP_MODULE("demo_module") {
    Rcpp::class_<Demo>("Demo")
        .constructor();
}