// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SpeedData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SpeedData_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SpeedData_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SpeedData_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SpeedData_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SpeedData_2eproto;
namespace aasdk {
namespace proto {
namespace data {
class Speed;
struct SpeedDefaultTypeInternal;
extern SpeedDefaultTypeInternal _Speed_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> ::aasdk::proto::data::Speed* Arena::CreateMaybeMessage<::aasdk::proto::data::Speed>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class Speed final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:aasdk.proto.data.Speed) */ {
 public:
  inline Speed() : Speed(nullptr) {}
  ~Speed() override;
  explicit constexpr Speed(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Speed(const Speed& from);
  Speed(Speed&& from) noexcept
    : Speed() {
    *this = ::std::move(from);
  }

  inline Speed& operator=(const Speed& from) {
    CopyFrom(from);
    return *this;
  }
  inline Speed& operator=(Speed&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const Speed& default_instance() {
    return *internal_default_instance();
  }
  static inline const Speed* internal_default_instance() {
    return reinterpret_cast<const Speed*>(
               &_Speed_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Speed& a, Speed& b) {
    a.Swap(&b);
  }
  inline void Swap(Speed* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Speed* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Speed* New() const final {
    return new Speed();
  }

  Speed* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Speed>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Speed& from);
  void MergeFrom(const Speed& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Speed* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "aasdk.proto.data.Speed";
  }
  protected:
  explicit Speed(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSpeedFieldNumber = 1,
    kCruiseEngagedFieldNumber = 2,
    kCruiseSetSpeedFieldNumber = 3,
  };
  // required int32 speed = 1;
  bool has_speed() const;
  private:
  bool _internal_has_speed() const;
  public:
  void clear_speed();
  ::PROTOBUF_NAMESPACE_ID::int32 speed() const;
  void set_speed(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_speed() const;
  void _internal_set_speed(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional bool cruise_engaged = 2;
  bool has_cruise_engaged() const;
  private:
  bool _internal_has_cruise_engaged() const;
  public:
  void clear_cruise_engaged();
  bool cruise_engaged() const;
  void set_cruise_engaged(bool value);
  private:
  bool _internal_cruise_engaged() const;
  void _internal_set_cruise_engaged(bool value);
  public:

  // optional bool cruise_set_speed = 3;
  bool has_cruise_set_speed() const;
  private:
  bool _internal_has_cruise_set_speed() const;
  public:
  void clear_cruise_set_speed();
  bool cruise_set_speed() const;
  void set_cruise_set_speed(bool value);
  private:
  bool _internal_cruise_set_speed() const;
  void _internal_set_cruise_set_speed(bool value);
  public:

  // @@protoc_insertion_point(class_scope:aasdk.proto.data.Speed)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 speed_;
  bool cruise_engaged_;
  bool cruise_set_speed_;
  friend struct ::TableStruct_SpeedData_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Speed

// required int32 speed = 1;
inline bool Speed::_internal_has_speed() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Speed::has_speed() const {
  return _internal_has_speed();
}
inline void Speed::clear_speed() {
  speed_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Speed::_internal_speed() const {
  return speed_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Speed::speed() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.data.Speed.speed)
  return _internal_speed();
}
inline void Speed::_internal_set_speed(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  speed_ = value;
}
inline void Speed::set_speed(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_speed(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.data.Speed.speed)
}

// optional bool cruise_engaged = 2;
inline bool Speed::_internal_has_cruise_engaged() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Speed::has_cruise_engaged() const {
  return _internal_has_cruise_engaged();
}
inline void Speed::clear_cruise_engaged() {
  cruise_engaged_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool Speed::_internal_cruise_engaged() const {
  return cruise_engaged_;
}
inline bool Speed::cruise_engaged() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.data.Speed.cruise_engaged)
  return _internal_cruise_engaged();
}
inline void Speed::_internal_set_cruise_engaged(bool value) {
  _has_bits_[0] |= 0x00000002u;
  cruise_engaged_ = value;
}
inline void Speed::set_cruise_engaged(bool value) {
  _internal_set_cruise_engaged(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.data.Speed.cruise_engaged)
}

// optional bool cruise_set_speed = 3;
inline bool Speed::_internal_has_cruise_set_speed() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Speed::has_cruise_set_speed() const {
  return _internal_has_cruise_set_speed();
}
inline void Speed::clear_cruise_set_speed() {
  cruise_set_speed_ = false;
  _has_bits_[0] &= ~0x00000004u;
}
inline bool Speed::_internal_cruise_set_speed() const {
  return cruise_set_speed_;
}
inline bool Speed::cruise_set_speed() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.data.Speed.cruise_set_speed)
  return _internal_cruise_set_speed();
}
inline void Speed::_internal_set_cruise_set_speed(bool value) {
  _has_bits_[0] |= 0x00000004u;
  cruise_set_speed_ = value;
}
inline void Speed::set_cruise_set_speed(bool value) {
  _internal_set_cruise_set_speed(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.data.Speed.cruise_set_speed)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace data
}  // namespace proto
}  // namespace aasdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SpeedData_2eproto