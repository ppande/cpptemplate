file (GLOB APP_SOURCES 
  *.cc)

include_directories( ${PROJECT_SOURCE_DIR}/src )

foreach(app_source ${APP_SOURCES})
  get_filename_component(app ${app_source} NAME_WE)
  add_executable (${app} ${app_source})
  target_link_libraries (${app} ${PROJECT_NAME})
endforeach(app_source)

