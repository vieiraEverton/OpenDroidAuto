// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VoiceSessionRequestMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_VoiceSessionRequestMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_VoiceSessionRequestMessage_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_VoiceSessionRequestMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_VoiceSessionRequestMessage_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_VoiceSessionRequestMessage_2eproto;
namespace aasdk {
namespace proto {
namespace messages {
class VoiceSessionRequest;
struct VoiceSessionRequestDefaultTypeInternal;
extern VoiceSessionRequestDefaultTypeInternal _VoiceSessionRequest_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> ::aasdk::proto::messages::VoiceSessionRequest* Arena::CreateMaybeMessage<::aasdk::proto::messages::VoiceSessionRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class VoiceSessionRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:aasdk.proto.messages.VoiceSessionRequest) */ {
 public:
  inline VoiceSessionRequest() : VoiceSessionRequest(nullptr) {}
  ~VoiceSessionRequest() override;
  explicit constexpr VoiceSessionRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  VoiceSessionRequest(const VoiceSessionRequest& from);
  VoiceSessionRequest(VoiceSessionRequest&& from) noexcept
    : VoiceSessionRequest() {
    *this = ::std::move(from);
  }

  inline VoiceSessionRequest& operator=(const VoiceSessionRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline VoiceSessionRequest& operator=(VoiceSessionRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
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
  static const VoiceSessionRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const VoiceSessionRequest* internal_default_instance() {
    return reinterpret_cast<const VoiceSessionRequest*>(
               &_VoiceSessionRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(VoiceSessionRequest& a, VoiceSessionRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(VoiceSessionRequest* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(VoiceSessionRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VoiceSessionRequest* New() const final {
    return new VoiceSessionRequest();
  }

  VoiceSessionRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VoiceSessionRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const VoiceSessionRequest& from);
  void MergeFrom(const VoiceSessionRequest& from);
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
  void InternalSwap(VoiceSessionRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "aasdk.proto.messages.VoiceSessionRequest";
  }
  protected:
  explicit VoiceSessionRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTypeFieldNumber = 1,
  };
  // uint32 type = 1;
  void clear_type();
  ::PROTOBUF_NAMESPACE_ID::uint32 type() const;
  void set_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_type() const;
  void _internal_set_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:aasdk.proto.messages.VoiceSessionRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::uint32 type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_VoiceSessionRequestMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VoiceSessionRequest

// uint32 type = 1;
inline void VoiceSessionRequest::clear_type() {
  type_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VoiceSessionRequest::_internal_type() const {
  return type_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VoiceSessionRequest::type() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.messages.VoiceSessionRequest.type)
  return _internal_type();
}
inline void VoiceSessionRequest::_internal_set_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  type_ = value;
}
inline void VoiceSessionRequest::set_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.messages.VoiceSessionRequest.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace proto
}  // namespace aasdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_VoiceSessionRequestMessage_2eproto
