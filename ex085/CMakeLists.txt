cmake_minimum_required(VERSION 2.8)

option(opt "Description" ON)

if (opt)
    message("Hello")
else()
    message("hidden")
endif(opt)

set(val FALSE)

if (val)
    message("next time")
else()
    message("my beautiful")
endif(val)

file(GLOB fvar "no_such_file.h")

if (fvar)
    message("hidden")
else()
    message("world: '${fvar}'")
endif(fvar)


