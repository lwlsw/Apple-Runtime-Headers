//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKTritiumToolCommand.h>

@class NTKTritiumToolCommandOption;

@interface NTKTritiumToolBurnInStudyAutoCommand : NTKTritiumToolCommand
{
    NTKTritiumToolCommandOption *_facesOption;
    NTKTritiumToolCommandOption *_stateOption;
    NTKTritiumToolCommandOption *_previewOption;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NTKTritiumToolCommandOption *previewOption; // @synthesize previewOption=_previewOption;
@property(readonly, nonatomic) NTKTritiumToolCommandOption *stateOption; // @synthesize stateOption=_stateOption;
@property(readonly, nonatomic) NTKTritiumToolCommandOption *facesOption; // @synthesize facesOption=_facesOption;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)options;
- (id)commandExample;
- (id)commandString;
- (id)commandDescription;
- (id)init;

@end

