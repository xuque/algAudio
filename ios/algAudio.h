//
//  algAudio.h
//  algAudio
//
//  Created by hsu on 2023/2/26.
//

#import <Foundation/Foundation.h>

#pragma mark interfaceDefine
__attribute__((visibility("default"))) @interface algAudio : NSObject 

+ (instancetype _Nonnull) createEngine

+ (void) destroyEngine

@end
