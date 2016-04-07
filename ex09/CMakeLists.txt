cmake_minimum_required(VERSION 3.3)
set(mylist "a1" "a2" "a3" "a4" "a5" "a6")

message(STATUS ${mylist})
foreach(iterator ${mylist})
    message(STATUS "${iterator}")
endforeach(iterator)
