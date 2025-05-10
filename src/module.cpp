#include <Rcpp.h>

RCPP_EXPOSED_CLASS(Demo)

class Demo {
    public:
        int myInt;
        Rcpp::NumericVector rvec;
        Demo() : myInt(0), rvec(Rcpp::NumericVector::create(1,2,3)) {}

        int getInt() const { return myInt; }
        void setInt(int value) { myInt = value; }

        Rcpp::NumericVector getVec() {return rvec; }
};

RCPP_MODULE(demo_module) {
    Rcpp::class_<Demo>("Demo")
        .constructor();
        .field("myInt", &Demo::myInt)
        .method("getInt", &Demo::getInt)
        .method("setInt", &Demo::setInt)
        .method("getVec", &Demo::getVec);
}