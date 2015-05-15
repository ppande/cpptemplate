# include all source files
file(GLOB_RECURSE MYPROJECT_SRC .
   "*.h"
   "*.cc"
)

add_library(${PROJECT_NAME} ${MYPROJECT_SRC})

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (DIRECTORY . DESTINATION include
  FILES_MATCHING PATTERN "*.h")

