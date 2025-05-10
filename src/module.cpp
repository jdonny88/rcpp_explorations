#include <Rcpp.h>

RCPP_EXPOSED_CLASS(Demo)

class Demo {
    public:
        int myInt;
        std::string myString;
        Demo() : myInt(0), myString("hello") {}

        int getInt() const { return myInt; }
        void setInt(int value) { myInt = value; }

        std::string getString() const { return myString; }
        void setString(std::string s) { myString = s; }
};

RCPP_MODULE(demo_module) {
    Rcpp::class_<Demo>("Demo")
        .constructor()
        .field("myInt", &Demo::myInt)
        .method("getInt", &Demo::getInt)
        .method("setInt", &Demo::setInt)
        .method("getString", &Demo::getString)
        .method("setString", &Demo::setString);
}