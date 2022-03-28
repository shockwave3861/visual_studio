#pragma once

#include <QtCore/qcompilerdetection.h>
#ifndef BUILD_STATIC
# if defined(VIPLEXCORE_LIB)
#  define VIPLEX_EXPORT Q_DECL_EXPORT
# else
#  define VIPLEX_EXPORT Q_DECL_IMPORT
# endif
#else
# define VIPLEX_EXPORT
#endif
