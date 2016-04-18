set(v1 value)
set(v2 "v1" "v2" "v3" "v4" ${v1})
set(v3 false)
set(v4 0)

message("v1: ${v1}")
message("v2: ${v2}")
message("v3: ${v3}")
message("v4: ${v4}")

set(v1 "my value")
message("v1: ${v1}")

set(v6 YES)
message("v6: ${v6}")
set(v7 FALSE)
message("v7: ${v7}")

