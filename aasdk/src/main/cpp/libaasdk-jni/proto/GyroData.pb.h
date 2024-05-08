// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GyroData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GyroData_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GyroData_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_GyroData_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GyroData_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GyroData_2eproto;
namespace aasdk {
namespace proto {
namespace data {
class Gyro;
struct GyroDefaultTypeInternal;
extern GyroDefaultTypeInternal _Gyro_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> ::aasdk::proto::data::Gyro* Arena::CreateMaybeMessage<::aasdk::proto::data::Gyro>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class Gyro final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:aasdk.proto.data.Gyro) */ {
 public:
  inline Gyro() : Gyro(nullptr) {}
  ~Gyro() override;
  explicit constexpr Gyro(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Gyro(const Gyro& from);
  Gyro(Gyro&& from) noexcept
    : Gyro() {
    *this = ::std::move(from);
  }

  inline Gyro& operator=(const Gyro& from) {
    CopyFrom(from);
    return *this;
  }
  inline Gyro& operator=(Gyro&& from) noexcept {
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
  static const Gyro& default_instance() {
    return *internal_default_instance();
  }
  static inline const Gyro* internal_default_instance() {
    return reinterpret_cast<const Gyro*>(
               &_Gyro_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Gyro& a, Gyro& b) {
    a.Swap(&b);
  }
  inline void Swap(Gyro* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Gyro* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Gyro* New() const final {
    return new Gyro();
  }

  Gyro* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Gyro>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Gyro& from);
  void MergeFrom(const Gyro& from);
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
  void InternalSwap(Gyro* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "aasdk.proto.data.Gyro";
  }
  protected:
  explicit Gyro(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRotationSpeedXFieldNumber = 1,
    kRotationSpeedYFieldNumber = 2,
    kRotationSpeedZFieldNumber = 3,
  };
  // required int32 rotation_speed_x = 1;
  bool has_rotation_speed_x() const;
  private:
  bool _internal_has_rotation_speed_x() const;
  public:
  void clear_rotation_speed_x();
  ::PROTOBUF_NAMESPACE_ID::int32 rotation_speed_x() const;
  void set_rotation_speed_x(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rotation_speed_x() const;
  void _internal_set_rotation_speed_x(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 rotation_speed_y = 2;
  bool has_rotation_speed_y() const;
  private:
  bool _internal_has_rotation_speed_y() const;
  public:
  void clear_rotation_speed_y();
  ::PROTOBUF_NAMESPACE_ID::int32 rotation_speed_y() const;
  void set_rotation_speed_y(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rotation_speed_y() const;
  void _internal_set_rotation_speed_y(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 rotation_speed_z = 3;
  bool has_rotation_speed_z() const;
  private:
  bool _internal_has_rotation_speed_z() const;
  public:
  void clear_rotation_speed_z();
  ::PROTOBUF_NAMESPACE_ID::int32 rotation_speed_z() const;
  void set_rotation_speed_z(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rotation_speed_z() const;
  void _internal_set_rotation_speed_z(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:aasdk.proto.data.Gyro)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 rotation_speed_x_;
  ::PROTOBUF_NAMESPACE_ID::int32 rotation_speed_y_;
  ::PROTOBUF_NAMESPACE_ID::int32 rotation_speed_z_;
  friend struct ::TableStruct_GyroData_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Gyro

// required int32 rotation_speed_x = 1;
inline bool Gyro::_internal_has_rotation_speed_x() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Gyro::has_rotation_speed_x() const {
  return _internal_has_rotation_speed_x();
}
inline void Gyro::clear_rotation_speed_x() {
  rotation_speed_x_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Gyro::_internal_rotation_speed_x() const {
  return rotation_speed_x_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Gyro::rotation_speed_x() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.data.Gyro.rotation_speed_x)
  return _internal_rotation_speed_x();
}
inline void Gyro::_internal_set_rotation_speed_x(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  rotation_speed_x_ = value;
}
inline void Gyro::set_rotation_speed_x(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rotation_speed_x(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.data.Gyro.rotation_speed_x)
}

// required int32 rotation_speed_y = 2;
inline bool Gyro::_internal_has_rotation_speed_y() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Gyro::has_rotation_speed_y() const {
  return _internal_has_rotation_speed_y();
}
inline void Gyro::clear_rotation_speed_y() {
  rotation_speed_y_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Gyro::_internal_rotation_speed_y() const {
  return rotation_speed_y_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Gyro::rotation_speed_y() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.data.Gyro.rotation_speed_y)
  return _internal_rotation_speed_y();
}
inline void Gyro::_internal_set_rotation_speed_y(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  rotation_speed_y_ = value;
}
inline void Gyro::set_rotation_speed_y(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rotation_speed_y(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.data.Gyro.rotation_speed_y)
}

// required int32 rotation_speed_z = 3;
inline bool Gyro::_internal_has_rotation_speed_z() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Gyro::has_rotation_speed_z() const {
  return _internal_has_rotation_speed_z();
}
inline void Gyro::clear_rotation_speed_z() {
  rotation_speed_z_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Gyro::_internal_rotation_speed_z() const {
  return rotation_speed_z_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Gyro::rotation_speed_z() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.data.Gyro.rotation_speed_z)
  return _internal_rotation_speed_z();
}
inline void Gyro::_internal_set_rotation_speed_z(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  rotation_speed_z_ = value;
}
inline void Gyro::set_rotation_speed_z(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rotation_speed_z(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.data.Gyro.rotation_speed_z)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GyroData_2eproto