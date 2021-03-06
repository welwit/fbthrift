#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from cython.operator cimport dereference as deref
from cpython.ref cimport PyObject
from thrift.py3.exceptions cimport (
    cTApplicationException,
    ApplicationError as __ApplicationError,
    cTApplicationExceptionType__UNKNOWN)
from thrift.py3.server cimport ServiceInterface, RequestContext, Cpp2RequestContext
from thrift.py3.server import RequestContext, pass_context
from folly cimport (
  cFollyPromise,
  cFollyUnit,
  c_unit
)
from thrift.py3.types cimport move

cimport folly.futures
from folly.executor cimport get_executor
cimport folly.iobuf as __iobuf
import folly.iobuf as __iobuf
from folly.iobuf cimport move as move_iobuf

cimport module.types as _module_types
import module.types as _module_types

import asyncio
import functools
import sys
import traceback
import types as _py_types

from module.services_wrapper cimport cMyServiceInterface
from module.services_wrapper cimport cMyServiceFastInterface
from module.services_wrapper cimport cMyServiceEmptyInterface
from module.services_wrapper cimport cMyServicePrioParentInterface
from module.services_wrapper cimport cMyServicePrioChildInterface


cdef extern from "<utility>" namespace "std":
    cdef cFollyPromise[cFollyUnit] move_promise_cFollyUnit "std::move"(
        cFollyPromise[cFollyUnit])
    cdef cFollyPromise[unique_ptr[string]] move_promise_string "std::move"(
        cFollyPromise[unique_ptr[string]])
    cdef cFollyPromise[cbool] move_promise_cbool "std::move"(
        cFollyPromise[cbool])

cdef class Promise_cFollyUnit:
    cdef cFollyPromise[cFollyUnit] cPromise

    @staticmethod
    cdef create(cFollyPromise[cFollyUnit] cPromise):
        inst = <Promise_cFollyUnit>Promise_cFollyUnit.__new__(Promise_cFollyUnit)
        inst.cPromise = move_promise_cFollyUnit(cPromise)
        return inst

cdef class Promise_string:
    cdef cFollyPromise[unique_ptr[string]] cPromise

    @staticmethod
    cdef create(cFollyPromise[unique_ptr[string]] cPromise):
        inst = <Promise_string>Promise_string.__new__(Promise_string)
        inst.cPromise = move_promise_string(cPromise)
        return inst

cdef class Promise_cbool:
    cdef cFollyPromise[cbool] cPromise

    @staticmethod
    cdef create(cFollyPromise[cbool] cPromise):
        inst = <Promise_cbool>Promise_cbool.__new__(Promise_cbool)
        inst.cPromise = move_promise_cbool(cPromise)
        return inst

cdef object _MyService_annotations = _py_types.MappingProxyType({
})


cdef class MyServiceInterface(
    ServiceInterface
):
    annotations = _MyService_annotations

    def __cinit__(self):
        self._cpp_obj = cMyServiceInterface(
            <PyObject *> self,
            get_executor()
        )

    @staticmethod
    def pass_context_ping(fn):
        return pass_context(fn)

    async def ping(
            self):
        raise NotImplementedError("async def ping is not implemented")

    @staticmethod
    def pass_context_getRandomData(fn):
        return pass_context(fn)

    async def getRandomData(
            self):
        raise NotImplementedError("async def getRandomData is not implemented")

    @staticmethod
    def pass_context_hasDataById(fn):
        return pass_context(fn)

    async def hasDataById(
            self,
            id):
        raise NotImplementedError("async def hasDataById is not implemented")

    @staticmethod
    def pass_context_getDataById(fn):
        return pass_context(fn)

    async def getDataById(
            self,
            id):
        raise NotImplementedError("async def getDataById is not implemented")

    @staticmethod
    def pass_context_putDataById(fn):
        return pass_context(fn)

    async def putDataById(
            self,
            id,
            data):
        raise NotImplementedError("async def putDataById is not implemented")

    @staticmethod
    def pass_context_lobDataById(fn):
        return pass_context(fn)

    async def lobDataById(
            self,
            id,
            data):
        raise NotImplementedError("async def lobDataById is not implemented")
cdef object _MyServiceFast_annotations = _py_types.MappingProxyType({
})


cdef class MyServiceFastInterface(
    ServiceInterface
):
    annotations = _MyServiceFast_annotations

    def __cinit__(self):
        self._cpp_obj = cMyServiceFastInterface(
            <PyObject *> self,
            get_executor()
        )

    @staticmethod
    def pass_context_ping(fn):
        return pass_context(fn)

    async def ping(
            self):
        raise NotImplementedError("async def ping is not implemented")

    @staticmethod
    def pass_context_getRandomData(fn):
        return pass_context(fn)

    async def getRandomData(
            self):
        raise NotImplementedError("async def getRandomData is not implemented")

    @staticmethod
    def pass_context_hasDataById(fn):
        return pass_context(fn)

    async def hasDataById(
            self,
            id):
        raise NotImplementedError("async def hasDataById is not implemented")

    @staticmethod
    def pass_context_getDataById(fn):
        return pass_context(fn)

    async def getDataById(
            self,
            id):
        raise NotImplementedError("async def getDataById is not implemented")

    @staticmethod
    def pass_context_putDataById(fn):
        return pass_context(fn)

    async def putDataById(
            self,
            id,
            data):
        raise NotImplementedError("async def putDataById is not implemented")

    @staticmethod
    def pass_context_lobDataById(fn):
        return pass_context(fn)

    async def lobDataById(
            self,
            id,
            data):
        raise NotImplementedError("async def lobDataById is not implemented")
cdef object _MyServiceEmpty_annotations = _py_types.MappingProxyType({
})


cdef class MyServiceEmptyInterface(
    ServiceInterface
):
    annotations = _MyServiceEmpty_annotations

    def __cinit__(self):
        self._cpp_obj = cMyServiceEmptyInterface(
            <PyObject *> self,
            get_executor()
        )
cdef object _MyServicePrioParent_annotations = _py_types.MappingProxyType({
    """priority""": "HIGH",
})


cdef class MyServicePrioParentInterface(
    ServiceInterface
):
    annotations = _MyServicePrioParent_annotations

    def __cinit__(self):
        self._cpp_obj = cMyServicePrioParentInterface(
            <PyObject *> self,
            get_executor()
        )

    @staticmethod
    def pass_context_ping(fn):
        return pass_context(fn)

    async def ping(
            self):
        raise NotImplementedError("async def ping is not implemented")

    @staticmethod
    def pass_context_pong(fn):
        return pass_context(fn)

    async def pong(
            self):
        raise NotImplementedError("async def pong is not implemented")
cdef object _MyServicePrioChild_annotations = _py_types.MappingProxyType({
})


cdef class MyServicePrioChildInterface(
MyServicePrioParentInterface
):
    annotations = _MyServicePrioChild_annotations

    def __cinit__(self):
        self._cpp_obj = cMyServicePrioChildInterface(
            <PyObject *> self,
            get_executor()
        )

    @staticmethod
    def pass_context_pang(fn):
        return pass_context(fn)

    async def pang(
            self):
        raise NotImplementedError("async def pang is not implemented")


cdef api void call_cy_MyService_ping(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise
):
    cdef MyServiceInterface __iface
    __iface = self
    __promise = Promise_cFollyUnit.create(move_promise_cFollyUnit(cPromise))
    __context = None
    if __iface._pass_context_ping:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        MyService_ping_coro(
            self,
            __context,
            __promise
        )
    )

async def MyService_ping_coro(
    object self,
    object ctx,
    Promise_cFollyUnit promise
):
    try:
        if ctx is not None:
            result = await self.ping(ctx,)
        else:
            result = await self.ping()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler ping:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_MyService_getRandomData(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[unique_ptr[string]] cPromise
):
    cdef MyServiceInterface __iface
    __iface = self
    __promise = Promise_string.create(move_promise_string(cPromise))
    __context = None
    if __iface._pass_context_getRandomData:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        MyService_getRandomData_coro(
            self,
            __context,
            __promise
        )
    )

async def MyService_getRandomData_coro(
    object self,
    object ctx,
    Promise_string promise
):
    try:
        if ctx is not None:
            result = await self.getRandomData(ctx,)
        else:
            result = await self.getRandomData()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler getRandomData:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(make_unique[string](<string?> result.encode('UTF-8')))

cdef api void call_cy_MyService_hasDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cbool] cPromise,
    int64_t id
):
    cdef MyServiceInterface __iface
    __iface = self
    __promise = Promise_cbool.create(move_promise_cbool(cPromise))
    arg_id = id
    __context = None
    if __iface._pass_context_hasDataById:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        MyService_hasDataById_coro(
            self,
            __context,
            __promise,
            arg_id
        )
    )

async def MyService_hasDataById_coro(
    object self,
    object ctx,
    Promise_cbool promise,
    id
):
    try:
        if ctx is not None:
            result = await self.hasDataById(ctx,
                      id)
        else:
            result = await self.hasDataById(
                      id)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler hasDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(<cbool> result)

cdef api void call_cy_MyService_getDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[unique_ptr[string]] cPromise,
    int64_t id
):
    cdef MyServiceInterface __iface
    __iface = self
    __promise = Promise_string.create(move_promise_string(cPromise))
    arg_id = id
    __context = None
    if __iface._pass_context_getDataById:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        MyService_getDataById_coro(
            self,
            __context,
            __promise,
            arg_id
        )
    )

async def MyService_getDataById_coro(
    object self,
    object ctx,
    Promise_string promise,
    id
):
    try:
        if ctx is not None:
            result = await self.getDataById(ctx,
                      id)
        else:
            result = await self.getDataById(
                      id)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler getDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(make_unique[string](<string?> result.encode('UTF-8')))

cdef api void call_cy_MyService_putDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise,
    int64_t id,
    unique_ptr[string] data
):
    cdef MyServiceInterface __iface
    __iface = self
    __promise = Promise_cFollyUnit.create(move_promise_cFollyUnit(cPromise))
    arg_id = id
    arg_data = (deref(data)).data().decode('UTF-8')
    __context = None
    if __iface._pass_context_putDataById:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        MyService_putDataById_coro(
            self,
            __context,
            __promise,
            arg_id,
            arg_data
        )
    )

async def MyService_putDataById_coro(
    object self,
    object ctx,
    Promise_cFollyUnit promise,
    id,
    data
):
    try:
        if ctx is not None:
            result = await self.putDataById(ctx,
                      id,
                      data)
        else:
            result = await self.putDataById(
                      id,
                      data)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler putDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_MyService_lobDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise,
    int64_t id,
    unique_ptr[string] data
):
    cdef MyServiceInterface __iface
    __iface = self
    __promise = Promise_cFollyUnit.create(move_promise_cFollyUnit(cPromise))
    arg_id = id
    arg_data = (deref(data)).data().decode('UTF-8')
    __context = None
    if __iface._pass_context_lobDataById:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        MyService_lobDataById_coro(
            self,
            __context,
            __promise,
            arg_id,
            arg_data
        )
    )

async def MyService_lobDataById_coro(
    object self,
    object ctx,
    Promise_cFollyUnit promise,
    id,
    data
):
    try:
        if ctx is not None:
            result = await self.lobDataById(ctx,
                      id,
                      data)
        else:
            result = await self.lobDataById(
                      id,
                      data)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler lobDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_MyServiceFast_ping(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise
):
    cdef MyServiceFastInterface __iface
    __iface = self
    __promise = Promise_cFollyUnit.create(move_promise_cFollyUnit(cPromise))
    __context = None
    if __iface._pass_context_ping:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        MyServiceFast_ping_coro(
            self,
            __context,
            __promise
        )
    )

async def MyServiceFast_ping_coro(
    object self,
    object ctx,
    Promise_cFollyUnit promise
):
    try:
        if ctx is not None:
            result = await self.ping(ctx,)
        else:
            result = await self.ping()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler ping:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_MyServiceFast_getRandomData(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[unique_ptr[string]] cPromise
):
    cdef MyServiceFastInterface __iface
    __iface = self
    __promise = Promise_string.create(move_promise_string(cPromise))
    __context = None
    if __iface._pass_context_getRandomData:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        MyServiceFast_getRandomData_coro(
            self,
            __context,
            __promise
        )
    )

async def MyServiceFast_getRandomData_coro(
    object self,
    object ctx,
    Promise_string promise
):
    try:
        if ctx is not None:
            result = await self.getRandomData(ctx,)
        else:
            result = await self.getRandomData()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler getRandomData:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(make_unique[string](<string?> result.encode('UTF-8')))

cdef api void call_cy_MyServiceFast_hasDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cbool] cPromise,
    int64_t id
):
    cdef MyServiceFastInterface __iface
    __iface = self
    __promise = Promise_cbool.create(move_promise_cbool(cPromise))
    arg_id = id
    __context = None
    if __iface._pass_context_hasDataById:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        MyServiceFast_hasDataById_coro(
            self,
            __context,
            __promise,
            arg_id
        )
    )

async def MyServiceFast_hasDataById_coro(
    object self,
    object ctx,
    Promise_cbool promise,
    id
):
    try:
        if ctx is not None:
            result = await self.hasDataById(ctx,
                      id)
        else:
            result = await self.hasDataById(
                      id)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler hasDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(<cbool> result)

cdef api void call_cy_MyServiceFast_getDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[unique_ptr[string]] cPromise,
    int64_t id
):
    cdef MyServiceFastInterface __iface
    __iface = self
    __promise = Promise_string.create(move_promise_string(cPromise))
    arg_id = id
    __context = None
    if __iface._pass_context_getDataById:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        MyServiceFast_getDataById_coro(
            self,
            __context,
            __promise,
            arg_id
        )
    )

async def MyServiceFast_getDataById_coro(
    object self,
    object ctx,
    Promise_string promise,
    id
):
    try:
        if ctx is not None:
            result = await self.getDataById(ctx,
                      id)
        else:
            result = await self.getDataById(
                      id)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler getDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(make_unique[string](<string?> result.encode('UTF-8')))

cdef api void call_cy_MyServiceFast_putDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise,
    int64_t id,
    unique_ptr[string] data
):
    cdef MyServiceFastInterface __iface
    __iface = self
    __promise = Promise_cFollyUnit.create(move_promise_cFollyUnit(cPromise))
    arg_id = id
    arg_data = (deref(data)).data().decode('UTF-8')
    __context = None
    if __iface._pass_context_putDataById:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        MyServiceFast_putDataById_coro(
            self,
            __context,
            __promise,
            arg_id,
            arg_data
        )
    )

async def MyServiceFast_putDataById_coro(
    object self,
    object ctx,
    Promise_cFollyUnit promise,
    id,
    data
):
    try:
        if ctx is not None:
            result = await self.putDataById(ctx,
                      id,
                      data)
        else:
            result = await self.putDataById(
                      id,
                      data)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler putDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_MyServiceFast_lobDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise,
    int64_t id,
    unique_ptr[string] data
):
    cdef MyServiceFastInterface __iface
    __iface = self
    __promise = Promise_cFollyUnit.create(move_promise_cFollyUnit(cPromise))
    arg_id = id
    arg_data = (deref(data)).data().decode('UTF-8')
    __context = None
    if __iface._pass_context_lobDataById:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        MyServiceFast_lobDataById_coro(
            self,
            __context,
            __promise,
            arg_id,
            arg_data
        )
    )

async def MyServiceFast_lobDataById_coro(
    object self,
    object ctx,
    Promise_cFollyUnit promise,
    id,
    data
):
    try:
        if ctx is not None:
            result = await self.lobDataById(ctx,
                      id,
                      data)
        else:
            result = await self.lobDataById(
                      id,
                      data)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler lobDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_MyServicePrioParent_ping(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise
):
    cdef MyServicePrioParentInterface __iface
    __iface = self
    __promise = Promise_cFollyUnit.create(move_promise_cFollyUnit(cPromise))
    __context = None
    if __iface._pass_context_ping:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        MyServicePrioParent_ping_coro(
            self,
            __context,
            __promise
        )
    )

async def MyServicePrioParent_ping_coro(
    object self,
    object ctx,
    Promise_cFollyUnit promise
):
    try:
        if ctx is not None:
            result = await self.ping(ctx,)
        else:
            result = await self.ping()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler ping:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_MyServicePrioParent_pong(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise
):
    cdef MyServicePrioParentInterface __iface
    __iface = self
    __promise = Promise_cFollyUnit.create(move_promise_cFollyUnit(cPromise))
    __context = None
    if __iface._pass_context_pong:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        MyServicePrioParent_pong_coro(
            self,
            __context,
            __promise
        )
    )

async def MyServicePrioParent_pong_coro(
    object self,
    object ctx,
    Promise_cFollyUnit promise
):
    try:
        if ctx is not None:
            result = await self.pong(ctx,)
        else:
            result = await self.pong()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler pong:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_MyServicePrioChild_pang(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise
):
    cdef MyServicePrioChildInterface __iface
    __iface = self
    __promise = Promise_cFollyUnit.create(move_promise_cFollyUnit(cPromise))
    __context = None
    if __iface._pass_context_pang:
        __context = RequestContext.create(ctx)
    asyncio.get_event_loop().create_task(
        MyServicePrioChild_pang_coro(
            self,
            __context,
            __promise
        )
    )

async def MyServicePrioChild_pang_coro(
    object self,
    object ctx,
    Promise_cFollyUnit promise
):
    try:
        if ctx is not None:
            result = await self.pang(ctx,)
        else:
            result = await self.pang()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler pang:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

