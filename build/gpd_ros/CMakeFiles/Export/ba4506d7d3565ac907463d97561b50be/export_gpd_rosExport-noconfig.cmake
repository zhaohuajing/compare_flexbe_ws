#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "gpd_ros::grasp_messages" for configuration ""
set_property(TARGET gpd_ros::grasp_messages APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(gpd_ros::grasp_messages PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libgrasp_messages.so"
  IMPORTED_SONAME_NOCONFIG "libgrasp_messages.so"
  )

list(APPEND _cmake_import_check_targets gpd_ros::grasp_messages )
list(APPEND _cmake_import_check_files_for_gpd_ros::grasp_messages "${_IMPORT_PREFIX}/lib/libgrasp_messages.so" )

# Import target "gpd_ros::grasp_plotter" for configuration ""
set_property(TARGET gpd_ros::grasp_plotter APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(gpd_ros::grasp_plotter PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libgrasp_plotter.so"
  IMPORTED_SONAME_NOCONFIG "libgrasp_plotter.so"
  )

list(APPEND _cmake_import_check_targets gpd_ros::grasp_plotter )
list(APPEND _cmake_import_check_files_for_gpd_ros::grasp_plotter "${_IMPORT_PREFIX}/lib/libgrasp_plotter.so" )

# Import target "gpd_ros::grasp_detection_server" for configuration ""
set_property(TARGET gpd_ros::grasp_detection_server APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(gpd_ros::grasp_detection_server PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/gpd_ros/grasp_detection_server"
  )

list(APPEND _cmake_import_check_targets gpd_ros::grasp_detection_server )
list(APPEND _cmake_import_check_files_for_gpd_ros::grasp_detection_server "${_IMPORT_PREFIX}/lib/gpd_ros/grasp_detection_server" )

# Import target "gpd_ros::grasp_pose_server" for configuration ""
set_property(TARGET gpd_ros::grasp_pose_server APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(gpd_ros::grasp_pose_server PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/gpd_ros/grasp_pose_server"
  )

list(APPEND _cmake_import_check_targets gpd_ros::grasp_pose_server )
list(APPEND _cmake_import_check_files_for_gpd_ros::grasp_pose_server "${_IMPORT_PREFIX}/lib/gpd_ros/grasp_pose_server" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
