// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ManeuverTypeEnum.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ManeuverTypeEnum_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ManeuverTypeEnum_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ManeuverTypeEnum_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ManeuverTypeEnum_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ManeuverTypeEnum_2eproto;
namespace aasdk {
namespace proto {
namespace enums {
class ManeuverType;
struct ManeuverTypeDefaultTypeInternal;
extern ManeuverTypeDefaultTypeInternal _ManeuverType_default_instance_;
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> ::aasdk::proto::enums::ManeuverType* Arena::CreateMaybeMessage<::aasdk::proto::enums::ManeuverType>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace aasdk {
namespace proto {
namespace enums {

enum ManeuverType_Enum : int {
  ManeuverType_Enum_UNKNOWN = 0,
  ManeuverType_Enum_DEPART = 1,
  ManeuverType_Enum_NAME_CHANGE = 2,
  ManeuverType_Enum_SLIGHT_TURN = 3,
  ManeuverType_Enum_TURN = 4,
  ManeuverType_Enum_SHARP_TURN = 5,
  ManeuverType_Enum_U_TURN = 6,
  ManeuverType_Enum_ON_RAMP = 7,
  ManeuverType_Enum_OFF_RAMP = 8,
  ManeuverType_Enum_FORK = 9,
  ManeuverType_Enum_MERGE = 10,
  ManeuverType_Enum_ROUNDABOUT_ENTER = 11,
  ManeuverType_Enum_ROUNDABOUT_EXIT = 12,
  ManeuverType_Enum_ROUNDABOUT_ENTER_AND_EXIT = 13,
  ManeuverType_Enum_STRAIGHT = 14,
  ManeuverType_Enum_FERRY_BOAT = 16,
  ManeuverType_Enum_FERRY_TRAIN = 17,
  ManeuverType_Enum_DESTINATION = 19
};
bool ManeuverType_Enum_IsValid(int value);
constexpr ManeuverType_Enum ManeuverType_Enum_Enum_MIN = ManeuverType_Enum_UNKNOWN;
constexpr ManeuverType_Enum ManeuverType_Enum_Enum_MAX = ManeuverType_Enum_DESTINATION;
constexpr int ManeuverType_Enum_Enum_ARRAYSIZE = ManeuverType_Enum_Enum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ManeuverType_Enum_descriptor();
template<typename T>
inline const std::string& ManeuverType_Enum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ManeuverType_Enum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ManeuverType_Enum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ManeuverType_Enum_descriptor(), enum_t_value);
}
inline bool ManeuverType_Enum_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ManeuverType_Enum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ManeuverType_Enum>(
    ManeuverType_Enum_descriptor(), name, value);
}
// ===================================================================

class ManeuverType final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:aasdk.proto.enums.ManeuverType) */ {
 public:
  inline ManeuverType() : ManeuverType(nullptr) {}
  ~ManeuverType() override;
  explicit constexpr ManeuverType(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ManeuverType(const ManeuverType& from);
  ManeuverType(ManeuverType&& from) noexcept
    : ManeuverType() {
    *this = ::std::move(from);
  }

  inline ManeuverType& operator=(const ManeuverType& from) {
    CopyFrom(from);
    return *this;
  }
  inline ManeuverType& operator=(ManeuverType&& from) noexcept {
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
  static const ManeuverType& default_instance() {
    return *internal_default_instance();
  }
  static inline const ManeuverType* internal_default_instance() {
    return reinterpret_cast<const ManeuverType*>(
               &_ManeuverType_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ManeuverType& a, ManeuverType& b) {
    a.Swap(&b);
  }
  inline void Swap(ManeuverType* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ManeuverType* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ManeuverType* New() const final {
    return new ManeuverType();
  }

  ManeuverType* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ManeuverType>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ManeuverType& from);
  void MergeFrom(const ManeuverType& from);
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
  void InternalSwap(ManeuverType* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "aasdk.proto.enums.ManeuverType";
  }
  protected:
  explicit ManeuverType(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef ManeuverType_Enum Enum;
  static constexpr Enum UNKNOWN =
    ManeuverType_Enum_UNKNOWN;
  static constexpr Enum DEPART =
    ManeuverType_Enum_DEPART;
  static constexpr Enum NAME_CHANGE =
    ManeuverType_Enum_NAME_CHANGE;
  static constexpr Enum SLIGHT_TURN =
    ManeuverType_Enum_SLIGHT_TURN;
  static constexpr Enum TURN =
    ManeuverType_Enum_TURN;
  static constexpr Enum SHARP_TURN =
    ManeuverType_Enum_SHARP_TURN;
  static constexpr Enum U_TURN =
    ManeuverType_Enum_U_TURN;
  static constexpr Enum ON_RAMP =
    ManeuverType_Enum_ON_RAMP;
  static constexpr Enum OFF_RAMP =
    ManeuverType_Enum_OFF_RAMP;
  static constexpr Enum FORK =
    ManeuverType_Enum_FORK;
  static constexpr Enum MERGE =
    ManeuverType_Enum_MERGE;
  static constexpr Enum ROUNDABOUT_ENTER =
    ManeuverType_Enum_ROUNDABOUT_ENTER;
  static constexpr Enum ROUNDABOUT_EXIT =
    ManeuverType_Enum_ROUNDABOUT_EXIT;
  static constexpr Enum ROUNDABOUT_ENTER_AND_EXIT =
    ManeuverType_Enum_ROUNDABOUT_ENTER_AND_EXIT;
  static constexpr Enum STRAIGHT =
    ManeuverType_Enum_STRAIGHT;
  static constexpr Enum FERRY_BOAT =
    ManeuverType_Enum_FERRY_BOAT;
  static constexpr Enum FERRY_TRAIN =
    ManeuverType_Enum_FERRY_TRAIN;
  static constexpr Enum DESTINATION =
    ManeuverType_Enum_DESTINATION;
  static inline bool Enum_IsValid(int value) {
    return ManeuverType_Enum_IsValid(value);
  }
  static constexpr Enum Enum_MIN =
    ManeuverType_Enum_Enum_MIN;
  static constexpr Enum Enum_MAX =
    ManeuverType_Enum_Enum_MAX;
  static constexpr int Enum_ARRAYSIZE =
    ManeuverType_Enum_Enum_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Enum_descriptor() {
    return ManeuverType_Enum_descriptor();
  }
  template<typename T>
  static inline const std::string& Enum_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Enum>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Enum_Name.");
    return ManeuverType_Enum_Name(enum_t_value);
  }
  static inline bool Enum_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Enum* value) {
    return ManeuverType_Enum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:aasdk.proto.enums.ManeuverType)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ManeuverTypeEnum_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ManeuverType

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace enums
}  // namespace proto
}  // namespace aasdk

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::aasdk::proto::enums::ManeuverType_Enum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::aasdk::proto::enums::ManeuverType_Enum>() {
  return ::aasdk::proto::enums::ManeuverType_Enum_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ManeuverTypeEnum_2eproto
