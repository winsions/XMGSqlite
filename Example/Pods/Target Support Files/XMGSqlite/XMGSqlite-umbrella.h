#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "XMGModelTool.h"
#import "XMGSqliteModelTool.h"
#import "XMGSqliteTool.h"
#import "XMGTableTool.h"

FOUNDATION_EXPORT double XMGSqliteVersionNumber;
FOUNDATION_EXPORT const unsigned char XMGSqliteVersionString[];

