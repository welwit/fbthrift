/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
* @generated by https://github.com/korovkin/thrift
*/

#import <Foundation/Foundation.h>

#import "TProtocol.h"
#import "TApplicationException.h"
#import "TProtocolException.h"
#import "TProtocolUtil.h"
#import "TProcessor.h"
#import "TObjective-C.h"
#import "TBase.h"
#import "TBaseStruct.h"

@interface exampleExample : TBaseStruct <TBase, NSCoding> {
  NSString * __thrift_name;
  NSString * __thrift_description;

  BOOL __thrift_name_set;
  BOOL __thrift_description_set;
}

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * xyz_description;

- (id) init;
- (id) initWithName: (NSString *) name description: (NSString *) description;
- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;
- (void) validate;

- (BOOL) nameIsSet;
- (BOOL) descriptionIsSet;
@end

@interface examplemoduleConstants : TBaseStruct {
}
@end