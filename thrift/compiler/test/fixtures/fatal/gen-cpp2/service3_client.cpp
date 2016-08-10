/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/service3.h"

#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/service3.tcc"

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace test_cpp2 { namespace cpp_reflection {

const char* service3AsyncClient::getServiceName() {
  return "service3";
}

void service3AsyncClient::methodA(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  methodA(rpcOptions, std::move(callback));
}

void service3AsyncClient::methodA(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      methodAT(&writer, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      methodAT(&writer, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void service3AsyncClient::sync_methodA() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_methodA(rpcOptions);
}

void service3AsyncClient::sync_methodA(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback443 = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  methodA(rpcOptions, std::move(callback443));
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_methodA(_returnState);
}

folly::Future<folly::Unit> service3AsyncClient::future_methodA() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_methodA(rpcOptions);
}

folly::Future<folly::Unit> service3AsyncClient::future_methodA(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> promise444;
  auto future445 = promise444.getFuture();
  auto callback446 = folly::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise444), recv_wrapped_methodA, channel_);
  methodA(rpcOptions, std::move(callback446));
  return future445;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> service3AsyncClient::header_future_methodA(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> promise447;
  auto future448 = promise447.getFuture();
  auto callback449 = folly::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise447), recv_wrapped_methodA, channel_);
  methodA(rpcOptions, std::move(callback449));
  return future448;
}

void service3AsyncClient::methodA(std::function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  methodA(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper service3AsyncClient::recv_wrapped_methodA(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_methodAT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_methodAT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void service3AsyncClient::recv_methodA(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_methodA(state);
  if (ew) {
    ew.throwException();
  }
}

void service3AsyncClient::recv_instance_methodA(::apache::thrift::ClientReceiveState& state) {
  recv_methodA(state);
}

folly::exception_wrapper service3AsyncClient::recv_instance_wrapped_methodA(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_methodA(state);
}

void service3AsyncClient::methodB(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  ::apache::thrift::RpcOptions rpcOptions;
  methodB(rpcOptions, std::move(callback), x, y, z);
}

void service3AsyncClient::methodB(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      methodBT(&writer, rpcOptions, std::move(callback), x, y, z);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      methodBT(&writer, rpcOptions, std::move(callback), x, y, z);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void service3AsyncClient::sync_methodB(int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_methodB(rpcOptions, x, y, z);
}

void service3AsyncClient::sync_methodB(apache::thrift::RpcOptions& rpcOptions, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback450 = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  methodB(rpcOptions, std::move(callback450), x, y, z);
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_methodB(_returnState);
}

folly::Future<folly::Unit> service3AsyncClient::future_methodB(int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_methodB(rpcOptions, x, y, z);
}

folly::Future<folly::Unit> service3AsyncClient::future_methodB(apache::thrift::RpcOptions& rpcOptions, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  folly::Promise<folly::Unit> promise451;
  auto future452 = promise451.getFuture();
  auto callback453 = folly::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise451), recv_wrapped_methodB, channel_);
  methodB(rpcOptions, std::move(callback453), x, y, z);
  return future452;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> service3AsyncClient::header_future_methodB(apache::thrift::RpcOptions& rpcOptions, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> promise454;
  auto future455 = promise454.getFuture();
  auto callback456 = folly::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise454), recv_wrapped_methodB, channel_);
  methodB(rpcOptions, std::move(callback456), x, y, z);
  return future455;
}

void service3AsyncClient::methodB(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z) {
  methodB(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)),x,y,z);
}

folly::exception_wrapper service3AsyncClient::recv_wrapped_methodB(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_methodBT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_methodBT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void service3AsyncClient::recv_methodB(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_methodB(state);
  if (ew) {
    ew.throwException();
  }
}

void service3AsyncClient::recv_instance_methodB(::apache::thrift::ClientReceiveState& state) {
  recv_methodB(state);
}

folly::exception_wrapper service3AsyncClient::recv_instance_wrapped_methodB(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_methodB(state);
}

void service3AsyncClient::methodC(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  methodC(rpcOptions, std::move(callback));
}

void service3AsyncClient::methodC(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      methodCT(&writer, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      methodCT(&writer, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

int32_t service3AsyncClient::sync_methodC() {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_methodC(rpcOptions);
}

int32_t service3AsyncClient::sync_methodC(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback457 = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  methodC(rpcOptions, std::move(callback457));
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  return recv_methodC(_returnState);
}

folly::Future<int32_t> service3AsyncClient::future_methodC() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_methodC(rpcOptions);
}

folly::Future<int32_t> service3AsyncClient::future_methodC(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<int32_t> promise458;
  auto future459 = promise458.getFuture();
  auto callback460 = folly::make_unique<apache::thrift::FutureCallback<int32_t>>(std::move(promise458), recv_wrapped_methodC, channel_);
  methodC(rpcOptions, std::move(callback460));
  return future459;
}

folly::Future<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> service3AsyncClient::header_future_methodC(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> promise461;
  auto future462 = promise461.getFuture();
  auto callback463 = folly::make_unique<apache::thrift::HeaderFutureCallback<int32_t>>(std::move(promise461), recv_wrapped_methodC, channel_);
  methodC(rpcOptions, std::move(callback463));
  return future462;
}

void service3AsyncClient::methodC(std::function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  methodC(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper service3AsyncClient::recv_wrapped_methodC(int32_t& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_methodCT(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_methodCT(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

int32_t service3AsyncClient::recv_methodC(::apache::thrift::ClientReceiveState& state) {
  int32_t _return;
  auto ew = recv_wrapped_methodC(_return, state);
  if (ew) {
    ew.throwException();
  }
  return _return;
}

int32_t service3AsyncClient::recv_instance_methodC(::apache::thrift::ClientReceiveState& state) {
  return recv_methodC(state);
}

folly::exception_wrapper service3AsyncClient::recv_instance_wrapped_methodC(int32_t& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_methodC(_return, state);
}

void service3AsyncClient::methodD(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  ::apache::thrift::RpcOptions rpcOptions;
  methodD(rpcOptions, std::move(callback), i, j, k);
}

void service3AsyncClient::methodD(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      methodDT(&writer, rpcOptions, std::move(callback), i, j, k);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      methodDT(&writer, rpcOptions, std::move(callback), i, j, k);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

int32_t service3AsyncClient::sync_methodD(int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_methodD(rpcOptions, i, j, k);
}

int32_t service3AsyncClient::sync_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback464 = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  methodD(rpcOptions, std::move(callback464), i, j, k);
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  return recv_methodD(_returnState);
}

folly::Future<int32_t> service3AsyncClient::future_methodD(int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_methodD(rpcOptions, i, j, k);
}

folly::Future<int32_t> service3AsyncClient::future_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  folly::Promise<int32_t> promise465;
  auto future466 = promise465.getFuture();
  auto callback467 = folly::make_unique<apache::thrift::FutureCallback<int32_t>>(std::move(promise465), recv_wrapped_methodD, channel_);
  methodD(rpcOptions, std::move(callback467), i, j, k);
  return future466;
}

folly::Future<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> service3AsyncClient::header_future_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  folly::Promise<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> promise468;
  auto future469 = promise468.getFuture();
  auto callback470 = folly::make_unique<apache::thrift::HeaderFutureCallback<int32_t>>(std::move(promise468), recv_wrapped_methodD, channel_);
  methodD(rpcOptions, std::move(callback470), i, j, k);
  return future469;
}

void service3AsyncClient::methodD(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k) {
  methodD(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)),i,j,k);
}

folly::exception_wrapper service3AsyncClient::recv_wrapped_methodD(int32_t& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_methodDT(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_methodDT(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

int32_t service3AsyncClient::recv_methodD(::apache::thrift::ClientReceiveState& state) {
  int32_t _return;
  auto ew = recv_wrapped_methodD(_return, state);
  if (ew) {
    ew.throwException();
  }
  return _return;
}

int32_t service3AsyncClient::recv_instance_methodD(::apache::thrift::ClientReceiveState& state) {
  return recv_methodD(state);
}

folly::exception_wrapper service3AsyncClient::recv_instance_wrapped_methodD(int32_t& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_methodD(_return, state);
}

void service3AsyncClient::methodE(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  methodE(rpcOptions, std::move(callback));
}

void service3AsyncClient::methodE(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      methodET(&writer, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      methodET(&writer, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void service3AsyncClient::sync_methodE( ::test_cpp2::cpp_reflection::struct2& _return) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_methodE(rpcOptions, _return);
}

void service3AsyncClient::sync_methodE(apache::thrift::RpcOptions& rpcOptions,  ::test_cpp2::cpp_reflection::struct2& _return) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback471 = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  methodE(rpcOptions, std::move(callback471));
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_methodE(_return, _returnState);
}

folly::Future< ::test_cpp2::cpp_reflection::struct2> service3AsyncClient::future_methodE() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_methodE(rpcOptions);
}

folly::Future< ::test_cpp2::cpp_reflection::struct2> service3AsyncClient::future_methodE(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise< ::test_cpp2::cpp_reflection::struct2> promise472;
  auto future473 = promise472.getFuture();
  auto callback474 = folly::make_unique<apache::thrift::FutureCallback< ::test_cpp2::cpp_reflection::struct2>>(std::move(promise472), recv_wrapped_methodE, channel_);
  methodE(rpcOptions, std::move(callback474));
  return future473;
}

folly::Future<std::pair< ::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> service3AsyncClient::header_future_methodE(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair< ::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> promise475;
  auto future476 = promise475.getFuture();
  auto callback477 = folly::make_unique<apache::thrift::HeaderFutureCallback< ::test_cpp2::cpp_reflection::struct2>>(std::move(promise475), recv_wrapped_methodE, channel_);
  methodE(rpcOptions, std::move(callback477));
  return future476;
}

void service3AsyncClient::methodE(std::function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  methodE(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper service3AsyncClient::recv_wrapped_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_methodET(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_methodET(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void service3AsyncClient::recv_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_methodE(_return, state);
  if (ew) {
    ew.throwException();
  }
}

void service3AsyncClient::recv_instance_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_methodE(_return, state);
}

folly::exception_wrapper service3AsyncClient::recv_instance_wrapped_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_methodE(_return, state);
}

void service3AsyncClient::methodF(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  ::apache::thrift::RpcOptions rpcOptions;
  methodF(rpcOptions, std::move(callback), l, m, n);
}

void service3AsyncClient::methodF(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      methodFT(&writer, rpcOptions, std::move(callback), l, m, n);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      methodFT(&writer, rpcOptions, std::move(callback), l, m, n);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void service3AsyncClient::sync_methodF( ::test_cpp2::cpp_reflection::struct3& _return, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_methodF(rpcOptions, _return, l, m, n);
}

void service3AsyncClient::sync_methodF(apache::thrift::RpcOptions& rpcOptions,  ::test_cpp2::cpp_reflection::struct3& _return, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback478 = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  methodF(rpcOptions, std::move(callback478), l, m, n);
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_methodF(_return, _returnState);
}

folly::Future< ::test_cpp2::cpp_reflection::struct3> service3AsyncClient::future_methodF(int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_methodF(rpcOptions, l, m, n);
}

folly::Future< ::test_cpp2::cpp_reflection::struct3> service3AsyncClient::future_methodF(apache::thrift::RpcOptions& rpcOptions, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  folly::Promise< ::test_cpp2::cpp_reflection::struct3> promise479;
  auto future480 = promise479.getFuture();
  auto callback481 = folly::make_unique<apache::thrift::FutureCallback< ::test_cpp2::cpp_reflection::struct3>>(std::move(promise479), recv_wrapped_methodF, channel_);
  methodF(rpcOptions, std::move(callback481), l, m, n);
  return future480;
}

folly::Future<std::pair< ::test_cpp2::cpp_reflection::struct3, std::unique_ptr<apache::thrift::transport::THeader>>> service3AsyncClient::header_future_methodF(apache::thrift::RpcOptions& rpcOptions, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  folly::Promise<std::pair< ::test_cpp2::cpp_reflection::struct3, std::unique_ptr<apache::thrift::transport::THeader>>> promise482;
  auto future483 = promise482.getFuture();
  auto callback484 = folly::make_unique<apache::thrift::HeaderFutureCallback< ::test_cpp2::cpp_reflection::struct3>>(std::move(promise482), recv_wrapped_methodF, channel_);
  methodF(rpcOptions, std::move(callback484), l, m, n);
  return future483;
}

void service3AsyncClient::methodF(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n) {
  methodF(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)),l,m,n);
}

folly::exception_wrapper service3AsyncClient::recv_wrapped_methodF( ::test_cpp2::cpp_reflection::struct3& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_methodFT(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_methodFT(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void service3AsyncClient::recv_methodF( ::test_cpp2::cpp_reflection::struct3& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_methodF(_return, state);
  if (ew) {
    ew.throwException();
  }
}

void service3AsyncClient::recv_instance_methodF( ::test_cpp2::cpp_reflection::struct3& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_methodF(_return, state);
}

folly::exception_wrapper service3AsyncClient::recv_instance_wrapped_methodF( ::test_cpp2::cpp_reflection::struct3& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_methodF(_return, state);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift