# include all source files
file(GLOB_RECURSE MYPROJECT_SRC .
   "*.h"
   "*.cc"
)

add_library(myproject ${MYPROJECT_SRC})

install (TARGETS myproject DESTINATION lib)
install (DIRECTORY . DESTINATION include
  FILES_MATCHING PATTERN "*.h")

