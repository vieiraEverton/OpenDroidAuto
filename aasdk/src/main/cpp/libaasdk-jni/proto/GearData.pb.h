// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GearData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GearData_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GearData_2eproto

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
#include "GearEnum.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_GearData_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GearData_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GearData_2eproto;
namespace aasdk {
namespace proto {
namespace data {
class Gear;
struct GearDefaultTypeInternal;
extern GearDefaultTypeInternal _Gear_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> ::aasdk::proto::data::Gear* Arena::CreateMaybeMessage<::aasdk::proto::data::Gear>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class Gear final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:aasdk.proto.data.Gear) */ {
 public:
  inline Gear() : Gear(nullptr) {}
  ~Gear() override;
  explicit constexpr Gear(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Gear(const Gear& from);
  Gear(Gear&& from) noexcept
    : Gear() {
    *this = ::std::move(from);
  }

  inline Gear& operator=(const Gear& from) {
    CopyFrom(from);
    return *this;
  }
  inline Gear& operator=(Gear&& from) noexcept {
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
  static const Gear& default_instance() {
    return *internal_default_instance();
  }
  static inline const Gear* internal_default_instance() {
    return reinterpret_cast<const Gear*>(
               &_Gear_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Gear& a, Gear& b) {
    a.Swap(&b);
  }
  inline void Swap(Gear* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Gear* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Gear* New() const final {
    return new Gear();
  }

  Gear* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Gear>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Gear& from);
  void MergeFrom(const Gear& from);
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
  void InternalSwap(Gear* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "aasdk.proto.data.Gear";
  }
  protected:
  explicit Gear(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGearFieldNumber = 1,
  };
  // required .aasdk.proto.enums.Gear.Enum gear = 1;
  bool has_gear() const;
  private:
  bool _internal_has_gear() const;
  public:
  void clear_gear();
  ::aasdk::proto::enums::Gear_Enum gear() const;
  void set_gear(::aasdk::proto::enums::Gear_Enum value);
  private:
  ::aasdk::proto::enums::Gear_Enum _internal_gear() const;
  void _internal_set_gear(::aasdk::proto::enums::Gear_Enum value);
  public:

  // @@protoc_insertion_point(class_scope:aasdk.proto.data.Gear)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  int gear_;
  friend struct ::TableStruct_GearData_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Gear

// required .aasdk.proto.enums.Gear.Enum gear = 1;
inline bool Gear::_internal_has_gear() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Gear::has_gear() const {
  return _internal_has_gear();
}
inline void Gear::clear_gear() {
  gear_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::aasdk::proto::enums::Gear_Enum Gear::_internal_gear() const {
  return static_cast< ::aasdk::proto::enums::Gear_Enum >(gear_);
}
inline ::aasdk::proto::enums::Gear_Enum Gear::gear() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.data.Gear.gear)
  return _internal_gear();
}
inline void Gear::_internal_set_gear(::aasdk::proto::enums::Gear_Enum value) {
  assert(::aasdk::proto::enums::Gear_Enum_IsValid(value));
  _has_bits_[0] |= 0x00000001u;
  gear_ = value;
}
inline void Gear::set_gear(::aasdk::proto::enums::Gear_Enum value) {
  _internal_set_gear(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.data.Gear.gear)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GearData_2eproto