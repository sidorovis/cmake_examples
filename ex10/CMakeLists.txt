cmake_minimum_required(VERSION 3.3)

macro( list_regex_contains var value)
  set(${var})
  foreach (iterator ${ARGN})
    if ( iterator MATCHES "${value}" )
      set(${var} TRUE)
    endif( iterator MATCHES "${value}" )
  endforeach (iterator)
endmacro( list_regex_contains )

list_regex_contains(tuk "tuk" "aqua" "bequa" "cequa" "dequa" "equa")
message(STATUS "tuk: ${tuk}")

list_regex_contains(de "de" "aqua" "bequa" "cequa" "dequa" "equa")
message(STATUS "de: ${de}")
