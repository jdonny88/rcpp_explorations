# STATUS
# basic C++ int and doubles are fine
# std::string and std:vector cause crashes
# Rcpp:NumericVector causes a crash


version <- 6
base_lib_loc <- "TBC"

if (version == 0) {
  library(rcppcrashdemo, lib.loc = paste0(base_lib_loc, "\\rcppcrashdemo_0"))
  
  demo_instance <- new(Demo)
  
} else if (version == 1) {
  library(rcppcrashdemo, lib.loc = paste0(base_lib_loc, "\\rcppcrashdemo_1"))
  
  demo_instance <- new(Demo)
  
  # Test out 1. a primitive type
  demo_instance$myInt
  demo_instance$myInt <- 42
  demo_instance$myInt
  
  demo_instance$myDouble
  demo_instance$myDouble <- 2.22
  demo_instance$myDouble
  
  demo_instance$raw_sexp
  
  demo_instance$getInt()
  demo_instance$setInt(400)
  demo_instance$getInt()
  
} else if (version == 2) {
  library(rcppcrashdemo, lib.loc = paste0(base_lib_loc, "\\rcppcrashdemo_2"))
  
  demo_instance <- new(Demo)
  
  demo_instance$getInt()
  demo_instance$setInt(42)
  demo_instance$getInt()
  
} else if (version == 3) {
  library(rcppcrashdemo, lib.loc = paste0(base_lib_loc, "\\rcppcrashdemo_3"))
  
  demo_instance <- new(Demo)
  
  # Test out 3. A C++ string and 4. a C-style string
  demo_instance$getString()
  demo_instance$setString("world")
  demo_instance$getString()
  
} else if (version == 4) {
  library(rcppcrashdemo, lib.loc = paste0(base_lib_loc, "\\rcppcrashdemo_4"))
  
  demo_instance <- new(Demo)
  
  # Test out 4. A C-style string
  demo_instance$getCString()
  
} else if (version == 5) {
  library(rcppcrashdemo, lib.loc = paste0(base_lib_loc, "\\rcppcrashdemo_5"))
  
  demo_instance <- new(Demo)
  
  # Test out 5. A C++ vector
  # demo_instance$values
  demo_instance$getFirst()
  
} else if (version == 6) {
  library(rcppcrashdemo, lib.loc = paste0(base_lib_loc, "\\rcppcrashdemo_6"))
  
  demo_instance <- new(Demo)
  
  # Test out 6. An Rcpp vector
  demo_instance$getVec()
  
} else if (version == 7) {
  library(rcppcrashdemo, lib.loc = paste0(base_lib_loc, "\\rcppcrashdemo_7"))
  
  demo_instance <- new(Demo)
  
  # Test out 7. An Rcpp vector
  demo_instance$getWrappedVec()
  
} else if (version == 8) {
  library(rcppcrashdemo, lib.loc = paste0(base_lib_loc, "\\rcppcrashdemo_8"))
  
  demo_instance <- new(Demo)
  
  # Test out 8. Only fields
  demo_instance$myInt
  demo_instance$myDouble
  demo_instance$myString
  demo_instance$myVec
  demo_instance$myRcppVec
} else if (version == 9) {
  library(rcppcrashdemo, lib.loc = paste0(base_lib_loc, "\\rcppcrashdemo_9"))
  
  demo_instance <- new(Demo)
  
  # Test out 9. Only C++ fields
  demo_instance$myInt
  demo_instance$myDouble
  demo_instance$myString
  demo_instance$myVec
} else if (version == 10) {
  library(rcppcrashdemo, lib.loc = paste0(base_lib_loc, "\\rcppcrashdemo_10"))
  
  demo_instance <- new(Demo)
  
  # Test out 10. Only C++ simple fields
  demo_instance$myInt
  demo_instance$myDouble
  demo_instance$myString
}
