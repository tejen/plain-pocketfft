#import <Foundation/Foundation.h>

@interface PlainPocketFFTRunner: NSObject


+ (int)execute_real_forward:(double *)a1 result:(double *)resultMatrix cols:(int)cols rows:(int)rows fct:(double)fct;

@end
