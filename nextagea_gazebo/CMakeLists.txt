cmake_minimum_required(VERSION 3.0.2)
project(nextagea_gazebo)

find_package(catkin REQUIRED COMPONENTS)
catkin_package(
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

install(PROGRAMS
   scripts/go_home
   scripts/go_initial.py
   DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

## Mark other files for installation (e.g. launch and bag files, etc.)
install(DIRECTORY config launch
   DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
   USE_SOURCE_PERMISSIONS
)

