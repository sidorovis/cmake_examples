option(OPTION_NAME "Description" ON)
option(ANOTHER_OPTION_NAME "Another Description For another Option" OFF)

if (OPTION_NAME)
    message(STATUS "OPTION_NAME: ${OPTION_NAME}")
endif (OPTION_NAME)

