// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.
#ifndef __servoPlugin_hh__
#define __servoPlugin_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_servoPlugin
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_servoPlugin
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_servoPlugin
#endif



#ifndef __OpenHRPCommon_hh_EXTERNAL_GUARD__
#define __OpenHRPCommon_hh_EXTERNAL_GUARD__
#include <OpenHRPCommon.h>
#endif
#ifndef __ViewSimulator_hh_EXTERNAL_GUARD__
#define __ViewSimulator_hh_EXTERNAL_GUARD__
#include <ViewSimulator.h>
#endif
#ifndef __HRPcontroller_hh_EXTERNAL_GUARD__
#define __HRPcontroller_hh_EXTERNAL_GUARD__
#include <HRPcontroller.h>
#endif
#ifndef __commonStatus_hh_EXTERNAL_GUARD__
#define __commonStatus_hh_EXTERNAL_GUARD__
#include <commonStatus.h>
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif



_CORBA_MODULE servoPluginTypes

_CORBA_MODULE_BEG

  class LngLngSeq_var;

  class LngLngSeq : public _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::LongLong, 8, 8 >  {
  public:
    typedef LngLngSeq_var _var_type;
    inline LngLngSeq() {}
    inline LngLngSeq(const LngLngSeq& _s)
      : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::LongLong, 8, 8 > (_s) {}

    inline LngLngSeq(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::LongLong, 8, 8 > (_max) {}
    inline LngLngSeq(_CORBA_ULong _max, _CORBA_ULong _len, ::CORBA::LongLong* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::LongLong, 8, 8 > (_max, _len, _val, _rel) {}

  

    inline LngLngSeq& operator = (const LngLngSeq& _s) {
      _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::LongLong, 8, 8 > ::operator=(_s);
      return *this;
    }
  };

  class LngLngSeq_out;

  class LngLngSeq_var {
  public:
    inline LngLngSeq_var() : _pd_seq(0) {}
    inline LngLngSeq_var(LngLngSeq* _s) : _pd_seq(_s) {}
    inline LngLngSeq_var(const LngLngSeq_var& _s) {
      if (_s._pd_seq)  _pd_seq = new LngLngSeq(*_s._pd_seq);
      else             _pd_seq = 0;
    }
    inline ~LngLngSeq_var() { if (_pd_seq)  delete _pd_seq; }
      
    inline LngLngSeq_var& operator = (LngLngSeq* _s) {
      if (_pd_seq)  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline LngLngSeq_var& operator = (const LngLngSeq_var& _s) {
      if (&_s != this) {
        if (_s._pd_seq) {
          if (!_pd_seq)  _pd_seq = new LngLngSeq;
          *_pd_seq = *_s._pd_seq;
        }
        else if (_pd_seq) {
          delete _pd_seq;
          _pd_seq = 0;
        }
      }
      return *this;
    }
    inline ::CORBA::LongLong& operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline LngLngSeq* operator -> () { return _pd_seq; }
    inline const LngLngSeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator LngLngSeq& () const { return *_pd_seq; }
#else
    inline operator const LngLngSeq& () const { return *_pd_seq; }
    inline operator LngLngSeq& () { return *_pd_seq; }
#endif
      
    inline const LngLngSeq& in() const { return *_pd_seq; }
    inline LngLngSeq&       inout()    { return *_pd_seq; }
    inline LngLngSeq*&      out() {
      if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline LngLngSeq* _retn() { LngLngSeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class LngLngSeq_out;
    
  private:
    LngLngSeq* _pd_seq;
  };

  class LngLngSeq_out {
  public:
    inline LngLngSeq_out(LngLngSeq*& _s) : _data(_s) { _data = 0; }
    inline LngLngSeq_out(LngLngSeq_var& _s)
      : _data(_s._pd_seq) { _s = (LngLngSeq*) 0; }
    inline LngLngSeq_out(const LngLngSeq_out& _s) : _data(_s._data) {}
    inline LngLngSeq_out& operator = (const LngLngSeq_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline LngLngSeq_out& operator = (LngLngSeq* _s) {
      _data = _s;
      return *this;
    }
    inline operator LngLngSeq*&()  { return _data; }
    inline LngLngSeq*& ptr()       { return _data; }
    inline LngLngSeq* operator->() { return _data; }

    inline ::CORBA::LongLong& operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    LngLngSeq*& _data;

  private:
    LngLngSeq_out();
    LngLngSeq_out& operator=(const LngLngSeq_var&);
  };

  typedef ::CORBA::Float FltArray15[15];
  typedef ::CORBA::Float FltArray15_slice;

  _CORBA_MODULE_INLINE FltArray15_slice* FltArray15_alloc() {
    return new FltArray15_slice[15];
  }

  _CORBA_MODULE_INLINE FltArray15_slice* FltArray15_dup(const FltArray15_slice* _s) {
    if (!_s) return 0;
    FltArray15_slice* _data = FltArray15_alloc();
    if (_data) {
      for (_CORBA_ULong _0i0 = 0; _0i0 < 15; _0i0++){
        
        _data[_0i0] = _s[_0i0];

      }
  
    }
    return _data;
  }

  _CORBA_MODULE_INLINE void FltArray15_copy(FltArray15_slice* _to, const FltArray15_slice* _from){
    for (_CORBA_ULong _0i0 = 0; _0i0 < 15; _0i0++){
      
      _to[_0i0] = _from[_0i0];

    }
  
  }

  _CORBA_MODULE_INLINE void FltArray15_free(FltArray15_slice* _s) {
    delete [] _s;
  }

  class FltArray15_copyHelper {
  public:
    static inline FltArray15_slice* alloc() { return ::servoPluginTypes::FltArray15_alloc(); }
    static inline FltArray15_slice* dup(const FltArray15_slice* p) { return ::servoPluginTypes::FltArray15_dup(p); }
    static inline void free(FltArray15_slice* p) { ::servoPluginTypes::FltArray15_free(p); }
  };

  typedef _CORBA_Array_Fix_Var<FltArray15_copyHelper,FltArray15_slice> FltArray15_var;
  typedef _CORBA_Array_Fix_Forany<FltArray15_copyHelper,FltArray15_slice> FltArray15_forany;

  typedef FltArray15_slice* FltArray15_out;

  class FltSeq_var;

  class FltSeq : public _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::Float, 4, 4 >  {
  public:
    typedef FltSeq_var _var_type;
    inline FltSeq() {}
    inline FltSeq(const FltSeq& _s)
      : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::Float, 4, 4 > (_s) {}

    inline FltSeq(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::Float, 4, 4 > (_max) {}
    inline FltSeq(_CORBA_ULong _max, _CORBA_ULong _len, ::CORBA::Float* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::Float, 4, 4 > (_max, _len, _val, _rel) {}

  

    inline FltSeq& operator = (const FltSeq& _s) {
      _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::Float, 4, 4 > ::operator=(_s);
      return *this;
    }
  };

  class FltSeq_out;

  class FltSeq_var {
  public:
    inline FltSeq_var() : _pd_seq(0) {}
    inline FltSeq_var(FltSeq* _s) : _pd_seq(_s) {}
    inline FltSeq_var(const FltSeq_var& _s) {
      if (_s._pd_seq)  _pd_seq = new FltSeq(*_s._pd_seq);
      else             _pd_seq = 0;
    }
    inline ~FltSeq_var() { if (_pd_seq)  delete _pd_seq; }
      
    inline FltSeq_var& operator = (FltSeq* _s) {
      if (_pd_seq)  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline FltSeq_var& operator = (const FltSeq_var& _s) {
      if (&_s != this) {
        if (_s._pd_seq) {
          if (!_pd_seq)  _pd_seq = new FltSeq;
          *_pd_seq = *_s._pd_seq;
        }
        else if (_pd_seq) {
          delete _pd_seq;
          _pd_seq = 0;
        }
      }
      return *this;
    }
    inline ::CORBA::Float& operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline FltSeq* operator -> () { return _pd_seq; }
    inline const FltSeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator FltSeq& () const { return *_pd_seq; }
#else
    inline operator const FltSeq& () const { return *_pd_seq; }
    inline operator FltSeq& () { return *_pd_seq; }
#endif
      
    inline const FltSeq& in() const { return *_pd_seq; }
    inline FltSeq&       inout()    { return *_pd_seq; }
    inline FltSeq*&      out() {
      if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline FltSeq* _retn() { FltSeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class FltSeq_out;
    
  private:
    FltSeq* _pd_seq;
  };

  class FltSeq_out {
  public:
    inline FltSeq_out(FltSeq*& _s) : _data(_s) { _data = 0; }
    inline FltSeq_out(FltSeq_var& _s)
      : _data(_s._pd_seq) { _s = (FltSeq*) 0; }
    inline FltSeq_out(const FltSeq_out& _s) : _data(_s._data) {}
    inline FltSeq_out& operator = (const FltSeq_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline FltSeq_out& operator = (FltSeq* _s) {
      _data = _s;
      return *this;
    }
    inline operator FltSeq*&()  { return _data; }
    inline FltSeq*& ptr()       { return _data; }
    inline FltSeq* operator->() { return _data; }

    inline ::CORBA::Float& operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    FltSeq*& _data;

  private:
    FltSeq_out();
    FltSeq_out& operator=(const FltSeq_var&);
  };

  typedef ::CORBA::Boolean BolArray15[15];
  typedef ::CORBA::Boolean BolArray15_slice;

  _CORBA_MODULE_INLINE BolArray15_slice* BolArray15_alloc() {
    return new BolArray15_slice[15];
  }

  _CORBA_MODULE_INLINE BolArray15_slice* BolArray15_dup(const BolArray15_slice* _s) {
    if (!_s) return 0;
    BolArray15_slice* _data = BolArray15_alloc();
    if (_data) {
      for (_CORBA_ULong _0i0 = 0; _0i0 < 15; _0i0++){
        
        _data[_0i0] = _s[_0i0];

      }
  
    }
    return _data;
  }

  _CORBA_MODULE_INLINE void BolArray15_copy(BolArray15_slice* _to, const BolArray15_slice* _from){
    for (_CORBA_ULong _0i0 = 0; _0i0 < 15; _0i0++){
      
      _to[_0i0] = _from[_0i0];

    }
  
  }

  _CORBA_MODULE_INLINE void BolArray15_free(BolArray15_slice* _s) {
    delete [] _s;
  }

  class BolArray15_copyHelper {
  public:
    static inline BolArray15_slice* alloc() { return ::servoPluginTypes::BolArray15_alloc(); }
    static inline BolArray15_slice* dup(const BolArray15_slice* p) { return ::servoPluginTypes::BolArray15_dup(p); }
    static inline void free(BolArray15_slice* p) { ::servoPluginTypes::BolArray15_free(p); }
  };

  typedef _CORBA_Array_Fix_Var<BolArray15_copyHelper,BolArray15_slice> BolArray15_var;
  typedef _CORBA_Array_Fix_Forany<BolArray15_copyHelper,BolArray15_slice> BolArray15_forany;

  typedef BolArray15_slice* BolArray15_out;

  typedef ::CORBA::Short ShortArray15[15];
  typedef ::CORBA::Short ShortArray15_slice;

  _CORBA_MODULE_INLINE ShortArray15_slice* ShortArray15_alloc() {
    return new ShortArray15_slice[15];
  }

  _CORBA_MODULE_INLINE ShortArray15_slice* ShortArray15_dup(const ShortArray15_slice* _s) {
    if (!_s) return 0;
    ShortArray15_slice* _data = ShortArray15_alloc();
    if (_data) {
      for (_CORBA_ULong _0i0 = 0; _0i0 < 15; _0i0++){
        
        _data[_0i0] = _s[_0i0];

      }
  
    }
    return _data;
  }

  _CORBA_MODULE_INLINE void ShortArray15_copy(ShortArray15_slice* _to, const ShortArray15_slice* _from){
    for (_CORBA_ULong _0i0 = 0; _0i0 < 15; _0i0++){
      
      _to[_0i0] = _from[_0i0];

    }
  
  }

  _CORBA_MODULE_INLINE void ShortArray15_free(ShortArray15_slice* _s) {
    delete [] _s;
  }

  class ShortArray15_copyHelper {
  public:
    static inline ShortArray15_slice* alloc() { return ::servoPluginTypes::ShortArray15_alloc(); }
    static inline ShortArray15_slice* dup(const ShortArray15_slice* p) { return ::servoPluginTypes::ShortArray15_dup(p); }
    static inline void free(ShortArray15_slice* p) { ::servoPluginTypes::ShortArray15_free(p); }
  };

  typedef _CORBA_Array_Fix_Var<ShortArray15_copyHelper,ShortArray15_slice> ShortArray15_var;
  typedef _CORBA_Array_Fix_Forany<ShortArray15_copyHelper,ShortArray15_slice> ShortArray15_forany;

  typedef ShortArray15_slice* ShortArray15_out;

  typedef ::CORBA::LongLong LngArray15[15];
  typedef ::CORBA::LongLong LngArray15_slice;

  _CORBA_MODULE_INLINE LngArray15_slice* LngArray15_alloc() {
    return new LngArray15_slice[15];
  }

  _CORBA_MODULE_INLINE LngArray15_slice* LngArray15_dup(const LngArray15_slice* _s) {
    if (!_s) return 0;
    LngArray15_slice* _data = LngArray15_alloc();
    if (_data) {
      for (_CORBA_ULong _0i0 = 0; _0i0 < 15; _0i0++){
        
        _data[_0i0] = _s[_0i0];

      }
  
    }
    return _data;
  }

  _CORBA_MODULE_INLINE void LngArray15_copy(LngArray15_slice* _to, const LngArray15_slice* _from){
    for (_CORBA_ULong _0i0 = 0; _0i0 < 15; _0i0++){
      
      _to[_0i0] = _from[_0i0];

    }
  
  }

  _CORBA_MODULE_INLINE void LngArray15_free(LngArray15_slice* _s) {
    delete [] _s;
  }

  class LngArray15_copyHelper {
  public:
    static inline LngArray15_slice* alloc() { return ::servoPluginTypes::LngArray15_alloc(); }
    static inline LngArray15_slice* dup(const LngArray15_slice* p) { return ::servoPluginTypes::LngArray15_dup(p); }
    static inline void free(LngArray15_slice* p) { ::servoPluginTypes::LngArray15_free(p); }
  };

  typedef _CORBA_Array_Fix_Var<LngArray15_copyHelper,LngArray15_slice> LngArray15_var;
  typedef _CORBA_Array_Fix_Forany<LngArray15_copyHelper,LngArray15_slice> LngArray15_forany;

  typedef LngArray15_slice* LngArray15_out;

_CORBA_MODULE_END

#ifndef __servoPlugin__
#define __servoPlugin__
class servoPlugin;
class _objref_servoPlugin;
class _impl_servoPlugin;

typedef _objref_servoPlugin* servoPlugin_ptr;
typedef servoPlugin_ptr servoPluginRef;

class servoPlugin_Helper {
public:
  typedef servoPlugin_ptr _ptr_type;

  static _ptr_type _nil();
  static _CORBA_Boolean is_nil(_ptr_type);
  static void release(_ptr_type);
  static void duplicate(_ptr_type);
  static void marshalObjRef(_ptr_type, cdrStream&);
  static _ptr_type unmarshalObjRef(cdrStream&);
};

typedef _CORBA_ObjRef_Var<_objref_servoPlugin, servoPlugin_Helper> servoPlugin_var;
typedef _CORBA_ObjRef_OUT_arg<_objref_servoPlugin,servoPlugin_Helper > servoPlugin_out;

#endif

// interface servoPlugin
class servoPlugin {
public:
  // Declarations for this interface type.
  typedef servoPlugin_ptr _ptr_type;
  typedef servoPlugin_var _var_type;

  static _ptr_type _duplicate(_ptr_type);
  static _ptr_type _narrow(::CORBA::Object_ptr);
  static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
  
  static _ptr_type _nil();

  static inline void _marshalObjRef(_ptr_type, cdrStream&);

  static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
    omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
    if (o)
      return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
    else
      return _nil();
  }

  static inline _ptr_type _fromObjRef(omniObjRef* o) {
    if (o)
      return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
    else
      return _nil();
  }

  static _core_attr const char* _PD_repoId;

  // Other IDL defined within this scope.
  
};

class _objref_servoPlugin :
  public virtual OpenHRP::_objref_Plugin
{
public:
  // IDL operations
  ::CORBA::Boolean switchServo(::CORBA::Boolean t);
  ::CORBA::Boolean jointCalibration(const ::servoPluginTypes::LngLngSeq& seq, const ::servoPluginTypes::FltArray15 angles, const ::servoPluginTypes::ShortArray15 rot, const ::servoPluginTypes::FltSeq& markAngles, ::commonStatus::statSequence_out status);
  ::CORBA::Boolean getStatus(::servoPluginTypes::LngArray15 status);
  ::CORBA::Boolean clearEmergency();
  ::CORBA::Boolean checkCalibration();
  ::CORBA::Boolean setEvacAngles(const ::servoPluginTypes::FltArray15 angles);
  ::CORBA::Boolean getEvacAngles(::servoPluginTypes::FltArray15 angles);
  ::CORBA::Boolean SwitchBrake(::CORBA::Octet part, ::CORBA::Boolean t);

  // Constructors
  inline _objref_servoPlugin()  { _PR_setobj(0); }  // nil
  _objref_servoPlugin(omniIOR*, omniIdentity*);

protected:
  virtual ~_objref_servoPlugin();

  
private:
  virtual void* _ptrToObjRef(const char*);

  _objref_servoPlugin(const _objref_servoPlugin&);
  _objref_servoPlugin& operator = (const _objref_servoPlugin&);
  // not implemented

  friend class servoPlugin;
};

class _pof_servoPlugin : public _OMNI_NS(proxyObjectFactory) {
public:
  inline _pof_servoPlugin() : _OMNI_NS(proxyObjectFactory)(servoPlugin::_PD_repoId) {}
  virtual ~_pof_servoPlugin();

  virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
  virtual _CORBA_Boolean is_a(const char*) const;
};

class _impl_servoPlugin :
  public virtual OpenHRP::_impl_Plugin
{
public:
  virtual ~_impl_servoPlugin();

  virtual ::CORBA::Boolean switchServo(::CORBA::Boolean t) = 0;
  virtual ::CORBA::Boolean jointCalibration(const ::servoPluginTypes::LngLngSeq& seq, const ::servoPluginTypes::FltArray15 angles, const ::servoPluginTypes::ShortArray15 rot, const ::servoPluginTypes::FltSeq& markAngles, ::commonStatus::statSequence_out status) = 0;
  virtual ::CORBA::Boolean getStatus(::servoPluginTypes::LngArray15 status) = 0;
  virtual ::CORBA::Boolean clearEmergency() = 0;
  virtual ::CORBA::Boolean checkCalibration() = 0;
  virtual ::CORBA::Boolean setEvacAngles(const ::servoPluginTypes::FltArray15 angles) = 0;
  virtual ::CORBA::Boolean getEvacAngles(::servoPluginTypes::FltArray15 angles) = 0;
  virtual ::CORBA::Boolean SwitchBrake(::CORBA::Octet part, ::CORBA::Boolean t) = 0;
  
public:  // Really protected, workaround for xlC
  virtual _CORBA_Boolean _dispatch(omniCallHandle&);

private:
  virtual void* _ptrToInterface(const char*);
  virtual const char* _mostDerivedRepoId();
  
};




_CORBA_MODULE POA_servoPluginTypes
_CORBA_MODULE_BEG

_CORBA_MODULE_END

class POA_servoPlugin :
  public virtual _impl_servoPlugin,
  public virtual POA_OpenHRP::Plugin
{
public:
  virtual ~POA_servoPlugin();

  inline ::servoPlugin_ptr _this() {
    return (::servoPlugin_ptr) _do_this(::servoPlugin::_PD_repoId);
  }
};



_CORBA_MODULE OBV_servoPluginTypes
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr



inline void
servoPlugin::_marshalObjRef(::servoPlugin_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}



#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_servoPlugin
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_servoPlugin
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_servoPlugin
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_servoPlugin
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_servoPlugin
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_servoPlugin
#endif

#endif  // __servoPlugin_hh__

