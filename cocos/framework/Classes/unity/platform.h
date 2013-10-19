#ifndef __UtilBaseLibrary_Platform_H_
#define __UtilBaseLibrary_Platform_H_


/* Initial platform/compiler-related stuff to set.
*/
#define PLATFORM_WIN32 1
#define PLATFORM_LINUX 2
#define PLATFORM_APPLE 3
#define PLATFORM_SYMBIAN 4
#define PLATFORM_IPHONE 5

#define COMPILER_MSVC 1
#define COMPILER_GNUC 2
#define COMPILER_BORL 3
#define COMPILER_WINSCW 4
#define COMPILER_GCCE 5

#define ENDIAN_LITTLE_VALUE 1
#define ENDIAN_BIG_VALUE 2

#define ARCHITECTURE_32 1
#define ARCHITECTURE_64 2

/* Finds the compiler type and version.
*/
#if defined( __GCCE__ )
#   define COMPILER COMPILER_GCCE
#   define COMP_VER _MSC_VER
//#	include <staticlibinit_gcce.h> // This is a GCCE toolchain workaround needed when compiling with GCCE 
#elif defined( __WINSCW__ )
#   define COMPILER COMPILER_WINSCW
#   define COMP_VER _MSC_VER
#elif defined( _MSC_VER )
#   define COMPILER COMPILER_MSVC
#   define COMP_VER _MSC_VER
#elif defined( __GNUC__ )
#   define COMPILER COMPILER_GNUC
#   define COMP_VER (((__GNUC__)*100) + \
        (__GNUC_MINOR__*10) + \
        __GNUC_PATCHLEVEL__)
#elif defined( __BORLANDC__ )
#   define COMPILER COMPILER_BORL
#   define COMP_VER __BCPLUSPLUS__
#   define __FUNCTION__ __FUNC__ 
#else
#   pragma error "No known compiler!"
#endif

/* See if we can use __forceinline or if we need to use __inline instead */
#if COMPILER == COMPILER_MSVC
#   if COMP_VER >= 1200
#       define FORCEINLINE __forceinline
#   endif
#elif defined(__MINGW32__)
#   if !defined(FORCEINLINE)
#       define FORCEINLINE __inline
#   endif
#else
#   define FORCEINLINE __inline
#endif

/* Finds the current platform */

#if defined( __SYMBIAN32__ ) 
#   define PLATFORM PLATFORM_SYMBIAN
#elif defined( __WIN32__ ) || defined( _WIN32 )
#   define PLATFORM PLATFORM_WIN32
#elif defined( __APPLE_CC__)
    // Device                                                     Simulator
    // Both requiring OS version 2.0 or greater
#   if __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 30000 || __IPHONE_OS_VERSION_MIN_REQUIRED >= 30000
#       define PLATFORM PLATFORM_IPHONE
#   else
#       define PLATFORM PLATFORM_APPLE
#   endif
#else
#   define PLATFORM PLATFORM_LINUX
#endif

    /* Find the arch type */
#if defined(__x86_64__) || defined(_M_X64) || defined(__powerpc64__) || defined(__alpha__) || defined(__ia64__) || defined(__s390__) || defined(__s390x__)
#   define ARCH_TYPE ARCHITECTURE_64
#else
#   define ARCH_TYPE ARCHITECTURE_32
#endif

// For generating compiler warnings - should work on any compiler
// As a side note, if you start your message with 'Warning: ', the MSVC
// IDE actually does catch a warning :)
#define QUOTE_INPLACE(x) # x
#define QUOTE(x) QUOTE_INPLACE(x)
#define WARN( x )  message( __FILE__ "(" QUOTE( __LINE__ ) ") : " x "\n" )

//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// Windows Settings
#if PLATFORM == PLATFORM_WIN32
// Win32 compilers use _DEBUG for specifying debug builds.
#   ifdef _DEBUG
#       define DEBUG_MODE 1
#   else
#       define DEBUG_MODE 0
#   endif
#endif

//----------------------------------------------------------------------------
// Symbian Settings
#if PLATFORM == PLATFORM_SYMBIAN
#	define UNICODE_SUPPORT 1
#   define DEBUG_MODE 0
#	define CLOCKS_PER_SEC  1000
// pragma def were found here: http://www.inf.pucrs.br/~eduardob/disciplinas/SistEmbarcados/Mobile/Nokia/Tools/Carbide_vs/WINSCW/Help/PDF/C_Compilers_Reference_3.2.pdf
#	pragma warn_unusedarg off
#	pragma warn_emptydecl off
#	pragma warn_possunwant off
#endif
//----------------------------------------------------------------------------
// Linux/Apple Settings
#if PLATFORM == PLATFORM_LINUX || PLATFORM == PLATFORM_APPLE || PLATFORM == PLATFORM_IPHONE

// A quick define to overcome different names for the same function
#   define stricmp strcasecmp

// Unlike the Win32 compilers, Linux compilers seem to use DEBUG for when
// specifying a debug build.
// (??? this is wrong, on Linux debug builds aren't marked in any way unless
// you mark it yourself any way you like it -- zap ???)
#   ifdef DEBUG
#       define DEBUG_MODE 1
#   else
#       define DEBUG_MODE 0
#   endif
#endif

//----------------------------------------------------------------------------
// Endian Settings
// check for BIG_ENDIAN config flag, set ENDIAN correctly
#ifdef CONFIG_BIG_ENDIAN
#    define ENDIAN ENDIAN_BIG_VALUE
#else
#    define ENDIAN ENDIAN_LITTLE_VALUE
#endif

namespace Utility
{
	// Integer formats of fixed bit width
	typedef unsigned int		uint32;
	typedef int					int32;
	
	typedef unsigned __int16	uint16;
	typedef __int16				int16;

	typedef unsigned __int8		uint8;
	typedef __int8				int8;

// define uint64 type
#if COMPILER == COMPILER_MSVC
	typedef unsigned __int64 uint64;
	typedef __int64 int64;
#else
	typedef unsigned long long uint64;
	typedef long long int64;
#endif

	typedef float Real;

	static const Real Real_One=1.0f;
	static const Real Real_Two=2.0f;
	static const Real Real_Zero=0.0f;
	static const Real Real_Half=0.5f;
	static const Real Real_Epsilon=1e-06f;
}

#endif
