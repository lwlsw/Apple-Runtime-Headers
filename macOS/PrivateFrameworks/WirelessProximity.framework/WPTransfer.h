//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WirelessProximity/WPClient.h>

@class NSMutableData, NSMutableSet, NSUUID;
@protocol WPTransferDelegate;

@interface WPTransfer : WPClient
{
    BOOL _advertising;
    BOOL _scanning;
    BOOL _connectedToPeripheral;
    BOOL _unsubscribeComing;
    BOOL _advertiserConnected;
    BOOL _sentEOM;
    BOOL _sendingTransferComplete;
    id <WPTransferDelegate> _delegate;
    NSUUID *_currentPeripheralUUID;
    NSMutableSet *_ignoredDevices;
    NSMutableData *_notificationData;
    NSUUID *_currentlySubscribedCentral;
    long long _lockScanTimer;
}

@property BOOL sendingTransferComplete; // @synthesize sendingTransferComplete=_sendingTransferComplete;
@property long long lockScanTimer; // @synthesize lockScanTimer=_lockScanTimer;
@property(retain) NSUUID *currentlySubscribedCentral; // @synthesize currentlySubscribedCentral=_currentlySubscribedCentral;
@property(retain) NSMutableData *notificationData; // @synthesize notificationData=_notificationData;
@property(retain) NSMutableSet *ignoredDevices; // @synthesize ignoredDevices=_ignoredDevices;
@property(retain) NSUUID *currentPeripheralUUID; // @synthesize currentPeripheralUUID=_currentPeripheralUUID;
@property BOOL sentEOM; // @synthesize sentEOM=_sentEOM;
@property BOOL advertiserConnected; // @synthesize advertiserConnected=_advertiserConnected;
@property BOOL unsubscribeComing; // @synthesize unsubscribeComing=_unsubscribeComing;
@property BOOL connectedToPeripheral; // @synthesize connectedToPeripheral=_connectedToPeripheral;
@property BOOL scanning; // @synthesize scanning=_scanning;
@property BOOL advertising; // @synthesize advertising=_advertising;
@property __weak id <WPTransferDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stateDidChange:(long long)arg1;
- (void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4;
- (void)transferFailed:(id)arg1;
- (void)updatedNotificationState:(BOOL)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4;
- (void)sentData:(id)arg1 toEndpoint:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4;
- (void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5;
- (void)receivedData:(id)arg1;
- (void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4;
- (void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
- (void)disconnectedDevice:(id)arg1 withError:(id)arg2;
- (void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3;
- (void)deviceDiscovered:(id)arg1;
- (void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)ignoreDevice;
- (void)stopAdvertising;
- (void)startAdvertising;
- (void)populateClientGATT:(CDUnknownBlockType)arg1;
- (void)stopScan;
- (void)startScan;
- (void)dealloc;
- (void)invalidate;
- (id)clientAsString;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3 options:(id)arg4;

@end

