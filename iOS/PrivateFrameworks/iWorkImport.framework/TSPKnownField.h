//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPForwardsCompatibleField-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSPKnownField : NSObject <TSPForwardsCompatibleField>
{
    int _type;
    int _number;
    // Error parsing type: {FieldInfo="_vptr$MessageLite"^^?"_internal_metadata_"{InternalMetadataWithArena="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"Ai}}"object_references_"{RepeatedField<unsigned long long>="current_size_"i"total_size_"i"ptr_"(Pointer="arena"^{Arena}"rep"^{Rep})}"_object_references_cached_byte_size_"i"data_references_"{RepeatedField<unsigned long long>="current_size_"i"total_size_"i"ptr_"(Pointer="arena"^{Arena}"rep"^{Rep})}"_data_references_cached_byte_size_"i"known_field_version_"{RepeatedField<unsigned int>="current_size_"i"total_size_"i"ptr_"(Pointer="arena"^{Arena}"rep"^{Rep})}"_known_field_version_cached_byte_size_"i"known_field_feature_identifier_"{ArenaStringPtr="ptr_"^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}"path_"^{FieldPath}"type_"i"unknown_field_rule_"i"known_field_rule_"i}, name: _fieldInfo
}

+     // Error parsing type: @48@0:8r^{FieldDescriptor=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{FileDescriptor}^{GoogleOnceDynamic}iiBBBii^{Descriptor}^{OneofDescriptor}^{Descriptor}^{Descriptor}^{EnumDescriptor}^{FieldOptions}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}(?=iqIQfdB^{EnumValueDescriptor}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >})}16r^{FieldInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{FieldPath}iii}24r^{Message=^^?}32r^{Reflection=^^?}40, name: knownFieldWithFieldDescriptor:fieldInfo:message:reflection:
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
-     // Error parsing type: v24@0:8^{MessageInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedPtrField<TSP::FieldInfo>=^{Arena}ii^{Rep}}{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedPtrField<TSP::FieldPath>=^{Arena}ii^{Rep}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i^{FieldPath}III}16, name: updateMessageInfo:
- (void)mergeToMessage:(struct Message *)arg1 reflection:(const struct Reflection *)arg2;
- (void)mergeToUnknownFieldSet:(struct UnknownFieldSet *)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
-     // Error parsing type: r^{FieldInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{FieldPath}iii}16@0:8, name: fieldInfo
@property(readonly, nonatomic) _Bool hasUnknownValues;
@property(readonly, nonatomic) _Bool hasKnownValues;
-     // Error parsing type: @48@0:8r^{FieldDescriptor=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{FileDescriptor}^{GoogleOnceDynamic}iiBBBii^{Descriptor}^{OneofDescriptor}^{Descriptor}^{Descriptor}^{EnumDescriptor}^{FieldOptions}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}(?=iqIQfdB^{EnumValueDescriptor}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >})}16r^{FieldInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{FieldPath}iii}24r^{Message=^^?}32r^{Reflection=^^?}40, name: initWithFieldDescriptor:fieldInfo:message:reflection:
- (id)init;

@end

