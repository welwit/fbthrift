/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

template <class Protocol_>
uint32_t Empty::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


    while (true) {
      xfer += iprot->readFieldBegin(fname, ftype, fid);
      if (ftype == apache::thrift::protocol::T_STOP) {
        break;
      }
      if (fid == std::numeric_limits<int16_t>::min()) {}
      switch (fid) {
        default:
        {
          xfer += iprot->skip(ftype);
          break;
        }
      }
      xfer += iprot->readFieldEnd();
  }
    xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t Empty::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Empty");
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Empty::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Empty");
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Empty::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Empty");
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t MyStruct::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


    while (true) {
      xfer += iprot->readFieldBegin(fname, ftype, fid);
      if (ftype == apache::thrift::protocol::T_STOP) {
        break;
      }
      if (fid == std::numeric_limits<int16_t>::min()) {
        if (fname == "MyBoolField") {
          fid = 1;
          ftype = apache::thrift::protocol::T_BOOL;
        }
        if (fname == "MyIntField") {
          fid = 2;
          ftype = apache::thrift::protocol::T_I64;
        }
        if (fname == "MyStringField") {
          fid = 3;
          ftype = apache::thrift::protocol::T_STRING;
        }
        if (fname == "MyStringField2") {
          fid = 4;
          ftype = apache::thrift::protocol::T_STRING;
        }
      }
      switch (fid) {
        case 1:
        {
          if (ftype == apache::thrift::protocol::T_BOOL) {
            xfer += iprot->readBool(this->MyBoolField);
            this->__isset.MyBoolField = true;
          } else {
            xfer += iprot->skip(ftype);
          }
        break;
       }
        case 2:
        {
          if (ftype == apache::thrift::protocol::T_I64) {
            xfer += iprot->readI64(this->MyIntField);
            this->__isset.MyIntField = true;
          } else {
            xfer += iprot->skip(ftype);
          }
        break;
       }
        case 3:
        {
          if (ftype == apache::thrift::protocol::T_STRING) {
            xfer += iprot->readString(this->MyStringField);
            this->__isset.MyStringField = true;
          } else {
            xfer += iprot->skip(ftype);
          }
        break;
       }
        case 4:
        {
          if (ftype == apache::thrift::protocol::T_STRING) {
            xfer += iprot->readString(this->MyStringField2);
            this->__isset.MyStringField2 = true;
          } else {
            xfer += iprot->skip(ftype);
          }
        break;
       }
        default:
        {
          xfer += iprot->skip(ftype);
          break;
        }
      }
      xfer += iprot->readFieldEnd();
  }
    xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  xfer += prot_->serializedFieldSize("MyBoolField", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->MyBoolField);
  xfer += prot_->serializedFieldSize("MyIntField", apache::thrift::protocol::T_I64, 2);
  xfer += prot_->serializedSizeI64(this->MyIntField);
  xfer += prot_->serializedFieldSize("MyStringField", apache::thrift::protocol::T_STRING, 3);
  xfer += prot_->serializedSizeString(this->MyStringField);
  xfer += prot_->serializedFieldSize("MyStringField2", apache::thrift::protocol::T_STRING, 4);
  xfer += prot_->serializedSizeString(this->MyStringField2);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  xfer += prot_->serializedFieldSize("MyBoolField", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->MyBoolField);
  xfer += prot_->serializedFieldSize("MyIntField", apache::thrift::protocol::T_I64, 2);
  xfer += prot_->serializedSizeI64(this->MyIntField);
  xfer += prot_->serializedFieldSize("MyStringField", apache::thrift::protocol::T_STRING, 3);
  xfer += prot_->serializedSizeString(this->MyStringField);
  xfer += prot_->serializedFieldSize("MyStringField2", apache::thrift::protocol::T_STRING, 4);
  xfer += prot_->serializedSizeString(this->MyStringField2);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyStruct");
  xfer += prot_->writeFieldBegin("MyBoolField", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->writeBool(this->MyBoolField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("MyIntField", apache::thrift::protocol::T_I64, 2);
  xfer += prot_->writeI64(this->MyIntField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("MyStringField", apache::thrift::protocol::T_STRING, 3);
  xfer += prot_->writeString(this->MyStringField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("MyStringField2", apache::thrift::protocol::T_STRING, 4);
  xfer += prot_->writeString(this->MyStringField2);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2
