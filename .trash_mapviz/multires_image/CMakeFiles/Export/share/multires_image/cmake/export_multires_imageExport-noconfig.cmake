#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "multires_image::multires_image" for configuration ""
set_property(TARGET multires_image::multires_image APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(multires_image::multires_image PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmultires_image.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS multires_image::multires_image )
list(APPEND _IMPORT_CHECK_FILES_FOR_multires_image::multires_image "${_IMPORT_PREFIX}/lib/libmultires_image.a" )

# Import target "multires_image::multires_widget" for configuration ""
set_property(TARGET multires_image::multires_widget APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(multires_image::multires_widget PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmultires_widget.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS multires_image::multires_widget )
list(APPEND _IMPORT_CHECK_FILES_FOR_multires_image::multires_widget "${_IMPORT_PREFIX}/lib/libmultires_widget.a" )

# Import target "multires_image::multires_image_plugin" for configuration ""
set_property(TARGET multires_image::multires_image_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(multires_image::multires_image_plugin PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmultires_image_plugin.so"
  IMPORTED_SONAME_NOCONFIG "libmultires_image_plugin.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS multires_image::multires_image_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_multires_image::multires_image_plugin "${_IMPORT_PREFIX}/lib/libmultires_image_plugin.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
