//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSCNNNeuron, MPSNNNeuronDescriptor, NSData;
@protocol MPSCNNConvolutionDataSource, MTLBuffer;

@interface MPSCNNConvolution : MPSCNNKernel
{
    unsigned long long _inputFeatureChannels;
    unsigned long long _outputFeatureChannels;
    unsigned long long _layout;
    unsigned long long _groups;
    MPSCNNNeuron *_neuron_deprecated;
    id <MTLBuffer> _weights;
    id <MTLBuffer> _bias;
    unsigned long long _flags;
    BOOL _fullyConnected;
    BOOL _convolutionTranspose;
    id <MTLBuffer> _qWts;
    int _qType;
    struct NeuronInfo _neuronInfo;
    unsigned long long _scaleFactor;
    unsigned long long _channelMultiplier;
    unsigned int _weightsDataType;
    unsigned int _weightsLayout;
    NSData *_biasOriginal;
    id <MTLBuffer> _neuronABuffer;
    unsigned long long _accumulatorPrecisionOption;
    id <MPSCNNConvolutionDataSource> _dataSource;
    NSData *_batchNormalizationData;
    MPSNNNeuronDescriptor *_fusedNeuronDescriptor;
    unsigned long long _featureChannelsLayout;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) MPSNNNeuronDescriptor *fusedNeuronDescriptor; // @synthesize fusedNeuronDescriptor=_fusedNeuronDescriptor;
@property(readonly, retain, nonatomic) id <MPSCNNConvolutionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) unsigned long long channelMultiplier; // @synthesize channelMultiplier=_channelMultiplier;
@property(readonly, nonatomic) unsigned long long subPixelScaleFactor; // @synthesize subPixelScaleFactor=_scaleFactor;
@property(readonly, nonatomic) unsigned long long groups; // @synthesize groups=_groups;
@property(readonly, nonatomic) MPSCNNNeuron *neuron; // @synthesize neuron=_neuron_deprecated;
@property(readonly, nonatomic) unsigned long long featureChannelsLayout; // @synthesize featureChannelsLayout=_featureChannelsLayout;
@property(readonly, nonatomic) unsigned long long outputFeatureChannels; // @synthesize outputFeatureChannels=_outputFeatureChannels;
@property(readonly, nonatomic) unsigned long long inputFeatureChannels; // @synthesize inputFeatureChannels=_inputFeatureChannels;
- (unsigned long long)batchEncodingStorageSizeForSourceImage:(struct NSArray *)arg1 sourceStates:(id)arg2 destinationImage:(struct NSArray *)arg3;
- (unsigned long long)encodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (BOOL)appendBatchBarrier;
- (BOOL)isResultStateReusedAcrossBatch;
- (id)exportWeightsAndBiasesWithCommandBuffer:(id)arg1 resultStateCanBeTemporary:(BOOL)arg2;
- (void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg1 state:(id)arg2;
- (void)reloadWeightsAndBiasesFromDataSource;
- (void)reloadWeightsAndBiasesWithDataSource:(id)arg1;
- (struct NSArray *)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImage:(struct NSArray *)arg2 sourceStates:(id)arg3 destinationImage:(struct NSArray *)arg4;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (struct NSArray *)resultStateBatchForSourceImage:(struct NSArray *)arg1 sourceStates:(id)arg2 destinationImage:(struct NSArray *)arg3;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (id)resourceListForSourceImages:(struct NSArray *)arg1 destinationImages:(struct NSArray *)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 state:(id *)arg4;
- (id)debugDescription;
- (void)copyToGradientState:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4 kernelOffset:(CDStruct_d6af7fc0 *)arg5;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 weights:(id)arg2;
- (id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(_Bool)arg3;
- (id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(BOOL)arg3 convolutionTranspose:(BOOL)arg4;
- (id)initializeWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(_Bool)arg3 convolutionTranspose:(_Bool)arg4;
- (id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float *)arg3 biasTerms:(const float *)arg4 flags:(unsigned long long)arg5;
- (id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float *)arg3 biasTerms:(const float *)arg4 flags:(unsigned long long)arg5 fullyConnected:(_Bool)arg6;
- (id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float *)arg3 biasTerms:(const float *)arg4 flags:(unsigned long long)arg5 fullyConnected:(_Bool)arg6 convolutionTranspose:(_Bool)arg7;
-     // Error parsing type: B92@0:8@16@24r^v32I40I44r^48r^f56i64r^f68Q76B84B88, name: initialize:convolutionDescriptor:kernelWeights:dataType:weightsLayout:range:lookUpTable:qType:biasTerms:flags:fullyConnected:convolutionTranspose:
-     // Error parsing type: c68@0:8@16I24I28r^v32r^f40i48r^52r^f60, name: PrepareAndLoadData:dataType:weightsLayout:weights:biases:quantizationType:ranges:lookUpTable:
- (id)initWithDevice:(id)arg1;
@property(readonly, nonatomic) unsigned long long weightsBufferLength;
- (struct NeuronInfo)neuronInfo;
- (BOOL)convolutionTranspose;
- (int)quantizationType;
- (unsigned int)weightsLayout;
- (id)quantizationBuffer;
- (id)neuronABuffer;
- (id)biases;
- (id)weights;
@property(readonly, nonatomic) float neuronParameterC;
@property(readonly, nonatomic) float neuronParameterB;
@property(readonly, nonatomic) float neuronParameterA;
@property(readonly, nonatomic) int neuronType;
@property(nonatomic) unsigned long long accumulatorPrecisionOption;
- (unsigned long long)maxBatchSize;

@end

