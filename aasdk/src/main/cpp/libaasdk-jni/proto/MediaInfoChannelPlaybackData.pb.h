// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MediaInfoChannelPlaybackData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MediaInfoChannelPlaybackData_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MediaInfoChannelPlaybackData_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_MediaInfoChannelPlaybackData_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MediaInfoChannelPlaybackData_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MediaInfoChannelPlaybackData_2eproto;
namespace aasdk {
namespace proto {
namespace messages {
class MediaInfoChannelPlaybackData;
struct MediaInfoChannelPlaybackDataDefaultTypeInternal;
extern MediaInfoChannelPlaybackDataDefaultTypeInternal _MediaInfoChannelPlaybackData_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> ::aasdk::proto::messages::MediaInfoChannelPlaybackData* Arena::CreateMaybeMessage<::aasdk::proto::messages::MediaInfoChannelPlaybackData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace aasdk {
namespace proto {
namespace messages {

enum MediaInfoChannelPlaybackData_PlaybackState : int {
  MediaInfoChannelPlaybackData_PlaybackState_NONE = 0,
  MediaInfoChannelPlaybackData_PlaybackState_TRACK_CHANGE = 1,
  MediaInfoChannelPlaybackData_PlaybackState_PLAY = 2,
  MediaInfoChannelPlaybackData_PlaybackState_PAUSE = 3
};
bool MediaInfoChannelPlaybackData_PlaybackState_IsValid(int value);
constexpr MediaInfoChannelPlaybackData_PlaybackState MediaInfoChannelPlaybackData_PlaybackState_PlaybackState_MIN = MediaInfoChannelPlaybackData_PlaybackState_NONE;
constexpr MediaInfoChannelPlaybackData_PlaybackState MediaInfoChannelPlaybackData_PlaybackState_PlaybackState_MAX = MediaInfoChannelPlaybackData_PlaybackState_PAUSE;
constexpr int MediaInfoChannelPlaybackData_PlaybackState_PlaybackState_ARRAYSIZE = MediaInfoChannelPlaybackData_PlaybackState_PlaybackState_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MediaInfoChannelPlaybackData_PlaybackState_descriptor();
template<typename T>
inline const std::string& MediaInfoChannelPlaybackData_PlaybackState_Name(T enum_t_value) {
  static_assert(::std::is_same<T, MediaInfoChannelPlaybackData_PlaybackState>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function MediaInfoChannelPlaybackData_PlaybackState_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    MediaInfoChannelPlaybackData_PlaybackState_descriptor(), enum_t_value);
}
inline bool MediaInfoChannelPlaybackData_PlaybackState_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, MediaInfoChannelPlaybackData_PlaybackState* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<MediaInfoChannelPlaybackData_PlaybackState>(
    MediaInfoChannelPlaybackData_PlaybackState_descriptor(), name, value);
}
// ===================================================================

class MediaInfoChannelPlaybackData final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:aasdk.proto.messages.MediaInfoChannelPlaybackData) */ {
 public:
  inline MediaInfoChannelPlaybackData() : MediaInfoChannelPlaybackData(nullptr) {}
  ~MediaInfoChannelPlaybackData() override;
  explicit constexpr MediaInfoChannelPlaybackData(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MediaInfoChannelPlaybackData(const MediaInfoChannelPlaybackData& from);
  MediaInfoChannelPlaybackData(MediaInfoChannelPlaybackData&& from) noexcept
    : MediaInfoChannelPlaybackData() {
    *this = ::std::move(from);
  }

  inline MediaInfoChannelPlaybackData& operator=(const MediaInfoChannelPlaybackData& from) {
    CopyFrom(from);
    return *this;
  }
  inline MediaInfoChannelPlaybackData& operator=(MediaInfoChannelPlaybackData&& from) noexcept {
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
  static const MediaInfoChannelPlaybackData& default_instance() {
    return *internal_default_instance();
  }
  static inline const MediaInfoChannelPlaybackData* internal_default_instance() {
    return reinterpret_cast<const MediaInfoChannelPlaybackData*>(
               &_MediaInfoChannelPlaybackData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MediaInfoChannelPlaybackData& a, MediaInfoChannelPlaybackData& b) {
    a.Swap(&b);
  }
  inline void Swap(MediaInfoChannelPlaybackData* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MediaInfoChannelPlaybackData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MediaInfoChannelPlaybackData* New() const final {
    return new MediaInfoChannelPlaybackData();
  }

  MediaInfoChannelPlaybackData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MediaInfoChannelPlaybackData>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MediaInfoChannelPlaybackData& from);
  void MergeFrom(const MediaInfoChannelPlaybackData& from);
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
  void InternalSwap(MediaInfoChannelPlaybackData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "aasdk.proto.messages.MediaInfoChannelPlaybackData";
  }
  protected:
  explicit MediaInfoChannelPlaybackData(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef MediaInfoChannelPlaybackData_PlaybackState PlaybackState;
  static constexpr PlaybackState NONE =
    MediaInfoChannelPlaybackData_PlaybackState_NONE;
  static constexpr PlaybackState TRACK_CHANGE =
    MediaInfoChannelPlaybackData_PlaybackState_TRACK_CHANGE;
  static constexpr PlaybackState PLAY =
    MediaInfoChannelPlaybackData_PlaybackState_PLAY;
  static constexpr PlaybackState PAUSE =
    MediaInfoChannelPlaybackData_PlaybackState_PAUSE;
  static inline bool PlaybackState_IsValid(int value) {
    return MediaInfoChannelPlaybackData_PlaybackState_IsValid(value);
  }
  static constexpr PlaybackState PlaybackState_MIN =
    MediaInfoChannelPlaybackData_PlaybackState_PlaybackState_MIN;
  static constexpr PlaybackState PlaybackState_MAX =
    MediaInfoChannelPlaybackData_PlaybackState_PlaybackState_MAX;
  static constexpr int PlaybackState_ARRAYSIZE =
    MediaInfoChannelPlaybackData_PlaybackState_PlaybackState_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  PlaybackState_descriptor() {
    return MediaInfoChannelPlaybackData_PlaybackState_descriptor();
  }
  template<typename T>
  static inline const std::string& PlaybackState_Name(T enum_t_value) {
    static_assert(::std::is_same<T, PlaybackState>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function PlaybackState_Name.");
    return MediaInfoChannelPlaybackData_PlaybackState_Name(enum_t_value);
  }
  static inline bool PlaybackState_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      PlaybackState* value) {
    return MediaInfoChannelPlaybackData_PlaybackState_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kMediaSourceFieldNumber = 2,
    kPlaybackStateFieldNumber = 1,
    kTrackProgressFieldNumber = 3,
    kUnknown1FieldNumber = 4,
    kUnknown2FieldNumber = 5,
    kUnknown3FieldNumber = 6,
  };
  // required string media_source = 2;
  bool has_media_source() const;
  private:
  bool _internal_has_media_source() const;
  public:
  void clear_media_source();
  const std::string& media_source() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_media_source(ArgT0&& arg0, ArgT... args);
  std::string* mutable_media_source();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_media_source();
  void set_allocated_media_source(std::string* media_source);
  private:
  const std::string& _internal_media_source() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_media_source(const std::string& value);
  std::string* _internal_mutable_media_source();
  public:

  // required .aasdk.proto.messages.MediaInfoChannelPlaybackData.PlaybackState playback_state = 1;
  bool has_playback_state() const;
  private:
  bool _internal_has_playback_state() const;
  public:
  void clear_playback_state();
  ::aasdk::proto::messages::MediaInfoChannelPlaybackData_PlaybackState playback_state() const;
  void set_playback_state(::aasdk::proto::messages::MediaInfoChannelPlaybackData_PlaybackState value);
  private:
  ::aasdk::proto::messages::MediaInfoChannelPlaybackData_PlaybackState _internal_playback_state() const;
  void _internal_set_playback_state(::aasdk::proto::messages::MediaInfoChannelPlaybackData_PlaybackState value);
  public:

  // required int32 track_progress = 3;
  bool has_track_progress() const;
  private:
  bool _internal_has_track_progress() const;
  public:
  void clear_track_progress();
  ::PROTOBUF_NAMESPACE_ID::int32 track_progress() const;
  void set_track_progress(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_track_progress() const;
  void _internal_set_track_progress(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 unknown1 = 4;
  bool has_unknown1() const;
  private:
  bool _internal_has_unknown1() const;
  public:
  void clear_unknown1();
  ::PROTOBUF_NAMESPACE_ID::int32 unknown1() const;
  void set_unknown1(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_unknown1() const;
  void _internal_set_unknown1(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 unknown2 = 5;
  bool has_unknown2() const;
  private:
  bool _internal_has_unknown2() const;
  public:
  void clear_unknown2();
  ::PROTOBUF_NAMESPACE_ID::int32 unknown2() const;
  void set_unknown2(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_unknown2() const;
  void _internal_set_unknown2(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 unknown3 = 6;
  bool has_unknown3() const;
  private:
  bool _internal_has_unknown3() const;
  public:
  void clear_unknown3();
  ::PROTOBUF_NAMESPACE_ID::int32 unknown3() const;
  void set_unknown3(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_unknown3() const;
  void _internal_set_unknown3(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:aasdk.proto.messages.MediaInfoChannelPlaybackData)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr media_source_;
  int playback_state_;
  ::PROTOBUF_NAMESPACE_ID::int32 track_progress_;
  ::PROTOBUF_NAMESPACE_ID::int32 unknown1_;
  ::PROTOBUF_NAMESPACE_ID::int32 unknown2_;
  ::PROTOBUF_NAMESPACE_ID::int32 unknown3_;
  friend struct ::TableStruct_MediaInfoChannelPlaybackData_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MediaInfoChannelPlaybackData

// required .aasdk.proto.messages.MediaInfoChannelPlaybackData.PlaybackState playback_state = 1;
inline bool MediaInfoChannelPlaybackData::_internal_has_playback_state() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool MediaInfoChannelPlaybackData::has_playback_state() const {
  return _internal_has_playback_state();
}
inline void MediaInfoChannelPlaybackData::clear_playback_state() {
  playback_state_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::aasdk::proto::messages::MediaInfoChannelPlaybackData_PlaybackState MediaInfoChannelPlaybackData::_internal_playback_state() const {
  return static_cast< ::aasdk::proto::messages::MediaInfoChannelPlaybackData_PlaybackState >(playback_state_);
}
inline ::aasdk::proto::messages::MediaInfoChannelPlaybackData_PlaybackState MediaInfoChannelPlaybackData::playback_state() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.messages.MediaInfoChannelPlaybackData.playback_state)
  return _internal_playback_state();
}
inline void MediaInfoChannelPlaybackData::_internal_set_playback_state(::aasdk::proto::messages::MediaInfoChannelPlaybackData_PlaybackState value) {
  assert(::aasdk::proto::messages::MediaInfoChannelPlaybackData_PlaybackState_IsValid(value));
  _has_bits_[0] |= 0x00000002u;
  playback_state_ = value;
}
inline void MediaInfoChannelPlaybackData::set_playback_state(::aasdk::proto::messages::MediaInfoChannelPlaybackData_PlaybackState value) {
  _internal_set_playback_state(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.messages.MediaInfoChannelPlaybackData.playback_state)
}

// required string media_source = 2;
inline bool MediaInfoChannelPlaybackData::_internal_has_media_source() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool MediaInfoChannelPlaybackData::has_media_source() const {
  return _internal_has_media_source();
}
inline void MediaInfoChannelPlaybackData::clear_media_source() {
  media_source_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& MediaInfoChannelPlaybackData::media_source() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.messages.MediaInfoChannelPlaybackData.media_source)
  return _internal_media_source();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MediaInfoChannelPlaybackData::set_media_source(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 media_source_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:aasdk.proto.messages.MediaInfoChannelPlaybackData.media_source)
}
inline std::string* MediaInfoChannelPlaybackData::mutable_media_source() {
  // @@protoc_insertion_point(field_mutable:aasdk.proto.messages.MediaInfoChannelPlaybackData.media_source)
  return _internal_mutable_media_source();
}
inline const std::string& MediaInfoChannelPlaybackData::_internal_media_source() const {
  return media_source_.Get();
}
inline void MediaInfoChannelPlaybackData::_internal_set_media_source(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  media_source_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* MediaInfoChannelPlaybackData::_internal_mutable_media_source() {
  _has_bits_[0] |= 0x00000001u;
  return media_source_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* MediaInfoChannelPlaybackData::release_media_source() {
  // @@protoc_insertion_point(field_release:aasdk.proto.messages.MediaInfoChannelPlaybackData.media_source)
  if (!_internal_has_media_source()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return media_source_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void MediaInfoChannelPlaybackData::set_allocated_media_source(std::string* media_source) {
  if (media_source != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  media_source_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), media_source,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:aasdk.proto.messages.MediaInfoChannelPlaybackData.media_source)
}

// required int32 track_progress = 3;
inline bool MediaInfoChannelPlaybackData::_internal_has_track_progress() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool MediaInfoChannelPlaybackData::has_track_progress() const {
  return _internal_has_track_progress();
}
inline void MediaInfoChannelPlaybackData::clear_track_progress() {
  track_progress_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MediaInfoChannelPlaybackData::_internal_track_progress() const {
  return track_progress_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MediaInfoChannelPlaybackData::track_progress() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.messages.MediaInfoChannelPlaybackData.track_progress)
  return _internal_track_progress();
}
inline void MediaInfoChannelPlaybackData::_internal_set_track_progress(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  track_progress_ = value;
}
inline void MediaInfoChannelPlaybackData::set_track_progress(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_track_progress(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.messages.MediaInfoChannelPlaybackData.track_progress)
}

// required int32 unknown1 = 4;
inline bool MediaInfoChannelPlaybackData::_internal_has_unknown1() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool MediaInfoChannelPlaybackData::has_unknown1() const {
  return _internal_has_unknown1();
}
inline void MediaInfoChannelPlaybackData::clear_unknown1() {
  unknown1_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MediaInfoChannelPlaybackData::_internal_unknown1() const {
  return unknown1_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MediaInfoChannelPlaybackData::unknown1() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.messages.MediaInfoChannelPlaybackData.unknown1)
  return _internal_unknown1();
}
inline void MediaInfoChannelPlaybackData::_internal_set_unknown1(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000008u;
  unknown1_ = value;
}
inline void MediaInfoChannelPlaybackData::set_unknown1(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_unknown1(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.messages.MediaInfoChannelPlaybackData.unknown1)
}

// required int32 unknown2 = 5;
inline bool MediaInfoChannelPlaybackData::_internal_has_unknown2() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool MediaInfoChannelPlaybackData::has_unknown2() const {
  return _internal_has_unknown2();
}
inline void MediaInfoChannelPlaybackData::clear_unknown2() {
  unknown2_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MediaInfoChannelPlaybackData::_internal_unknown2() const {
  return unknown2_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MediaInfoChannelPlaybackData::unknown2() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.messages.MediaInfoChannelPlaybackData.unknown2)
  return _internal_unknown2();
}
inline void MediaInfoChannelPlaybackData::_internal_set_unknown2(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000010u;
  unknown2_ = value;
}
inline void MediaInfoChannelPlaybackData::set_unknown2(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_unknown2(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.messages.MediaInfoChannelPlaybackData.unknown2)
}

// required int32 unknown3 = 6;
inline bool MediaInfoChannelPlaybackData::_internal_has_unknown3() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool MediaInfoChannelPlaybackData::has_unknown3() const {
  return _internal_has_unknown3();
}
inline void MediaInfoChannelPlaybackData::clear_unknown3() {
  unknown3_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MediaInfoChannelPlaybackData::_internal_unknown3() const {
  return unknown3_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MediaInfoChannelPlaybackData::unknown3() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.messages.MediaInfoChannelPlaybackData.unknown3)
  return _internal_unknown3();
}
inline void MediaInfoChannelPlaybackData::_internal_set_unknown3(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000020u;
  unknown3_ = value;
}
inline void MediaInfoChannelPlaybackData::set_unknown3(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_unknown3(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.messages.MediaInfoChannelPlaybackData.unknown3)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace proto
}  // namespace aasdk

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::aasdk::proto::messages::MediaInfoChannelPlaybackData_PlaybackState> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::aasdk::proto::messages::MediaInfoChannelPlaybackData_PlaybackState>() {
  return ::aasdk::proto::messages::MediaInfoChannelPlaybackData_PlaybackState_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MediaInfoChannelPlaybackData_2eproto
