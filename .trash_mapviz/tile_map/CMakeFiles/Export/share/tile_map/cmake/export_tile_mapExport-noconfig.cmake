#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tile_map::tile_map" for configuration ""
set_property(TARGET tile_map::tile_map APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tile_map::tile_map PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtile_map.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS tile_map::tile_map )
list(APPEND _IMPORT_CHECK_FILES_FOR_tile_map::tile_map "${_IMPORT_PREFIX}/lib/libtile_map.a" )

# Import target "tile_map::tile_map_plugin" for configuration ""
set_property(TARGET tile_map::tile_map_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tile_map::tile_map_plugin PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtile_map_plugin.so"
  IMPORTED_SONAME_NOCONFIG "libtile_map_plugin.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tile_map::tile_map_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_tile_map::tile_map_plugin "${_IMPORT_PREFIX}/lib/libtile_map_plugin.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
