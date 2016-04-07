cmake_minimum_required(VERSION 3.3)

function( list_regex_contains var value)
  set(${var} PARENT_SCOPE)
  foreach (iterator ${ARGN})
    if ( iterator MATCHES "${value}" )
      set(${var} TRUE PARENT_SCOPE)
    endif( iterator MATCHES "${value}" )
  endforeach (iterator)
endfunction( list_regex_contains )

list_regex_contains(tuk "tuk" "aqua" "bequa" "cequa" "dequa" "equa")
message(STATUS "tuk: ${tuk}")

list_regex_contains(de "de" "aqua" "bequa" "cequa" "dequa" "equa")
message(STATUS "de: ${de}")
