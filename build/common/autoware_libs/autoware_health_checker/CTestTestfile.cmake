# CMake generated Testfile for 
# Source directory: /home/lhq/Projects/PLAuto/src/common/autoware_libs/autoware_health_checker
# Build directory: /home/lhq/Projects/PLAuto/build/common/autoware_libs/autoware_health_checker
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_autoware_health_checker_rostest_test_test_autoware_health_checker.test "/home/lhq/Projects/PLAuto/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/lhq/Projects/PLAuto/build/test_results/autoware_health_checker/rostest-test_test_autoware_health_checker.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/lhq/Projects/PLAuto/src/common/autoware_libs/autoware_health_checker --package=autoware_health_checker --results-filename test_test_autoware_health_checker.xml --results-base-dir \"/home/lhq/Projects/PLAuto/build/test_results\" /home/lhq/Projects/PLAuto/src/common/autoware_libs/autoware_health_checker/test/test_autoware_health_checker.test ")
set_tests_properties(_ctest_autoware_health_checker_rostest_test_test_autoware_health_checker.test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;80;add_rostest;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;100;_add_rostest_google_test;/home/lhq/Projects/PLAuto/src/common/autoware_libs/autoware_health_checker/CMakeLists.txt;97;add_rostest_gtest;/home/lhq/Projects/PLAuto/src/common/autoware_libs/autoware_health_checker/CMakeLists.txt;0;")
add_test(_ctest_autoware_health_checker_roslint_package "/home/lhq/Projects/PLAuto/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/lhq/Projects/PLAuto/build/test_results/autoware_health_checker/roslint-autoware_health_checker.xml" "--working-dir" "/home/lhq/Projects/PLAuto/build/common/autoware_libs/autoware_health_checker" "--return-code" "/opt/ros/noetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/lhq/Projects/PLAuto/build/test_results/autoware_health_checker/roslint-autoware_health_checker.xml make roslint_autoware_health_checker")
set_tests_properties(_ctest_autoware_health_checker_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/lhq/Projects/PLAuto/src/common/autoware_libs/autoware_health_checker/CMakeLists.txt;104;roslint_add_test;/home/lhq/Projects/PLAuto/src/common/autoware_libs/autoware_health_checker/CMakeLists.txt;0;")
