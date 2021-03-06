/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/services_wrapper.h>
#include <src/gen-py3/module/services_api.h>
#include <thrift/lib/cpp2/async/AsyncProcessor.h>

namespace apache {
namespace thrift {
namespace fixtures {
namespace types {

SomeServiceWrapper::SomeServiceWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_module__services();
    Py_XINCREF(this->if_object);
  }

SomeServiceWrapper::~SomeServiceWrapper() {
    Py_XDECREF(this->if_object);
}

folly::Future<std::unique_ptr<std::unordered_map<int32_t,std::string>>> SomeServiceWrapper::future_bounce_map(
  std::unique_ptr<std::unordered_map<int32_t,std::string>> m
) {
  folly::Promise<std::unique_ptr<std::unordered_map<int32_t,std::string>>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
m = std::move(m)    ]() mutable {
        call_cy_SomeService_bounce_map(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(m)        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::map<std::string,int64_t>>> SomeServiceWrapper::future_binary_keyed_map(
  std::unique_ptr<std::vector<int64_t>> r
) {
  folly::Promise<std::unique_ptr<std::map<std::string,int64_t>>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
r = std::move(r)    ]() mutable {
        call_cy_SomeService_binary_keyed_map(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(r)        );
    });

  return future;
}

std::shared_ptr<apache::thrift::ServerInterface> SomeServiceInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<SomeServiceWrapper>(if_object, exc);
}
} // namespace apache
} // namespace thrift
} // namespace fixtures
} // namespace types
