//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CRKIdentityMarkedCertificate, CRKIdentityMarkedPrivateKey, NSSet;

@protocol CRKIdentityServiceInterface
- (void)enableMocking:(_Bool)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)fetchClassroomCourseIDsForASMCourseIDs:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchMyOrganizationIdentifierWithCompletion:(void (^)(NSUUID *, NSError *))arg1;
- (void)removeIdentityPrivateKeysWithKeyPairMarkers:(NSSet *)arg1 completion:(void (^)(NSError *))arg2;
- (void)publishIdentityPrivateKeysWithActiveMarkedPrivateKey:(CRKIdentityMarkedPrivateKey *)arg1 stagedMarkedPrivateKey:(CRKIdentityMarkedPrivateKey *)arg2 completion:(void (^)(NSError *))arg3;
- (void)fetchPrivateKeysWithKeyPairMarkers:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchMyCertificatesWithCompletion:(void (^)(CRKIdentityMarkedCertificate *, CRKIdentityMarkedCertificate *, NSError *))arg1;
- (void)fetchCertificatesForClassKitConsumerIdentifiers:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)removeIdentityCertificatesWithKeyPairMarkers:(NSSet *)arg1 completion:(void (^)(NSError *))arg2;
- (void)publishIdentityCertificatesWithActiveMarkedCertificate:(CRKIdentityMarkedCertificate *)arg1 stagedMarkedCertificate:(CRKIdentityMarkedCertificate *)arg2 completion:(void (^)(NSError *))arg3;
@end

