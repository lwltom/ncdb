// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             //  从 Windows 头文件中排除极少使用的信息
// Windows 头文件: 
#include <windows.h>



// TODO:  在此处引用程序需要的其他头文件
#include "..\DuiLib\UIlib.h"

using namespace DuiLib;

#ifdef _DEBUG
#   ifdef _UNICODE
#       pragma comment(lib, "..\\lib\\DuiLib_d.lib")
#   else
#       pragma comment(lib, "..\\lib\\DuiLibA_d.lib")
#   endif
#else
#   ifdef _UNICODE
#       pragma comment(lib, "..\\lib\\DuiLib.lib")
#   else
#       pragma comment(lib, "..\\lib\\DuiLibA.lib")
#   endif
#endif

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#ifdef _DEBUG //重载new
#define new  new(_NORMAL_BLOCK, __FILE__, __LINE__)  
#endif