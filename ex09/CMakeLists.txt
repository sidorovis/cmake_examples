cmake_minimum_required(VERSION 2.8)
set(mylist "a1" "a2" "a3" "a4" "a5" "a6")

message(STATUS ${mylist})
message(STATUS "${mylist}")

foreach(iterator ${mylist})
    message(STATUS "${iterator}")
endforeach(iterator)
