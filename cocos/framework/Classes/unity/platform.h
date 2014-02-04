#ifndef _UNITY_PLATFORM_H_
#define _UNITY_PLATFORM_H_

#include "cocos2d.h"
#include "cocos-ext.h"
#include "cocostudio/CocoStudio.h"
#include "gui/CocosGUI.h"

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
// Endian Settings
// check for BIG_ENDIAN config flag, set ENDIAN correctly
#ifdef CONFIG_BIG_ENDIAN
#    define ENDIAN ENDIAN_BIG_VALUE
#else
#    define ENDIAN ENDIAN_LITTLE_VALUE
#endif

// Integer formats of fixed bit width

// define uint64 type
#if COMPILER == COMPILER_MSVC
	typedef unsigned __int32	uint32;
	typedef __int32				int32;
	typedef unsigned __int16	uint16;
	typedef __int16				int16;
	typedef unsigned __int8		uint8;
	typedef signed char			int8;
	typedef unsigned __int64	uint64;
	typedef __int64				int64;
#else
	typedef unsigned int		uint32;
	typedef int                 int32;
	typedef unsigned short		uint16;
	typedef short				int16;
	typedef unsigned char		uint8;
	typedef signed char			int8;
	typedef unsigned long long	uint64;
	typedef long long			int64;
#endif

typedef float Real;
static const Real Real_One=1.0f;
static const Real Real_Two=2.0f;
static const Real Real_Zero=0.0f;
static const Real Real_Half=0.5f;
static const Real Real_Epsilon=1e-06f;

// DEPRECATED TYPE
#pragma region DEPRECATED TYPE

#	ifdef COCOS2DX_ENGINE_V30
		namespace gui
		{
			//typedef UILayer ccUILayer;
			CC_DEPRECATED_ATTRIBUTE typedef UIWidget		Widget;
			CC_DEPRECATED_ATTRIBUTE typedef UILayout		Layout;
			CC_DEPRECATED_ATTRIBUTE typedef UIButton		Button;
			CC_DEPRECATED_ATTRIBUTE typedef UICheckBox		CheckBox;
			CC_DEPRECATED_ATTRIBUTE typedef UIImageView		ImageView;
			CC_DEPRECATED_ATTRIBUTE typedef UILabel			Label;
			CC_DEPRECATED_ATTRIBUTE typedef UILabelAtlas	LabelAtlas;
			CC_DEPRECATED_ATTRIBUTE typedef UILabelBMFont	LabelBMFont;
			CC_DEPRECATED_ATTRIBUTE typedef UILoadingBar	LoadingBar;
			CC_DEPRECATED_ATTRIBUTE typedef UISlider		Slider;
			CC_DEPRECATED_ATTRIBUTE typedef UITextField		TextField;
			CC_DEPRECATED_ATTRIBUTE typedef UIScrollView	ScrollView;
			CC_DEPRECATED_ATTRIBUTE typedef UIListView		ListView;
			CC_DEPRECATED_ATTRIBUTE typedef UIPageView		PageView;
		}
#	else COCOS2DX_ENGINE_GITHUB_V3
		namespace cocos2d
		{
			namespace gui
			{
				typedef Layer UILayer;
				CC_DEPRECATED_ATTRIBUTE typedef Widget		UIWidget;
				CC_DEPRECATED_ATTRIBUTE typedef Layout		UILayout;
				CC_DEPRECATED_ATTRIBUTE typedef Button		UIButton;
				CC_DEPRECATED_ATTRIBUTE typedef CheckBox	UICheckBox;
				CC_DEPRECATED_ATTRIBUTE typedef ImageView	UIImageView;
				CC_DEPRECATED_ATTRIBUTE typedef Label		UILabel;
				CC_DEPRECATED_ATTRIBUTE typedef LabelAtlas	UILabelAtlas;
				CC_DEPRECATED_ATTRIBUTE typedef LabelBMFont	UILabelBMFont;
				CC_DEPRECATED_ATTRIBUTE typedef LoadingBar	UILoadingBar;
				CC_DEPRECATED_ATTRIBUTE typedef Slider		UISlider;
				CC_DEPRECATED_ATTRIBUTE typedef TextField	UITextField;
				CC_DEPRECATED_ATTRIBUTE typedef ScrollView	UIScrollView;
				CC_DEPRECATED_ATTRIBUTE typedef ListView	UIListView;
				CC_DEPRECATED_ATTRIBUTE typedef PageView	UIPageView;
			}
		}
#	endif

#pragma endregion

#include <vector>

#endif	// _UNITY_PLATFORM_H_
