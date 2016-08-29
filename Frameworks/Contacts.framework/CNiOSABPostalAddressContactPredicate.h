/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABPostalAddressContactPredicate : CNPredicate <CNiOSContactPredicate> {
    CNPostalAddress * _postalAddress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CNPostalAddress *postalAddress;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (struct __CFArray { }*)cn_copyPeopleInAddressBook:(void*)arg1 withSortOrder:(unsigned int)arg2 matchInfos:(id*)arg3 options:(unsigned long long)arg4 error:(struct __CFError {}**)arg5;
- (bool)cn_supportsNativeSorting;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPostalAddress:(id)arg1;
- (id)postalAddress;
- (void)setPostalAddress:(id)arg1;

@end