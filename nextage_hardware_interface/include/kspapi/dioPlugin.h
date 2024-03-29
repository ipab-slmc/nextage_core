// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.
#ifndef __dioPlugin_hh__
#define __dioPlugin_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_dioPlugin
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_dioPlugin
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_dioPlugin
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



_CORBA_MODULE dioPluginTypes

_CORBA_MODULE_BEG

  class ULngLngSeq_var;

  class ULngLngSeq : public _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULongLong, 8, 8 >  {
  public:
    typedef ULngLngSeq_var _var_type;
    inline ULngLngSeq() {}
    inline ULngLngSeq(const ULngLngSeq& _s)
      : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULongLong, 8, 8 > (_s) {}

    inline ULngLngSeq(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULongLong, 8, 8 > (_max) {}
    inline ULngLngSeq(_CORBA_ULong _max, _CORBA_ULong _len, ::CORBA::ULongLong* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULongLong, 8, 8 > (_max, _len, _val, _rel) {}

  

    inline ULngLngSeq& operator = (const ULngLngSeq& _s) {
      _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULongLong, 8, 8 > ::operator=(_s);
      return *this;
    }
  };

  class ULngLngSeq_out;

  class ULngLngSeq_var {
  public:
    inline ULngLngSeq_var() : _pd_seq(0) {}
    inline ULngLngSeq_var(ULngLngSeq* _s) : _pd_seq(_s) {}
    inline ULngLngSeq_var(const ULngLngSeq_var& _s) {
      if (_s._pd_seq)  _pd_seq = new ULngLngSeq(*_s._pd_seq);
      else             _pd_seq = 0;
    }
    inline ~ULngLngSeq_var() { if (_pd_seq)  delete _pd_seq; }
      
    inline ULngLngSeq_var& operator = (ULngLngSeq* _s) {
      if (_pd_seq)  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline ULngLngSeq_var& operator = (const ULngLngSeq_var& _s) {
      if (&_s != this) {
        if (_s._pd_seq) {
          if (!_pd_seq)  _pd_seq = new ULngLngSeq;
          *_pd_seq = *_s._pd_seq;
        }
        else if (_pd_seq) {
          delete _pd_seq;
          _pd_seq = 0;
        }
      }
      return *this;
    }
    inline ::CORBA::ULongLong& operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline ULngLngSeq* operator -> () { return _pd_seq; }
    inline const ULngLngSeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator ULngLngSeq& () const { return *_pd_seq; }
#else
    inline operator const ULngLngSeq& () const { return *_pd_seq; }
    inline operator ULngLngSeq& () { return *_pd_seq; }
#endif
      
    inline const ULngLngSeq& in() const { return *_pd_seq; }
    inline ULngLngSeq&       inout()    { return *_pd_seq; }
    inline ULngLngSeq*&      out() {
      if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline ULngLngSeq* _retn() { ULngLngSeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class ULngLngSeq_out;
    
  private:
    ULngLngSeq* _pd_seq;
  };

  class ULngLngSeq_out {
  public:
    inline ULngLngSeq_out(ULngLngSeq*& _s) : _data(_s) { _data = 0; }
    inline ULngLngSeq_out(ULngLngSeq_var& _s)
      : _data(_s._pd_seq) { _s = (ULngLngSeq*) 0; }
    inline ULngLngSeq_out(const ULngLngSeq_out& _s) : _data(_s._data) {}
    inline ULngLngSeq_out& operator = (const ULngLngSeq_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline ULngLngSeq_out& operator = (ULngLngSeq* _s) {
      _data = _s;
      return *this;
    }
    inline operator ULngLngSeq*&()  { return _data; }
    inline ULngLngSeq*& ptr()       { return _data; }
    inline ULngLngSeq* operator->() { return _data; }

    inline ::CORBA::ULongLong& operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    ULngLngSeq*& _data;

  private:
    ULngLngSeq_out();
    ULngLngSeq_out& operator=(const ULngLngSeq_var&);
  };

_CORBA_MODULE_END

#ifndef __dioPlugin__
#define __dioPlugin__
class dioPlugin;
class _objref_dioPlugin;
class _impl_dioPlugin;

typedef _objref_dioPlugin* dioPlugin_ptr;
typedef dioPlugin_ptr dioPluginRef;

class dioPlugin_Helper {
public:
  typedef dioPlugin_ptr _ptr_type;

  static _ptr_type _nil();
  static _CORBA_Boolean is_nil(_ptr_type);
  static void release(_ptr_type);
  static void duplicate(_ptr_type);
  static void marshalObjRef(_ptr_type, cdrStream&);
  static _ptr_type unmarshalObjRef(cdrStream&);
};

typedef _CORBA_ObjRef_Var<_objref_dioPlugin, dioPlugin_Helper> dioPlugin_var;
typedef _CORBA_ObjRef_OUT_arg<_objref_dioPlugin,dioPlugin_Helper > dioPlugin_out;

#endif

// interface dioPlugin
class dioPlugin {
public:
  // Declarations for this interface type.
  typedef dioPlugin_ptr _ptr_type;
  typedef dioPlugin_var _var_type;

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
  static _core_attr const ::CORBA::ULong DO_OPEN _init_in_cldecl_( = 4294967295U );

  static _core_attr const ::CORBA::ULong DO_SHORT _init_in_cldecl_( = 0U );

  static _core_attr const ::CORBA::ULong DO_OFF _init_in_cldecl_( = 0U );

  static _core_attr const ::CORBA::ULong DO_ON _init_in_cldecl_( = 4294967295U );

  static _core_attr const ::CORBA::Octet DoutPort01 _init_in_cldecl_( = 0 );

  static _core_attr const ::CORBA::Octet DoutPort02 _init_in_cldecl_( = 1 );

  static _core_attr const ::CORBA::Octet DoutPort03 _init_in_cldecl_( = 2 );

  static _core_attr const ::CORBA::Octet DoutPort04 _init_in_cldecl_( = 3 );

  static _core_attr const ::CORBA::Octet DoutPort05 _init_in_cldecl_( = 4 );

  static _core_attr const ::CORBA::Octet DoutPort06 _init_in_cldecl_( = 5 );

  static _core_attr const ::CORBA::Octet DoutPort07 _init_in_cldecl_( = 6 );

  static _core_attr const ::CORBA::Octet DoutPort08 _init_in_cldecl_( = 7 );

  static _core_attr const ::CORBA::Octet DoutPort09 _init_in_cldecl_( = 8 );

  static _core_attr const ::CORBA::Octet DoutPort10 _init_in_cldecl_( = 9 );

  static _core_attr const ::CORBA::Octet DoutPort11 _init_in_cldecl_( = 10 );

  static _core_attr const ::CORBA::Octet DoutPort12 _init_in_cldecl_( = 11 );

  static _core_attr const ::CORBA::Octet DoutPort13 _init_in_cldecl_( = 12 );

  static _core_attr const ::CORBA::Octet DoutPort14 _init_in_cldecl_( = 13 );

  static _core_attr const ::CORBA::Octet DoutPort15 _init_in_cldecl_( = 14 );

  static _core_attr const ::CORBA::Octet DoutPort16 _init_in_cldecl_( = 15 );

  static _core_attr const ::CORBA::Octet DoutPort17 _init_in_cldecl_( = 16 );

  static _core_attr const ::CORBA::Octet DoutPort18 _init_in_cldecl_( = 17 );

  static _core_attr const ::CORBA::Octet DoutPort19 _init_in_cldecl_( = 18 );

  static _core_attr const ::CORBA::Octet DoutPort20 _init_in_cldecl_( = 19 );

  static _core_attr const ::CORBA::Octet DoutPort21 _init_in_cldecl_( = 20 );

  static _core_attr const ::CORBA::Octet DoutPort22 _init_in_cldecl_( = 21 );

  static _core_attr const ::CORBA::Octet DoutPort23 _init_in_cldecl_( = 22 );

  static _core_attr const ::CORBA::Octet DoutPort24 _init_in_cldecl_( = 23 );

  static _core_attr const ::CORBA::Octet DoutPort25 _init_in_cldecl_( = 24 );

  static _core_attr const ::CORBA::Octet DoutPort26 _init_in_cldecl_( = 25 );

  static _core_attr const ::CORBA::Octet DoutPort27 _init_in_cldecl_( = 26 );

  static _core_attr const ::CORBA::Octet DoutPort28 _init_in_cldecl_( = 27 );

  static _core_attr const ::CORBA::Octet DoutPort29 _init_in_cldecl_( = 28 );

  static _core_attr const ::CORBA::Octet DoutPort30 _init_in_cldecl_( = 29 );

  static _core_attr const ::CORBA::Octet DoutPort31 _init_in_cldecl_( = 30 );

  static _core_attr const ::CORBA::Octet DoutPort32 _init_in_cldecl_( = 31 );

  static _core_attr const ::CORBA::Octet DoutPort33 _init_in_cldecl_( = 32 );

  static _core_attr const ::CORBA::Octet DoutPort34 _init_in_cldecl_( = 33 );

  static _core_attr const ::CORBA::Octet DoutPort35 _init_in_cldecl_( = 34 );

  static _core_attr const ::CORBA::Octet DoutPort36 _init_in_cldecl_( = 35 );

  static _core_attr const ::CORBA::Octet DoutPort37 _init_in_cldecl_( = 36 );

  static _core_attr const ::CORBA::Octet DoutPort38 _init_in_cldecl_( = 37 );

  static _core_attr const ::CORBA::Octet DoutPort39 _init_in_cldecl_( = 38 );

  static _core_attr const ::CORBA::Octet DoutPort40 _init_in_cldecl_( = 39 );

  static _core_attr const ::CORBA::Octet DoutPort41 _init_in_cldecl_( = 40 );

  static _core_attr const ::CORBA::Octet DoutPort42 _init_in_cldecl_( = 41 );

  static _core_attr const ::CORBA::Octet DoutPort43 _init_in_cldecl_( = 42 );

  static _core_attr const ::CORBA::Octet DoutPort44 _init_in_cldecl_( = 43 );

  static _core_attr const ::CORBA::Octet DoutPort45 _init_in_cldecl_( = 44 );

  static _core_attr const ::CORBA::Octet DoutPort46 _init_in_cldecl_( = 45 );

  static _core_attr const ::CORBA::Octet DoutPort47 _init_in_cldecl_( = 46 );

  static _core_attr const ::CORBA::Octet DoutPort48 _init_in_cldecl_( = 47 );

  static _core_attr const ::CORBA::Octet DoutPort49 _init_in_cldecl_( = 48 );

  static _core_attr const ::CORBA::Octet DoutPort50 _init_in_cldecl_( = 49 );

  static _core_attr const ::CORBA::Octet DoutPort51 _init_in_cldecl_( = 50 );

  static _core_attr const ::CORBA::Octet DoutPort52 _init_in_cldecl_( = 51 );

  static _core_attr const ::CORBA::Octet DoutPort53 _init_in_cldecl_( = 52 );

  static _core_attr const ::CORBA::Octet DoutPort54 _init_in_cldecl_( = 53 );

  static _core_attr const ::CORBA::Octet DoutPort55 _init_in_cldecl_( = 54 );

  static _core_attr const ::CORBA::Octet DoutPort56 _init_in_cldecl_( = 55 );

  static _core_attr const ::CORBA::Octet DoutPort57 _init_in_cldecl_( = 56 );

  static _core_attr const ::CORBA::Octet DoutPort58 _init_in_cldecl_( = 57 );

  static _core_attr const ::CORBA::Octet DoutPort59 _init_in_cldecl_( = 58 );

  static _core_attr const ::CORBA::Octet DoutPort60 _init_in_cldecl_( = 59 );

  static _core_attr const ::CORBA::Octet DoutPort61 _init_in_cldecl_( = 60 );

  static _core_attr const ::CORBA::Octet DoutPort62 _init_in_cldecl_( = 61 );

  static _core_attr const ::CORBA::Octet DoutPort63 _init_in_cldecl_( = 62 );

  static _core_attr const ::CORBA::Octet DoutPort64 _init_in_cldecl_( = 63 );

  static _core_attr const ::CORBA::ULongLong DinPort01 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(1U) );

  static _core_attr const ::CORBA::ULongLong DinPort02 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(2U) );

  static _core_attr const ::CORBA::ULongLong DinPort03 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(4U) );

  static _core_attr const ::CORBA::ULongLong DinPort04 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(8U) );

  static _core_attr const ::CORBA::ULongLong DinPort05 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(16U) );

  static _core_attr const ::CORBA::ULongLong DinPort06 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(32U) );

  static _core_attr const ::CORBA::ULongLong DinPort07 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(64U) );

  static _core_attr const ::CORBA::ULongLong DinPort08 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(128U) );

  static _core_attr const ::CORBA::ULongLong DinPort09 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(256U) );

  static _core_attr const ::CORBA::ULongLong DinPort10 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(512U) );

  static _core_attr const ::CORBA::ULongLong DinPort11 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(1024U) );

  static _core_attr const ::CORBA::ULongLong DinPort12 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(2048U) );

  static _core_attr const ::CORBA::ULongLong DinPort13 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(4096U) );

  static _core_attr const ::CORBA::ULongLong DinPort14 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(8192U) );

  static _core_attr const ::CORBA::ULongLong DinPort15 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(16384U) );

  static _core_attr const ::CORBA::ULongLong DinPort16 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(32768U) );

  static _core_attr const ::CORBA::ULongLong DinPort17 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(65536U) );

  static _core_attr const ::CORBA::ULongLong DinPort18 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(131072U) );

  static _core_attr const ::CORBA::ULongLong DinPort19 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(262144U) );

  static _core_attr const ::CORBA::ULongLong DinPort20 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(524288U) );

  static _core_attr const ::CORBA::ULongLong DinPort21 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(1048576U) );

  static _core_attr const ::CORBA::ULongLong DinPort22 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(2097152U) );

  static _core_attr const ::CORBA::ULongLong DinPort23 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(4194304U) );

  static _core_attr const ::CORBA::ULongLong DinPort24 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(8388608U) );

  static _core_attr const ::CORBA::ULongLong DinPort25 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(16777216U) );

  static _core_attr const ::CORBA::ULongLong DinPort26 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(33554432U) );

  static _core_attr const ::CORBA::ULongLong DinPort27 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(67108864U) );

  static _core_attr const ::CORBA::ULongLong DinPort28 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(134217728U) );

  static _core_attr const ::CORBA::ULongLong DinPort29 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(268435456U) );

  static _core_attr const ::CORBA::ULongLong DinPort30 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(536870912U) );

  static _core_attr const ::CORBA::ULongLong DinPort31 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(1073741824U) );

  static _core_attr const ::CORBA::ULongLong DinPort32 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(2147483648U) );

  static _core_attr const ::CORBA::ULongLong DinPort33 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(4294967296U) );

  static _core_attr const ::CORBA::ULongLong DinPort34 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(8589934592U) );

  static _core_attr const ::CORBA::ULongLong DinPort35 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(17179869184U) );

  static _core_attr const ::CORBA::ULongLong DinPort36 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(34359738368U) );

  static _core_attr const ::CORBA::ULongLong DinPort37 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(68719476736U) );

  static _core_attr const ::CORBA::ULongLong DinPort38 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(137438953472U) );

  static _core_attr const ::CORBA::ULongLong DinPort39 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(274877906944U) );

  static _core_attr const ::CORBA::ULongLong DinPort40 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(549755813888U) );

  static _core_attr const ::CORBA::ULongLong DinPort41 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(1099511627776U) );

  static _core_attr const ::CORBA::ULongLong DinPort42 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(2199023255552U) );

  static _core_attr const ::CORBA::ULongLong DinPort43 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(4398046511104U) );

  static _core_attr const ::CORBA::ULongLong DinPort44 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(8796093022208U) );

  static _core_attr const ::CORBA::ULongLong DinPort45 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(17592186044416U) );

  static _core_attr const ::CORBA::ULongLong DinPort46 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(35184372088832U) );

  static _core_attr const ::CORBA::ULongLong DinPort47 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(70368744177664U) );

  static _core_attr const ::CORBA::ULongLong DinPort48 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(140737488355328U) );

  static _core_attr const ::CORBA::ULongLong DinPort49 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(281474976710656U) );

  static _core_attr const ::CORBA::ULongLong DinPort50 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(562949953421312U) );

  static _core_attr const ::CORBA::ULongLong DinPort51 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(1125899906842624U) );

  static _core_attr const ::CORBA::ULongLong DinPort52 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(2251799813685248U) );

  static _core_attr const ::CORBA::ULongLong DinPort53 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(4503599627370496U) );

  static _core_attr const ::CORBA::ULongLong DinPort54 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(9007199254740992U) );

  static _core_attr const ::CORBA::ULongLong DinPort55 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(18014398509481984U) );

  static _core_attr const ::CORBA::ULongLong DinPort56 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(36028797018963968U) );

  static _core_attr const ::CORBA::ULongLong DinPort57 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(72057594037927936U) );

  static _core_attr const ::CORBA::ULongLong DinPort58 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(144115188075855872U) );

  static _core_attr const ::CORBA::ULongLong DinPort59 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(288230376151711744U) );

  static _core_attr const ::CORBA::ULongLong DinPort60 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(576460752303423488U) );

  static _core_attr const ::CORBA::ULongLong DinPort61 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(1152921504606846976U) );

  static _core_attr const ::CORBA::ULongLong DinPort62 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(2305843009213693952U) );

  static _core_attr const ::CORBA::ULongLong DinPort63 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(4611686018427387904U) );

  static _core_attr const ::CORBA::ULongLong DinPort64 _init_in_cldecl_( = _CORBA_LONGLONG_CONST(9223372036854775808U) );


};

class _objref_dioPlugin :
  public virtual OpenHRP::_objref_Plugin
{
public:
  // IDL operations
  ::CORBA::ULongLong getDin();
  ::CORBA::ULongLong getDinExt();
  ::CORBA::ULong getDout(::CORBA::Octet port);
  ::CORBA::ULongLong getDoutAll();
  ::CORBA::ULongLong getDoutAllExt();
  ::CORBA::Boolean setDout(::CORBA::Octet port, ::CORBA::ULong blinkingCycle);
  ::CORBA::Boolean setDoutInternal(::CORBA::Octet port, ::CORBA::ULong blinkingCycle);
  ::CORBA::Boolean setDoutAll(::CORBA::ULongLong open_ports, ::CORBA::ULongLong short_ports);
  ::CORBA::Boolean setDoutAllExt(::CORBA::ULongLong open_ports, ::CORBA::ULongLong short_ports);
  ::CORBA::Octet getDioBoardNum();
  void getDoutMask(::dioPluginTypes::ULngLngSeq_out do_masks);
  void getDinMask(::dioPluginTypes::ULngLngSeq_out di_masks);

  // Constructors
  inline _objref_dioPlugin()  { _PR_setobj(0); }  // nil
  _objref_dioPlugin(omniIOR*, omniIdentity*);

protected:
  virtual ~_objref_dioPlugin();

  
private:
  virtual void* _ptrToObjRef(const char*);

  _objref_dioPlugin(const _objref_dioPlugin&);
  _objref_dioPlugin& operator = (const _objref_dioPlugin&);
  // not implemented

  friend class dioPlugin;
};

class _pof_dioPlugin : public _OMNI_NS(proxyObjectFactory) {
public:
  inline _pof_dioPlugin() : _OMNI_NS(proxyObjectFactory)(dioPlugin::_PD_repoId) {}
  virtual ~_pof_dioPlugin();

  virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
  virtual _CORBA_Boolean is_a(const char*) const;
};

class _impl_dioPlugin :
  public virtual OpenHRP::_impl_Plugin
{
public:
  virtual ~_impl_dioPlugin();

  virtual ::CORBA::ULongLong getDin() = 0;
  virtual ::CORBA::ULongLong getDinExt() = 0;
  virtual ::CORBA::ULong getDout(::CORBA::Octet port) = 0;
  virtual ::CORBA::ULongLong getDoutAll() = 0;
  virtual ::CORBA::ULongLong getDoutAllExt() = 0;
  virtual ::CORBA::Boolean setDout(::CORBA::Octet port, ::CORBA::ULong blinkingCycle) = 0;
  virtual ::CORBA::Boolean setDoutInternal(::CORBA::Octet port, ::CORBA::ULong blinkingCycle) = 0;
  virtual ::CORBA::Boolean setDoutAll(::CORBA::ULongLong open_ports, ::CORBA::ULongLong short_ports) = 0;
  virtual ::CORBA::Boolean setDoutAllExt(::CORBA::ULongLong open_ports, ::CORBA::ULongLong short_ports) = 0;
  virtual ::CORBA::Octet getDioBoardNum() = 0;
  virtual void getDoutMask(::dioPluginTypes::ULngLngSeq_out do_masks) = 0;
  virtual void getDinMask(::dioPluginTypes::ULngLngSeq_out di_masks) = 0;
  
public:  // Really protected, workaround for xlC
  virtual _CORBA_Boolean _dispatch(omniCallHandle&);

private:
  virtual void* _ptrToInterface(const char*);
  virtual const char* _mostDerivedRepoId();
  
};




_CORBA_MODULE POA_dioPluginTypes
_CORBA_MODULE_BEG

_CORBA_MODULE_END

class POA_dioPlugin :
  public virtual _impl_dioPlugin,
  public virtual POA_OpenHRP::Plugin
{
public:
  virtual ~POA_dioPlugin();

  inline ::dioPlugin_ptr _this() {
    return (::dioPlugin_ptr) _do_this(::dioPlugin::_PD_repoId);
  }
};



_CORBA_MODULE OBV_dioPluginTypes
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr



inline void
dioPlugin::_marshalObjRef(::dioPlugin_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}



#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_dioPlugin
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_dioPlugin
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_dioPlugin
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_dioPlugin
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_dioPlugin
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_dioPlugin
#endif

#endif  // __dioPlugin_hh__

