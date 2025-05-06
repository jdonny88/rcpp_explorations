.onLoad <- function(libname, pkgname) {
    loadModule("demo_module", TRUE)
    packageStartupMessage("loadModule finished")
}