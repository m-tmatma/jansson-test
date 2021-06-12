AC_INIT([janssontest], [1.0])
AM_INIT_AUTOMAKE
AC_PROG_CC
AM_EXTRA_RECURSIVE_TARGETS([janssontest])
AC_CONFIG_FILES([Makefile test-overwrite/Makefile  test-read/Makefile  test-write/Makefile])
AC_CHECK_HEADERS([stdlib.h jansson.h])
AC_SEARCH_LIBS([json_load_file], [jansson])
AC_OUTPUT
