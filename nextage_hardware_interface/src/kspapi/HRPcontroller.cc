// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.

#include "HRPcontroller.h"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_2;



OpenHRP::CommandReceiver_ptr OpenHRP::CommandReceiver_Helper::_nil() {
  return ::OpenHRP::CommandReceiver::_nil();
}

::CORBA::Boolean OpenHRP::CommandReceiver_Helper::is_nil(::OpenHRP::CommandReceiver_ptr p) {
  return ::CORBA::is_nil(p);

}

void OpenHRP::CommandReceiver_Helper::release(::OpenHRP::CommandReceiver_ptr p) {
  ::CORBA::release(p);
}

void OpenHRP::CommandReceiver_Helper::marshalObjRef(::OpenHRP::CommandReceiver_ptr obj, cdrStream& s) {
  ::OpenHRP::CommandReceiver::_marshalObjRef(obj, s);
}

OpenHRP::CommandReceiver_ptr OpenHRP::CommandReceiver_Helper::unmarshalObjRef(cdrStream& s) {
  return ::OpenHRP::CommandReceiver::_unmarshalObjRef(s);
}

void OpenHRP::CommandReceiver_Helper::duplicate(::OpenHRP::CommandReceiver_ptr obj) {
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
}

OpenHRP::CommandReceiver_ptr
OpenHRP::CommandReceiver::_duplicate(::OpenHRP::CommandReceiver_ptr obj)
{
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
  return obj;
}

OpenHRP::CommandReceiver_ptr
OpenHRP::CommandReceiver::_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


OpenHRP::CommandReceiver_ptr
OpenHRP::CommandReceiver::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

OpenHRP::CommandReceiver_ptr
OpenHRP::CommandReceiver::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_CommandReceiver _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_CommandReceiver* _the_nil_ptr = 0;
  if (!_the_nil_ptr) {
    omni::nilRefLock().lock();
    if (!_the_nil_ptr) {
      _the_nil_ptr = new _objref_CommandReceiver;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* OpenHRP::CommandReceiver::_PD_repoId = "IDL:OpenHRP/CommandReceiver:1.0";


OpenHRP::_objref_CommandReceiver::~_objref_CommandReceiver() {
  
}


OpenHRP::_objref_CommandReceiver::_objref_CommandReceiver(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::OpenHRP::CommandReceiver::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
OpenHRP::_objref_CommandReceiver::_ptrToObjRef(const char* id)
{
  if (id == ::OpenHRP::CommandReceiver::_PD_repoId)
    return (::OpenHRP::CommandReceiver_ptr) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (::CORBA::Object_ptr) this;

  if (omni::strMatch(id, ::OpenHRP::CommandReceiver::_PD_repoId))
    return (::OpenHRP::CommandReceiver_ptr) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (::CORBA::Object_ptr) this;

  return 0;
}


//
// Code for OpenHRP::CommandReceiver::sendMsg

// Proxy call descriptor class. Mangled signature:
//  void_i_cstring
class _0RL_cd_969e6a9bf2804fc9_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_969e6a9bf2804fc9_00000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

    
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0_;
  const char* arg_0;
};

void _0RL_cd_969e6a9bf2804fc9_00000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);

}

void _0RL_cd_969e6a9bf2804fc9_00000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();

}

const char* const _0RL_cd_969e6a9bf2804fc9_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_969e6a9bf2804fc9_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_969e6a9bf2804fc9_00000000* tcd = (_0RL_cd_969e6a9bf2804fc9_00000000*)cd;
  OpenHRP::_impl_CommandReceiver* impl = (OpenHRP::_impl_CommandReceiver*) svnt->_ptrToInterface(OpenHRP::CommandReceiver::_PD_repoId);
  impl->sendMsg(tcd->arg_0);


}

void OpenHRP::_objref_CommandReceiver::sendMsg(const char* msg)
{
  _0RL_cd_969e6a9bf2804fc9_00000000 _call_desc(_0RL_lcfn_969e6a9bf2804fc9_10000000, "sendMsg", 8);
  _call_desc.arg_0 = msg;

  _invoke(_call_desc);



}

OpenHRP::_pof_CommandReceiver::~_pof_CommandReceiver() {}


omniObjRef*
OpenHRP::_pof_CommandReceiver::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::OpenHRP::_objref_CommandReceiver(ior, id);
}


::CORBA::Boolean
OpenHRP::_pof_CommandReceiver::is_a(const char* id) const
{
  if (omni::ptrStrMatch(id, ::OpenHRP::CommandReceiver::_PD_repoId))
    return 1;
  
  return 0;
}

const OpenHRP::_pof_CommandReceiver _the_pof_OpenHRP_mCommandReceiver;

OpenHRP::_impl_CommandReceiver::~_impl_CommandReceiver() {}


::CORBA::Boolean
OpenHRP::_impl_CommandReceiver::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if (omni::strMatch(op, "sendMsg")) {

    _0RL_cd_969e6a9bf2804fc9_00000000 _call_desc(_0RL_lcfn_969e6a9bf2804fc9_10000000, "sendMsg", 8, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
OpenHRP::_impl_CommandReceiver::_ptrToInterface(const char* id)
{
  if (id == ::OpenHRP::CommandReceiver::_PD_repoId)
    return (::OpenHRP::_impl_CommandReceiver*) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (void*) 1;

  if (omni::strMatch(id, ::OpenHRP::CommandReceiver::_PD_repoId))
    return (::OpenHRP::_impl_CommandReceiver*) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (void*) 1;
  return 0;
}

const char*
OpenHRP::_impl_CommandReceiver::_mostDerivedRepoId()
{
  return ::OpenHRP::CommandReceiver::_PD_repoId;
}

OpenHRP::Plugin_ptr OpenHRP::Plugin_Helper::_nil() {
  return ::OpenHRP::Plugin::_nil();
}

::CORBA::Boolean OpenHRP::Plugin_Helper::is_nil(::OpenHRP::Plugin_ptr p) {
  return ::CORBA::is_nil(p);

}

void OpenHRP::Plugin_Helper::release(::OpenHRP::Plugin_ptr p) {
  ::CORBA::release(p);
}

void OpenHRP::Plugin_Helper::marshalObjRef(::OpenHRP::Plugin_ptr obj, cdrStream& s) {
  ::OpenHRP::Plugin::_marshalObjRef(obj, s);
}

OpenHRP::Plugin_ptr OpenHRP::Plugin_Helper::unmarshalObjRef(cdrStream& s) {
  return ::OpenHRP::Plugin::_unmarshalObjRef(s);
}

void OpenHRP::Plugin_Helper::duplicate(::OpenHRP::Plugin_ptr obj) {
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
}

OpenHRP::Plugin_ptr
OpenHRP::Plugin::_duplicate(::OpenHRP::Plugin_ptr obj)
{
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
  return obj;
}

OpenHRP::Plugin_ptr
OpenHRP::Plugin::_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


OpenHRP::Plugin_ptr
OpenHRP::Plugin::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

OpenHRP::Plugin_ptr
OpenHRP::Plugin::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_Plugin _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_Plugin* _the_nil_ptr = 0;
  if (!_the_nil_ptr) {
    omni::nilRefLock().lock();
    if (!_the_nil_ptr) {
      _the_nil_ptr = new _objref_Plugin;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* OpenHRP::Plugin::_PD_repoId = "IDL:OpenHRP/Plugin:1.0";


OpenHRP::_objref_Plugin::~_objref_Plugin() {
  
}


OpenHRP::_objref_Plugin::_objref_Plugin(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::OpenHRP::Plugin::_PD_repoId, ior, id, 1),
   _objref_CommandReceiver(ior, id)
   
{
  _PR_setobj(this);
}

void*
OpenHRP::_objref_Plugin::_ptrToObjRef(const char* id)
{
  if (id == ::OpenHRP::Plugin::_PD_repoId)
    return (::OpenHRP::Plugin_ptr) this;
  if (id == ::OpenHRP::CommandReceiver::_PD_repoId)
    return (::OpenHRP::CommandReceiver_ptr) this;


  if (id == ::CORBA::Object::_PD_repoId)
    return (::CORBA::Object_ptr) this;

  if (omni::strMatch(id, ::OpenHRP::Plugin::_PD_repoId))
    return (::OpenHRP::Plugin_ptr) this;
  if (omni::strMatch(id, ::OpenHRP::CommandReceiver::_PD_repoId))
    return (::OpenHRP::CommandReceiver_ptr) this;


  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (::CORBA::Object_ptr) this;

  return 0;
}


//
// Code for OpenHRP::Plugin::start

// Proxy call descriptor class. Mangled signature:
//  void
class _0RL_cd_969e6a9bf2804fc9_20000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_969e6a9bf2804fc9_20000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  
    
  
  static const char* const _user_exns[];

  
};

const char* const _0RL_cd_969e6a9bf2804fc9_20000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_969e6a9bf2804fc9_30000000(omniCallDescriptor*, omniServant* svnt)
{
  
  OpenHRP::_impl_Plugin* impl = (OpenHRP::_impl_Plugin*) svnt->_ptrToInterface(OpenHRP::Plugin::_PD_repoId);
  impl->start();


}

void OpenHRP::_objref_Plugin::start()
{
  _0RL_cd_969e6a9bf2804fc9_20000000 _call_desc(_0RL_lcfn_969e6a9bf2804fc9_30000000, "start", 6);


  _invoke(_call_desc);



}


//
// Code for OpenHRP::Plugin::stop

// Local call call-back function.
static void
_0RL_lcfn_969e6a9bf2804fc9_40000000(omniCallDescriptor*, omniServant* svnt)
{
  
  OpenHRP::_impl_Plugin* impl = (OpenHRP::_impl_Plugin*) svnt->_ptrToInterface(OpenHRP::Plugin::_PD_repoId);
  impl->stop();


}

void OpenHRP::_objref_Plugin::stop()
{
  _0RL_cd_969e6a9bf2804fc9_20000000 _call_desc(_0RL_lcfn_969e6a9bf2804fc9_40000000, "stop", 5);


  _invoke(_call_desc);



}

OpenHRP::_pof_Plugin::~_pof_Plugin() {}


omniObjRef*
OpenHRP::_pof_Plugin::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::OpenHRP::_objref_Plugin(ior, id);
}


::CORBA::Boolean
OpenHRP::_pof_Plugin::is_a(const char* id) const
{
  if (omni::ptrStrMatch(id, ::OpenHRP::Plugin::_PD_repoId))
    return 1;
  if (omni::ptrStrMatch(id, OpenHRP::CommandReceiver::_PD_repoId))
    return 1;


  return 0;
}

const OpenHRP::_pof_Plugin _the_pof_OpenHRP_mPlugin;

OpenHRP::_impl_Plugin::~_impl_Plugin() {}


::CORBA::Boolean
OpenHRP::_impl_Plugin::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if (omni::strMatch(op, "start")) {

    _0RL_cd_969e6a9bf2804fc9_20000000 _call_desc(_0RL_lcfn_969e6a9bf2804fc9_30000000, "start", 6, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "stop")) {

    _0RL_cd_969e6a9bf2804fc9_20000000 _call_desc(_0RL_lcfn_969e6a9bf2804fc9_40000000, "stop", 5, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  
#ifndef _MSC_VER
  if (_impl_CommandReceiver::_dispatch(_handle)) {
    return 1;
  }
#else
  // Work-around for incorrect MSVC code generation.
  if (((_impl_CommandReceiver*)this)->
      _impl_CommandReceiver::_dispatch(_handle)) {
    return 1;
  }
#endif


  return 0;
}

void*
OpenHRP::_impl_Plugin::_ptrToInterface(const char* id)
{
  if (id == ::OpenHRP::Plugin::_PD_repoId)
    return (::OpenHRP::_impl_Plugin*) this;
  if (id == ::OpenHRP::CommandReceiver::_PD_repoId)
    return (::OpenHRP::_impl_CommandReceiver*) this;


  if (id == ::CORBA::Object::_PD_repoId)
    return (void*) 1;

  if (omni::strMatch(id, ::OpenHRP::Plugin::_PD_repoId))
    return (::OpenHRP::_impl_Plugin*) this;
  if (omni::strMatch(id, ::OpenHRP::CommandReceiver::_PD_repoId))
    return (::OpenHRP::_impl_CommandReceiver*) this;


  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (void*) 1;
  return 0;
}

const char*
OpenHRP::_impl_Plugin::_mostDerivedRepoId()
{
  return ::OpenHRP::Plugin::_PD_repoId;
}

OpenHRP::PluginManager_ptr OpenHRP::PluginManager_Helper::_nil() {
  return ::OpenHRP::PluginManager::_nil();
}

::CORBA::Boolean OpenHRP::PluginManager_Helper::is_nil(::OpenHRP::PluginManager_ptr p) {
  return ::CORBA::is_nil(p);

}

void OpenHRP::PluginManager_Helper::release(::OpenHRP::PluginManager_ptr p) {
  ::CORBA::release(p);
}

void OpenHRP::PluginManager_Helper::marshalObjRef(::OpenHRP::PluginManager_ptr obj, cdrStream& s) {
  ::OpenHRP::PluginManager::_marshalObjRef(obj, s);
}

OpenHRP::PluginManager_ptr OpenHRP::PluginManager_Helper::unmarshalObjRef(cdrStream& s) {
  return ::OpenHRP::PluginManager::_unmarshalObjRef(s);
}

void OpenHRP::PluginManager_Helper::duplicate(::OpenHRP::PluginManager_ptr obj) {
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
}

OpenHRP::PluginManager_ptr
OpenHRP::PluginManager::_duplicate(::OpenHRP::PluginManager_ptr obj)
{
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
  return obj;
}

OpenHRP::PluginManager_ptr
OpenHRP::PluginManager::_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


OpenHRP::PluginManager_ptr
OpenHRP::PluginManager::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

OpenHRP::PluginManager_ptr
OpenHRP::PluginManager::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_PluginManager _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_PluginManager* _the_nil_ptr = 0;
  if (!_the_nil_ptr) {
    omni::nilRefLock().lock();
    if (!_the_nil_ptr) {
      _the_nil_ptr = new _objref_PluginManager;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* OpenHRP::PluginManager::_PD_repoId = "IDL:OpenHRP/PluginManager:1.0";


OpenHRP::_objref_PluginManager::~_objref_PluginManager() {
  
}


OpenHRP::_objref_PluginManager::_objref_PluginManager(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::OpenHRP::PluginManager::_PD_repoId, ior, id, 1),
   _objref_CommandReceiver(ior, id)
   
{
  _PR_setobj(this);
}

void*
OpenHRP::_objref_PluginManager::_ptrToObjRef(const char* id)
{
  if (id == ::OpenHRP::PluginManager::_PD_repoId)
    return (::OpenHRP::PluginManager_ptr) this;
  if (id == ::OpenHRP::CommandReceiver::_PD_repoId)
    return (::OpenHRP::CommandReceiver_ptr) this;


  if (id == ::CORBA::Object::_PD_repoId)
    return (::CORBA::Object_ptr) this;

  if (omni::strMatch(id, ::OpenHRP::PluginManager::_PD_repoId))
    return (::OpenHRP::PluginManager_ptr) this;
  if (omni::strMatch(id, ::OpenHRP::CommandReceiver::_PD_repoId))
    return (::OpenHRP::CommandReceiver_ptr) this;


  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (::CORBA::Object_ptr) this;

  return 0;
}


//
// Code for OpenHRP::PluginManager::load

// Local call call-back function.
static void
_0RL_lcfn_969e6a9bf2804fc9_50000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_969e6a9bf2804fc9_00000000* tcd = (_0RL_cd_969e6a9bf2804fc9_00000000*)cd;
  OpenHRP::_impl_PluginManager* impl = (OpenHRP::_impl_PluginManager*) svnt->_ptrToInterface(OpenHRP::PluginManager::_PD_repoId);
  impl->load(tcd->arg_0);


}

void OpenHRP::_objref_PluginManager::load(const char* name)
{
  _0RL_cd_969e6a9bf2804fc9_00000000 _call_desc(_0RL_lcfn_969e6a9bf2804fc9_50000000, "load", 5);
  _call_desc.arg_0 = name;

  _invoke(_call_desc);



}


//
// Code for OpenHRP::PluginManager::create

// Proxy call descriptor class. Mangled signature:
//  _cOpenHRP_mPlugin_i_cstring_i_cstring_i_cstring
class _0RL_cd_969e6a9bf2804fc9_60000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_969e6a9bf2804fc9_60000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0_;
  const char* arg_0;
  ::CORBA::String_var arg_1_;
  const char* arg_1;
  ::CORBA::String_var arg_2_;
  const char* arg_2;
  OpenHRP::Plugin_var result;
};

void _0RL_cd_969e6a9bf2804fc9_60000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);
  _n.marshalString(arg_1,0);
  _n.marshalString(arg_2,0);

}

void _0RL_cd_969e6a9bf2804fc9_60000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();
  arg_1_ = _n.unmarshalString(0);
  arg_1 = arg_1_.in();
  arg_2_ = _n.unmarshalString(0);
  arg_2 = arg_2_.in();

}

void _0RL_cd_969e6a9bf2804fc9_60000000::marshalReturnedValues(cdrStream& _n)
{
  OpenHRP::Plugin::_marshalObjRef(result,_n);

}

void _0RL_cd_969e6a9bf2804fc9_60000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = OpenHRP::Plugin::_unmarshalObjRef(_n);

}

const char* const _0RL_cd_969e6a9bf2804fc9_60000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_969e6a9bf2804fc9_70000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_969e6a9bf2804fc9_60000000* tcd = (_0RL_cd_969e6a9bf2804fc9_60000000*)cd;
  OpenHRP::_impl_PluginManager* impl = (OpenHRP::_impl_PluginManager*) svnt->_ptrToInterface(OpenHRP::PluginManager::_PD_repoId);
  tcd->result = impl->create(tcd->arg_0, tcd->arg_1, tcd->arg_2);


}

OpenHRP::Plugin_ptr OpenHRP::_objref_PluginManager::create(const char* pclass, const char* name, const char* args)
{
  _0RL_cd_969e6a9bf2804fc9_60000000 _call_desc(_0RL_lcfn_969e6a9bf2804fc9_70000000, "create", 7);
  _call_desc.arg_0 = pclass;
  _call_desc.arg_1 = name;
  _call_desc.arg_2 = args;

  _invoke(_call_desc);
  return _call_desc.result._retn();


}


//
// Code for OpenHRP::PluginManager::getPluginNames

// Proxy call descriptor class. Mangled signature:
//  _cOpenHRP_mStringSequence
class _0RL_cd_969e6a9bf2804fc9_80000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_969e6a9bf2804fc9_80000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  
  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  OpenHRP::StringSequence_var result;
};

void _0RL_cd_969e6a9bf2804fc9_80000000::marshalReturnedValues(cdrStream& _n)
{
  (const OpenHRP::StringSequence&) result >>= _n;

}

void _0RL_cd_969e6a9bf2804fc9_80000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = new OpenHRP::StringSequence;
  (OpenHRP::StringSequence&)result <<= _n;

}

const char* const _0RL_cd_969e6a9bf2804fc9_80000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_969e6a9bf2804fc9_90000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_969e6a9bf2804fc9_80000000* tcd = (_0RL_cd_969e6a9bf2804fc9_80000000*)cd;
  OpenHRP::_impl_PluginManager* impl = (OpenHRP::_impl_PluginManager*) svnt->_ptrToInterface(OpenHRP::PluginManager::_PD_repoId);
  tcd->result = impl->getPluginNames();


}

OpenHRP::StringSequence* OpenHRP::_objref_PluginManager::getPluginNames()
{
  _0RL_cd_969e6a9bf2804fc9_80000000 _call_desc(_0RL_lcfn_969e6a9bf2804fc9_90000000, "getPluginNames", 15);


  _invoke(_call_desc);
  return _call_desc.result._retn();


}

OpenHRP::_pof_PluginManager::~_pof_PluginManager() {}


omniObjRef*
OpenHRP::_pof_PluginManager::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::OpenHRP::_objref_PluginManager(ior, id);
}


::CORBA::Boolean
OpenHRP::_pof_PluginManager::is_a(const char* id) const
{
  if (omni::ptrStrMatch(id, ::OpenHRP::PluginManager::_PD_repoId))
    return 1;
  if (omni::ptrStrMatch(id, OpenHRP::CommandReceiver::_PD_repoId))
    return 1;


  return 0;
}

const OpenHRP::_pof_PluginManager _the_pof_OpenHRP_mPluginManager;

OpenHRP::_impl_PluginManager::~_impl_PluginManager() {}


::CORBA::Boolean
OpenHRP::_impl_PluginManager::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if (omni::strMatch(op, "load")) {

    _0RL_cd_969e6a9bf2804fc9_00000000 _call_desc(_0RL_lcfn_969e6a9bf2804fc9_50000000, "load", 5, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "create")) {

    _0RL_cd_969e6a9bf2804fc9_60000000 _call_desc(_0RL_lcfn_969e6a9bf2804fc9_70000000, "create", 7, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "getPluginNames")) {

    _0RL_cd_969e6a9bf2804fc9_80000000 _call_desc(_0RL_lcfn_969e6a9bf2804fc9_90000000, "getPluginNames", 15, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  
#ifndef _MSC_VER
  if (_impl_CommandReceiver::_dispatch(_handle)) {
    return 1;
  }
#else
  // Work-around for incorrect MSVC code generation.
  if (((_impl_CommandReceiver*)this)->
      _impl_CommandReceiver::_dispatch(_handle)) {
    return 1;
  }
#endif


  return 0;
}

void*
OpenHRP::_impl_PluginManager::_ptrToInterface(const char* id)
{
  if (id == ::OpenHRP::PluginManager::_PD_repoId)
    return (::OpenHRP::_impl_PluginManager*) this;
  if (id == ::OpenHRP::CommandReceiver::_PD_repoId)
    return (::OpenHRP::_impl_CommandReceiver*) this;


  if (id == ::CORBA::Object::_PD_repoId)
    return (void*) 1;

  if (omni::strMatch(id, ::OpenHRP::PluginManager::_PD_repoId))
    return (::OpenHRP::_impl_PluginManager*) this;
  if (omni::strMatch(id, ::OpenHRP::CommandReceiver::_PD_repoId))
    return (::OpenHRP::_impl_CommandReceiver*) this;


  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (void*) 1;
  return 0;
}

const char*
OpenHRP::_impl_PluginManager::_mostDerivedRepoId()
{
  return ::OpenHRP::PluginManager::_PD_repoId;
}

void
OpenHRP::RobotState::operator>>= (cdrStream &_n) const
{
  (const DblSequence&) angle >>= _n;
  (const DblSequence&) velocity >>= _n;
  (const DblSequence&) torque >>= _n;
  (const _CORBA_Unbounded_Sequence< DblSequence6 > &) force >>= _n;
  (const _CORBA_Unbounded_Sequence< DblSequence3 > &) rateGyro >>= _n;
  (const _CORBA_Unbounded_Sequence< DblSequence3 > &) accel >>= _n;
  (const _CORBA_Unbounded_Sequence< DblSequence9 > &) attitude >>= _n;
  (const DblSequence3&) zmp >>= _n;
  (const DblSequence3&) basePos >>= _n;
  (const DblSequence9&) baseAtt >>= _n;
  (const _CORBA_Unbounded_Sequence< ImageData > &) image >>= _n;
  (const LongSequence&) dio >>= _n;

}

void
OpenHRP::RobotState::operator<<= (cdrStream &_n)
{
  (DblSequence&)angle <<= _n;
  (DblSequence&)velocity <<= _n;
  (DblSequence&)torque <<= _n;
  (_CORBA_Unbounded_Sequence< DblSequence6 > &)force <<= _n;
  (_CORBA_Unbounded_Sequence< DblSequence3 > &)rateGyro <<= _n;
  (_CORBA_Unbounded_Sequence< DblSequence3 > &)accel <<= _n;
  (_CORBA_Unbounded_Sequence< DblSequence9 > &)attitude <<= _n;
  (DblSequence3&)zmp <<= _n;
  (DblSequence3&)basePos <<= _n;
  (DblSequence9&)baseAtt <<= _n;
  (_CORBA_Unbounded_Sequence< ImageData > &)image <<= _n;
  (LongSequence&)dio <<= _n;

}

POA_OpenHRP::CommandReceiver::~CommandReceiver() {}

POA_OpenHRP::Plugin::~Plugin() {}

POA_OpenHRP::PluginManager::~PluginManager() {}

