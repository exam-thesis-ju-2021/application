# CMakeList.txt : CMake project for thesis_applicaton, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (thesis_applicaton "main.c"   
	"library/peripherals/divide_by_half.c" 
	"library/peripherals/divide_by_half.h"
	"library/peripherals/multiply_by_two.c" 
	"library/peripherals/multiply_by_two.h"
	"library/hardware.c" 
	"library/hardware.h"
	"library/module_a.c" 
	"library/module_a.h"
	"library/peripheral.c" 
	"library/peripheral.h"
	"library/peripherals.c" 
	"library/peripherals.h"
	"library/peripherals/power_of_two.h" 
	"library/peripherals/power_of_two.c" 
	"library/peripherals/square_root.h" 
	"library/peripherals/square_root.c"
)

# TODO: Add tests and install targets if needed.
