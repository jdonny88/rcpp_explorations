#include <Rcpp.h>

RCPP_EXPOSED_CLASS(Demo)

class Demo {
    public:
        int myInt;
        std::vector<double> values;
        Demo() : myInt(0), values({1.0, 2.0, 3.0}) {}

        int getInt() const { return myInt; }
        void setInt(int value) { myInt = value; }

        double getFirst() const { return values[0]; }
};

RCPP_MODULE(demo_module) {
    Rcpp::class_<Demo>("Demo")
        .constructor()
        .field("myInt", &Demo::myInt)
        .method("getInt", &Demo::getInt)
        .method("setInt", &Demo::setInt)
        .method("getFirst", &Demo::getFirst);
}