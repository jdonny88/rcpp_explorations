#include <Rcpp.h>

RCPP_EXPOSED_CLASS(Demo)

class Demo {
    public:
        int myInt;
        const char* myCString;
        Demo() : myInt(0), myCString("hello") {}

        int getInt() const { return myInt; }
        void setInt(int value) { myInt = value; }

        std::string getCString() const { return std::string(myCString); }
};

RCPP_MODULE(demo_module) {
    Rcpp::class_<Demo>("Demo")
        .constructor()
        .field("myInt", &Demo::myInt)
        .method("getInt", &Demo::getInt)
        .method("setInt", &Demo::setInt)
        .method("getCString", &Demo::getCString);
}