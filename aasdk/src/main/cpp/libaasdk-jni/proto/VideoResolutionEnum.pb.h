// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VideoResolutionEnum.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_VideoResolutionEnum_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_VideoResolutionEnum_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_VideoResolutionEnum_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_VideoResolutionEnum_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_VideoResolutionEnum_2eproto;
namespace aasdk {
namespace proto {
namespace enums {
class VideoResolution;
struct VideoResolutionDefaultTypeInternal;
extern VideoResolutionDefaultTypeInternal _VideoResolution_default_instance_;
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> ::aasdk::proto::enums::VideoResolution* Arena::CreateMaybeMessage<::aasdk::proto::enums::VideoResolution>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace aasdk {
namespace proto {
namespace enums {

enum VideoResolution_Enum : int {
  VideoResolution_Enum_NONE = 0,
  VideoResolution_Enum__480p = 1,
  VideoResolution_Enum__720p = 2,
  VideoResolution_Enum__1080p = 3,
  VideoResolution_Enum__1440p = 4,
  VideoResolution_Enum__720p_p = 5,
  VideoResolution_Enum__1080pp = 6,
  VideoResolution_Enum__108s0p_p = 7
};
bool VideoResolution_Enum_IsValid(int value);
constexpr VideoResolution_Enum VideoResolution_Enum_Enum_MIN = VideoResolution_Enum_NONE;
constexpr VideoResolution_Enum VideoResolution_Enum_Enum_MAX = VideoResolution_Enum__108s0p_p;
constexpr int VideoResolution_Enum_Enum_ARRAYSIZE = VideoResolution_Enum_Enum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* VideoResolution_Enum_descriptor();
template<typename T>
inline const std::string& VideoResolution_Enum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, VideoResolution_Enum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function VideoResolution_Enum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    VideoResolution_Enum_descriptor(), enum_t_value);
}
inline bool VideoResolution_Enum_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, VideoResolution_Enum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<VideoResolution_Enum>(
    VideoResolution_Enum_descriptor(), name, value);
}
// ===================================================================

class VideoResolution final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:aasdk.proto.enums.VideoResolution) */ {
 public:
  inline VideoResolution() : VideoResolution(nullptr) {}
  ~VideoResolution() override;
  explicit constexpr VideoResolution(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  VideoResolution(const VideoResolution& from);
  VideoResolution(VideoResolution&& from) noexcept
    : VideoResolution() {
    *this = ::std::move(from);
  }

  inline VideoResolution& operator=(const VideoResolution& from) {
    CopyFrom(from);
    return *this;
  }
  inline VideoResolution& operator=(VideoResolution&& from) noexcept {
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
  static const VideoResolution& default_instance() {
    return *internal_default_instance();
  }
  static inline const VideoResolution* internal_default_instance() {
    return reinterpret_cast<const VideoResolution*>(
               &_VideoResolution_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(VideoResolution& a, VideoResolution& b) {
    a.Swap(&b);
  }
  inline void Swap(VideoResolution* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(VideoResolution* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VideoResolution* New() const final {
    return new VideoResolution();
  }

  VideoResolution* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VideoResolution>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const VideoResolution& from);
  void MergeFrom(const VideoResolution& from);
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
  void InternalSwap(VideoResolution* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "aasdk.proto.enums.VideoResolution";
  }
  protected:
  explicit VideoResolution(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef VideoResolution_Enum Enum;
  static constexpr Enum NONE =
    VideoResolution_Enum_NONE;
  static constexpr Enum _480p =
    VideoResolution_Enum__480p;
  static constexpr Enum _720p =
    VideoResolution_Enum__720p;
  static constexpr Enum _1080p =
    VideoResolution_Enum__1080p;
  static constexpr Enum _1440p =
    VideoResolution_Enum__1440p;
  static constexpr Enum _720p_p =
    VideoResolution_Enum__720p_p;
  static constexpr Enum _1080pp =
    VideoResolution_Enum__1080pp;
  static constexpr Enum _108s0p_p =
    VideoResolution_Enum__108s0p_p;
  static inline bool Enum_IsValid(int value) {
    return VideoResolution_Enum_IsValid(value);
  }
  static constexpr Enum Enum_MIN =
    VideoResolution_Enum_Enum_MIN;
  static constexpr Enum Enum_MAX =
    VideoResolution_Enum_Enum_MAX;
  static constexpr int Enum_ARRAYSIZE =
    VideoResolution_Enum_Enum_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Enum_descriptor() {
    return VideoResolution_Enum_descriptor();
  }
  template<typename T>
  static inline const std::string& Enum_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Enum>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Enum_Name.");
    return VideoResolution_Enum_Name(enum_t_value);
  }
  static inline bool Enum_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Enum* value) {
    return VideoResolution_Enum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:aasdk.proto.enums.VideoResolution)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_VideoResolutionEnum_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VideoResolution

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace enums
}  // namespace proto
}  // namespace aasdk

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::aasdk::proto::enums::VideoResolution_Enum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::aasdk::proto::enums::VideoResolution_Enum>() {
  return ::aasdk::proto::enums::VideoResolution_Enum_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_VideoResolutionEnum_2eproto
