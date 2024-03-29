// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.

#include "jointAnglePlugin.h"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_2;



jointAnglePlugin_ptr jointAnglePlugin_Helper::_nil() {
  return ::jointAnglePlugin::_nil();
}

::CORBA::Boolean jointAnglePlugin_Helper::is_nil(::jointAnglePlugin_ptr p) {
  return ::CORBA::is_nil(p);

}

void jointAnglePlugin_Helper::release(::jointAnglePlugin_ptr p) {
  ::CORBA::release(p);
}

void jointAnglePlugin_Helper::marshalObjRef(::jointAnglePlugin_ptr obj, cdrStream& s) {
  ::jointAnglePlugin::_marshalObjRef(obj, s);
}

jointAnglePlugin_ptr jointAnglePlugin_Helper::unmarshalObjRef(cdrStream& s) {
  return ::jointAnglePlugin::_unmarshalObjRef(s);
}

void jointAnglePlugin_Helper::duplicate(::jointAnglePlugin_ptr obj) {
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
}

jointAnglePlugin_ptr
jointAnglePlugin::_duplicate(::jointAnglePlugin_ptr obj)
{
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
  return obj;
}

jointAnglePlugin_ptr
jointAnglePlugin::_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


jointAnglePlugin_ptr
jointAnglePlugin::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

jointAnglePlugin_ptr
jointAnglePlugin::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_jointAnglePlugin _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_jointAnglePlugin* _the_nil_ptr = 0;
  if (!_the_nil_ptr) {
    omni::nilRefLock().lock();
    if (!_the_nil_ptr) {
      _the_nil_ptr = new _objref_jointAnglePlugin;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* jointAnglePlugin::_PD_repoId = "IDL:jointAnglePlugin:1.0";


typedef OpenHRP::Plugin OpenHRP_Plugin;
typedef OpenHRP::_impl_Plugin OpenHRP__impl_Plugin;
typedef OpenHRP::_objref_Plugin OpenHRP__objref_Plugin;

typedef OpenHRP::CommandReceiver OpenHRP_CommandReceiver;
typedef OpenHRP::_impl_CommandReceiver OpenHRP__impl_CommandReceiver;
typedef OpenHRP::_objref_CommandReceiver OpenHRP__objref_CommandReceiver;

_objref_jointAnglePlugin::~_objref_jointAnglePlugin() {
  
}


_objref_jointAnglePlugin::_objref_jointAnglePlugin(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::jointAnglePlugin::_PD_repoId, ior, id, 1),
   OpenHRP__objref_Plugin(ior, id)
   
{
  _PR_setobj(this);
}

void*
_objref_jointAnglePlugin::_ptrToObjRef(const char* id)
{
  if (id == ::jointAnglePlugin::_PD_repoId)
    return (::jointAnglePlugin_ptr) this;
  if (id == ::OpenHRP::Plugin::_PD_repoId)
    return (::OpenHRP::Plugin_ptr) this;

  if (id == ::OpenHRP::CommandReceiver::_PD_repoId)
    return (::OpenHRP::CommandReceiver_ptr) this;


  if (id == ::CORBA::Object::_PD_repoId)
    return (::CORBA::Object_ptr) this;

  if (omni::strMatch(id, ::jointAnglePlugin::_PD_repoId))
    return (::jointAnglePlugin_ptr) this;
  if (omni::strMatch(id, ::OpenHRP::Plugin::_PD_repoId))
    return (::OpenHRP::Plugin_ptr) this;

  if (omni::strMatch(id, ::OpenHRP::CommandReceiver::_PD_repoId))
    return (::OpenHRP::CommandReceiver_ptr) this;


  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (::CORBA::Object_ptr) this;

  return 0;
}


//
// Code for jointAnglePlugin::setPosition

// Proxy call descriptor class. Mangled signature:
//  _cdouble_i_cunsigned_pshort_i_cstatusPluginTypes_mJointValues_i_cdouble_i_cdouble_o_ccommonStatus_mstatSequence
class _0RL_cd_ab403a8350109505_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_ab403a8350109505_00000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  statusPluginTypes::kindType arg_0;
  statusPluginTypes::JointValues_var arg_1_;
  const statusPluginTypes::JointValues* arg_1;
  ::CORBA::Double arg_2;
  ::CORBA::Double arg_3;
  commonStatus::statSequence_var arg_4;
  ::CORBA::Double result;
};

void _0RL_cd_ab403a8350109505_00000000::marshalArguments(cdrStream& _n)
{
  arg_0 >>= _n;
  (const statusPluginTypes::JointValues&) *arg_1 >>= _n;
  arg_2 >>= _n;
  arg_3 >>= _n;

}

void _0RL_cd_ab403a8350109505_00000000::unmarshalArguments(cdrStream& _n)
{
  (statusPluginTypes::kindType&)arg_0 <<= _n;
  arg_1_ = new statusPluginTypes::JointValues;
  (statusPluginTypes::JointValues&)arg_1_ <<= _n;
  arg_1 = &arg_1_.in();
  (::CORBA::Double&)arg_2 <<= _n;
  (::CORBA::Double&)arg_3 <<= _n;

}

void _0RL_cd_ab403a8350109505_00000000::marshalReturnedValues(cdrStream& _n)
{
  result >>= _n;
  (const commonStatus::statSequence&) arg_4 >>= _n;

}

void _0RL_cd_ab403a8350109505_00000000::unmarshalReturnedValues(cdrStream& _n)
{
  (::CORBA::Double&)result <<= _n;
  arg_4 = new commonStatus::statSequence;
  (commonStatus::statSequence&)arg_4 <<= _n;

}

const char* const _0RL_cd_ab403a8350109505_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_ab403a8350109505_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_ab403a8350109505_00000000* tcd = (_0RL_cd_ab403a8350109505_00000000*)cd;
  _impl_jointAnglePlugin* impl = (_impl_jointAnglePlugin*) svnt->_ptrToInterface(jointAnglePlugin::_PD_repoId);
  tcd->result = impl->setPosition(tcd->arg_0, *tcd->arg_1, tcd->arg_2, tcd->arg_3, tcd->arg_4.out());


}

::CORBA::Double _objref_jointAnglePlugin::setPosition(::statusPluginTypes::kindType kind, const ::statusPluginTypes::JointValues& position, ::CORBA::Double minimumTime, ::CORBA::Double percent, ::commonStatus::statSequence_out status)
{
  _0RL_cd_ab403a8350109505_00000000 _call_desc(_0RL_lcfn_ab403a8350109505_10000000, "setPosition", 12);
  _call_desc.arg_0 = kind;
  _call_desc.arg_1 = &(::statusPluginTypes::JointValues&) position;
  _call_desc.arg_2 = minimumTime;
  _call_desc.arg_3 = percent;

  _invoke(_call_desc);
  status = _call_desc.arg_4._retn();
  return _call_desc.result;


}


//
// Code for jointAnglePlugin::setJointAngles

// Proxy call descriptor class. Mangled signature:
//  _cdouble_i_cunsigned_pshort_i_cjointAnglePluginTypes_mNums_i_cstatusPluginTypes_mJointValues_i_cdouble_i_cdouble_o_ccommonStatus_mstatSequence
class _0RL_cd_ab403a8350109505_20000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_ab403a8350109505_20000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  statusPluginTypes::kindType arg_0;
  jointAnglePluginTypes::Nums_var arg_1_;
  const jointAnglePluginTypes::Nums* arg_1;
  statusPluginTypes::JointValues_var arg_2_;
  const statusPluginTypes::JointValues* arg_2;
  ::CORBA::Double arg_3;
  ::CORBA::Double arg_4;
  commonStatus::statSequence_var arg_5;
  ::CORBA::Double result;
};

void _0RL_cd_ab403a8350109505_20000000::marshalArguments(cdrStream& _n)
{
  arg_0 >>= _n;
  (const jointAnglePluginTypes::Nums&) *arg_1 >>= _n;
  (const statusPluginTypes::JointValues&) *arg_2 >>= _n;
  arg_3 >>= _n;
  arg_4 >>= _n;

}

void _0RL_cd_ab403a8350109505_20000000::unmarshalArguments(cdrStream& _n)
{
  (statusPluginTypes::kindType&)arg_0 <<= _n;
  arg_1_ = new jointAnglePluginTypes::Nums;
  (jointAnglePluginTypes::Nums&)arg_1_ <<= _n;
  arg_1 = &arg_1_.in();
  arg_2_ = new statusPluginTypes::JointValues;
  (statusPluginTypes::JointValues&)arg_2_ <<= _n;
  arg_2 = &arg_2_.in();
  (::CORBA::Double&)arg_3 <<= _n;
  (::CORBA::Double&)arg_4 <<= _n;

}

void _0RL_cd_ab403a8350109505_20000000::marshalReturnedValues(cdrStream& _n)
{
  result >>= _n;
  (const commonStatus::statSequence&) arg_5 >>= _n;

}

void _0RL_cd_ab403a8350109505_20000000::unmarshalReturnedValues(cdrStream& _n)
{
  (::CORBA::Double&)result <<= _n;
  arg_5 = new commonStatus::statSequence;
  (commonStatus::statSequence&)arg_5 <<= _n;

}

const char* const _0RL_cd_ab403a8350109505_20000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_ab403a8350109505_30000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_ab403a8350109505_20000000* tcd = (_0RL_cd_ab403a8350109505_20000000*)cd;
  _impl_jointAnglePlugin* impl = (_impl_jointAnglePlugin*) svnt->_ptrToInterface(jointAnglePlugin::_PD_repoId);
  tcd->result = impl->setJointAngles(tcd->arg_0, *tcd->arg_1, *tcd->arg_2, tcd->arg_3, tcd->arg_4, tcd->arg_5.out());


}

::CORBA::Double _objref_jointAnglePlugin::setJointAngles(::statusPluginTypes::kindType kind, const ::jointAnglePluginTypes::Nums& jointNums, const ::statusPluginTypes::JointValues& jointAngles, ::CORBA::Double minimumTime, ::CORBA::Double percent, ::commonStatus::statSequence_out status)
{
  _0RL_cd_ab403a8350109505_20000000 _call_desc(_0RL_lcfn_ab403a8350109505_30000000, "setJointAngles", 15);
  _call_desc.arg_0 = kind;
  _call_desc.arg_1 = &(::jointAnglePluginTypes::Nums&) jointNums;
  _call_desc.arg_2 = &(::statusPluginTypes::JointValues&) jointAngles;
  _call_desc.arg_3 = minimumTime;
  _call_desc.arg_4 = percent;

  _invoke(_call_desc);
  status = _call_desc.arg_5._retn();
  return _call_desc.result;


}

_pof_jointAnglePlugin::~_pof_jointAnglePlugin() {}


omniObjRef*
_pof_jointAnglePlugin::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::_objref_jointAnglePlugin(ior, id);
}


::CORBA::Boolean
_pof_jointAnglePlugin::is_a(const char* id) const
{
  if (omni::ptrStrMatch(id, ::jointAnglePlugin::_PD_repoId))
    return 1;
  if (omni::ptrStrMatch(id, OpenHRP::Plugin::_PD_repoId))
    return 1;

  if (omni::ptrStrMatch(id, OpenHRP::CommandReceiver::_PD_repoId))
    return 1;


  return 0;
}

const _pof_jointAnglePlugin _the_pof_jointAnglePlugin;

_impl_jointAnglePlugin::~_impl_jointAnglePlugin() {}


::CORBA::Boolean
_impl_jointAnglePlugin::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if (omni::strMatch(op, "setPosition")) {

    _0RL_cd_ab403a8350109505_00000000 _call_desc(_0RL_lcfn_ab403a8350109505_10000000, "setPosition", 12, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "setJointAngles")) {

    _0RL_cd_ab403a8350109505_20000000 _call_desc(_0RL_lcfn_ab403a8350109505_30000000, "setJointAngles", 15, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  
#ifndef _MSC_VER
  if (OpenHRP__impl_Plugin::_dispatch(_handle)) {
    return 1;
  }
#else
  // Work-around for incorrect MSVC code generation.
  if (((OpenHRP__impl_Plugin*)this)->
      OpenHRP__impl_Plugin::_dispatch(_handle)) {
    return 1;
  }
#endif


  return 0;
}

void*
_impl_jointAnglePlugin::_ptrToInterface(const char* id)
{
  if (id == ::jointAnglePlugin::_PD_repoId)
    return (::_impl_jointAnglePlugin*) this;
  if (id == ::OpenHRP::Plugin::_PD_repoId)
    return (::OpenHRP::_impl_Plugin*) this;

  if (id == ::OpenHRP::CommandReceiver::_PD_repoId)
    return (::OpenHRP::_impl_CommandReceiver*) this;


  if (id == ::CORBA::Object::_PD_repoId)
    return (void*) 1;

  if (omni::strMatch(id, ::jointAnglePlugin::_PD_repoId))
    return (::_impl_jointAnglePlugin*) this;
  if (omni::strMatch(id, ::OpenHRP::Plugin::_PD_repoId))
    return (::OpenHRP::_impl_Plugin*) this;

  if (omni::strMatch(id, ::OpenHRP::CommandReceiver::_PD_repoId))
    return (::OpenHRP::_impl_CommandReceiver*) this;


  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (void*) 1;
  return 0;
}

const char*
_impl_jointAnglePlugin::_mostDerivedRepoId()
{
  return ::jointAnglePlugin::_PD_repoId;
}

POA_jointAnglePlugin::~POA_jointAnglePlugin() {}

