#include <Rcpp.h>

RCPP_EXPOSED_CLASS(Demo)

class Demo {
    public:
        int myInt;
        Demo() : myInt(0) {}

        int getInt() const { return myInt; }
        void setInt(int value) { myInt = value; }
};

RCPP_MODULE(demo_module) {
    Rcpp::class_<Demo>("Demo")
        .constructor()
        .field("myInt", &Demo::myInt)
        .method("getInt", &Demo::getInt)
        .method("setInt", &Demo::setInt);
}