//
//  audioCapture.h
//  algAudio
//
//  Created by hsu on 2023/2/26.
//

#ifndef audioCapture_h
#define audioCapture_h

__attribute__((visibility("default"))) @protocol IAudioCapture <NSObject>


@required

- (int)startAudioCapture

- (int)stopAudioCapture

@end

#endif /* audioCapture_h */
