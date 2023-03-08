// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_test_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_test_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4022000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4022000 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_test_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_test_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_test_2eproto;
class testStruct;
struct testStructDefaultTypeInternal;
extern testStructDefaultTypeInternal _testStruct_default_instance_;
class testStruct_PhoneNumber;
struct testStruct_PhoneNumberDefaultTypeInternal;
extern testStruct_PhoneNumberDefaultTypeInternal _testStruct_PhoneNumber_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template <>
::testStruct* Arena::CreateMaybeMessage<::testStruct>(Arena*);
template <>
::testStruct_PhoneNumber* Arena::CreateMaybeMessage<::testStruct_PhoneNumber>(Arena*);
PROTOBUF_NAMESPACE_CLOSE


// ===================================================================


// -------------------------------------------------------------------

class testStruct_PhoneNumber final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:testStruct.PhoneNumber) */ {
 public:
  inline testStruct_PhoneNumber() : testStruct_PhoneNumber(nullptr) {}
  ~testStruct_PhoneNumber() override;
  explicit PROTOBUF_CONSTEXPR testStruct_PhoneNumber(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  testStruct_PhoneNumber(const testStruct_PhoneNumber& from);
  testStruct_PhoneNumber(testStruct_PhoneNumber&& from) noexcept
    : testStruct_PhoneNumber() {
    *this = ::std::move(from);
  }

  inline testStruct_PhoneNumber& operator=(const testStruct_PhoneNumber& from) {
    CopyFrom(from);
    return *this;
  }
  inline testStruct_PhoneNumber& operator=(testStruct_PhoneNumber&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const testStruct_PhoneNumber& default_instance() {
    return *internal_default_instance();
  }
  static inline const testStruct_PhoneNumber* internal_default_instance() {
    return reinterpret_cast<const testStruct_PhoneNumber*>(
               &_testStruct_PhoneNumber_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(testStruct_PhoneNumber& a, testStruct_PhoneNumber& b) {
    a.Swap(&b);
  }
  inline void Swap(testStruct_PhoneNumber* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(testStruct_PhoneNumber* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  testStruct_PhoneNumber* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<testStruct_PhoneNumber>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const testStruct_PhoneNumber& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const testStruct_PhoneNumber& from) {
    testStruct_PhoneNumber::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(testStruct_PhoneNumber* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "testStruct.PhoneNumber";
  }
  protected:
  explicit testStruct_PhoneNumber(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNumberFieldNumber = 1,
    kIdFieldNumber = 2,
  };
  // optional string number = 1;
  bool has_number() const;
  void clear_number() ;
  const std::string& number() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_number(Arg_&& arg, Args_... args);
  std::string* mutable_number();
  PROTOBUF_NODISCARD std::string* release_number();
  void set_allocated_number(std::string* ptr);

  private:
  const std::string& _internal_number() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_number(
      const std::string& value);
  std::string* _internal_mutable_number();

  public:
  // optional int32 id = 2;
  bool has_id() const;
  void clear_id() ;
  ::int32_t id() const;
  void set_id(::int32_t value);

  private:
  ::int32_t _internal_id() const;
  void _internal_set_id(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:testStruct.PhoneNumber)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr number_;
    ::int32_t id_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_test_2eproto;
};// -------------------------------------------------------------------

class testStruct final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:testStruct) */ {
 public:
  inline testStruct() : testStruct(nullptr) {}
  ~testStruct() override;
  explicit PROTOBUF_CONSTEXPR testStruct(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  testStruct(const testStruct& from);
  testStruct(testStruct&& from) noexcept
    : testStruct() {
    *this = ::std::move(from);
  }

  inline testStruct& operator=(const testStruct& from) {
    CopyFrom(from);
    return *this;
  }
  inline testStruct& operator=(testStruct&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const testStruct& default_instance() {
    return *internal_default_instance();
  }
  static inline const testStruct* internal_default_instance() {
    return reinterpret_cast<const testStruct*>(
               &_testStruct_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(testStruct& a, testStruct& b) {
    a.Swap(&b);
  }
  inline void Swap(testStruct* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(testStruct* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  testStruct* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<testStruct>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const testStruct& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const testStruct& from) {
    testStruct::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(testStruct* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "testStruct";
  }
  protected:
  explicit testStruct(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef testStruct_PhoneNumber PhoneNumber;

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kPhonesFieldNumber = 4,
    kIdFieldNumber = 1,
    kSalaryFieldNumber = 3,
  };
  // string name = 2;
  void clear_name() ;
  const std::string& name() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* ptr);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // .testStruct.PhoneNumber phones = 4;
  bool has_phones() const;
  private:
  bool _internal_has_phones() const;

  public:
  void clear_phones() ;
  const ::testStruct_PhoneNumber& phones() const;
  PROTOBUF_NODISCARD ::testStruct_PhoneNumber* release_phones();
  ::testStruct_PhoneNumber* mutable_phones();
  void set_allocated_phones(::testStruct_PhoneNumber* phones);
  private:
  const ::testStruct_PhoneNumber& _internal_phones() const;
  ::testStruct_PhoneNumber* _internal_mutable_phones();
  public:
  void unsafe_arena_set_allocated_phones(
      ::testStruct_PhoneNumber* phones);
  ::testStruct_PhoneNumber* unsafe_arena_release_phones();
  // int32 id = 1;
  void clear_id() ;
  ::int32_t id() const;
  void set_id(::int32_t value);

  private:
  ::int32_t _internal_id() const;
  void _internal_set_id(::int32_t value);

  public:
  // float salary = 3;
  void clear_salary() ;
  float salary() const;
  void set_salary(float value);

  private:
  float _internal_salary() const;
  void _internal_set_salary(float value);

  public:
  // @@protoc_insertion_point(class_scope:testStruct)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::testStruct_PhoneNumber* phones_;
    ::int32_t id_;
    float salary_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_test_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// testStruct_PhoneNumber

// optional string number = 1;
inline bool testStruct_PhoneNumber::has_number() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void testStruct_PhoneNumber::clear_number() {
  _impl_.number_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& testStruct_PhoneNumber::number() const {
  // @@protoc_insertion_point(field_get:testStruct.PhoneNumber.number)
  return _internal_number();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void testStruct_PhoneNumber::set_number(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.number_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:testStruct.PhoneNumber.number)
}
inline std::string* testStruct_PhoneNumber::mutable_number() {
  std::string* _s = _internal_mutable_number();
  // @@protoc_insertion_point(field_mutable:testStruct.PhoneNumber.number)
  return _s;
}
inline const std::string& testStruct_PhoneNumber::_internal_number() const {
  return _impl_.number_.Get();
}
inline void testStruct_PhoneNumber::_internal_set_number(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.number_.Set(value, GetArenaForAllocation());
}
inline std::string* testStruct_PhoneNumber::_internal_mutable_number() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.number_.Mutable( GetArenaForAllocation());
}
inline std::string* testStruct_PhoneNumber::release_number() {
  // @@protoc_insertion_point(field_release:testStruct.PhoneNumber.number)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.number_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.number_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void testStruct_PhoneNumber::set_allocated_number(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.number_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.number_.IsDefault()) {
          _impl_.number_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:testStruct.PhoneNumber.number)
}

// optional int32 id = 2;
inline bool testStruct_PhoneNumber::has_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void testStruct_PhoneNumber::clear_id() {
  _impl_.id_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int32_t testStruct_PhoneNumber::id() const {
  // @@protoc_insertion_point(field_get:testStruct.PhoneNumber.id)
  return _internal_id();
}
inline void testStruct_PhoneNumber::set_id(::int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:testStruct.PhoneNumber.id)
}
inline ::int32_t testStruct_PhoneNumber::_internal_id() const {
  return _impl_.id_;
}
inline void testStruct_PhoneNumber::_internal_set_id(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.id_ = value;
}

// -------------------------------------------------------------------

// testStruct

// int32 id = 1;
inline void testStruct::clear_id() {
  _impl_.id_ = 0;
}
inline ::int32_t testStruct::id() const {
  // @@protoc_insertion_point(field_get:testStruct.id)
  return _internal_id();
}
inline void testStruct::set_id(::int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:testStruct.id)
}
inline ::int32_t testStruct::_internal_id() const {
  return _impl_.id_;
}
inline void testStruct::_internal_set_id(::int32_t value) {
  ;
  _impl_.id_ = value;
}

// string name = 2;
inline void testStruct::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& testStruct::name() const {
  // @@protoc_insertion_point(field_get:testStruct.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void testStruct::set_name(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:testStruct.name)
}
inline std::string* testStruct::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:testStruct.name)
  return _s;
}
inline const std::string& testStruct::_internal_name() const {
  return _impl_.name_.Get();
}
inline void testStruct::_internal_set_name(const std::string& value) {
  ;


  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* testStruct::_internal_mutable_name() {
  ;
  return _impl_.name_.Mutable( GetArenaForAllocation());
}
inline std::string* testStruct::release_name() {
  // @@protoc_insertion_point(field_release:testStruct.name)
  return _impl_.name_.Release();
}
inline void testStruct::set_allocated_name(std::string* value) {
  _impl_.name_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:testStruct.name)
}

// float salary = 3;
inline void testStruct::clear_salary() {
  _impl_.salary_ = 0;
}
inline float testStruct::salary() const {
  // @@protoc_insertion_point(field_get:testStruct.salary)
  return _internal_salary();
}
inline void testStruct::set_salary(float value) {
  _internal_set_salary(value);
  // @@protoc_insertion_point(field_set:testStruct.salary)
}
inline float testStruct::_internal_salary() const {
  return _impl_.salary_;
}
inline void testStruct::_internal_set_salary(float value) {
  ;
  _impl_.salary_ = value;
}

// .testStruct.PhoneNumber phones = 4;
inline bool testStruct::_internal_has_phones() const {
  return this != internal_default_instance() && _impl_.phones_ != nullptr;
}
inline bool testStruct::has_phones() const {
  return _internal_has_phones();
}
inline void testStruct::clear_phones() {
  if (GetArenaForAllocation() == nullptr && _impl_.phones_ != nullptr) {
    delete _impl_.phones_;
  }
  _impl_.phones_ = nullptr;
}
inline const ::testStruct_PhoneNumber& testStruct::_internal_phones() const {
  const ::testStruct_PhoneNumber* p = _impl_.phones_;
  return p != nullptr ? *p : reinterpret_cast<const ::testStruct_PhoneNumber&>(
      ::_testStruct_PhoneNumber_default_instance_);
}
inline const ::testStruct_PhoneNumber& testStruct::phones() const {
  // @@protoc_insertion_point(field_get:testStruct.phones)
  return _internal_phones();
}
inline void testStruct::unsafe_arena_set_allocated_phones(
    ::testStruct_PhoneNumber* phones) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.phones_);
  }
  _impl_.phones_ = phones;
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:testStruct.phones)
}
inline ::testStruct_PhoneNumber* testStruct::release_phones() {
  
  ::testStruct_PhoneNumber* temp = _impl_.phones_;
  _impl_.phones_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::testStruct_PhoneNumber* testStruct::unsafe_arena_release_phones() {
  // @@protoc_insertion_point(field_release:testStruct.phones)
  
  ::testStruct_PhoneNumber* temp = _impl_.phones_;
  _impl_.phones_ = nullptr;
  return temp;
}
inline ::testStruct_PhoneNumber* testStruct::_internal_mutable_phones() {
  
  if (_impl_.phones_ == nullptr) {
    auto* p = CreateMaybeMessage<::testStruct_PhoneNumber>(GetArenaForAllocation());
    _impl_.phones_ = p;
  }
  return _impl_.phones_;
}
inline ::testStruct_PhoneNumber* testStruct::mutable_phones() {
  ::testStruct_PhoneNumber* _msg = _internal_mutable_phones();
  // @@protoc_insertion_point(field_mutable:testStruct.phones)
  return _msg;
}
inline void testStruct::set_allocated_phones(::testStruct_PhoneNumber* phones) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete _impl_.phones_;
  }
  if (phones) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(phones);
    if (message_arena != submessage_arena) {
      phones = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, phones, submessage_arena);
    }

  } else {

  }
  _impl_.phones_ = phones;
  // @@protoc_insertion_point(field_set_allocated:testStruct.phones)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_test_2eproto_2epb_2eh
