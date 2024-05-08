// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RelativeInputEventsData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_RelativeInputEventsData_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_RelativeInputEventsData_2eproto

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
#include "RelativeInputEventData.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_RelativeInputEventsData_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_RelativeInputEventsData_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_RelativeInputEventsData_2eproto;
namespace aasdk {
namespace proto {
namespace data {
class RelativeInputEvents;
struct RelativeInputEventsDefaultTypeInternal;
extern RelativeInputEventsDefaultTypeInternal _RelativeInputEvents_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> ::aasdk::proto::data::RelativeInputEvents* Arena::CreateMaybeMessage<::aasdk::proto::data::RelativeInputEvents>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class RelativeInputEvents final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:aasdk.proto.data.RelativeInputEvents) */ {
 public:
  inline RelativeInputEvents() : RelativeInputEvents(nullptr) {}
  ~RelativeInputEvents() override;
  explicit constexpr RelativeInputEvents(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RelativeInputEvents(const RelativeInputEvents& from);
  RelativeInputEvents(RelativeInputEvents&& from) noexcept
    : RelativeInputEvents() {
    *this = ::std::move(from);
  }

  inline RelativeInputEvents& operator=(const RelativeInputEvents& from) {
    CopyFrom(from);
    return *this;
  }
  inline RelativeInputEvents& operator=(RelativeInputEvents&& from) noexcept {
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
  static const RelativeInputEvents& default_instance() {
    return *internal_default_instance();
  }
  static inline const RelativeInputEvents* internal_default_instance() {
    return reinterpret_cast<const RelativeInputEvents*>(
               &_RelativeInputEvents_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RelativeInputEvents& a, RelativeInputEvents& b) {
    a.Swap(&b);
  }
  inline void Swap(RelativeInputEvents* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RelativeInputEvents* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RelativeInputEvents* New() const final {
    return new RelativeInputEvents();
  }

  RelativeInputEvents* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RelativeInputEvents>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RelativeInputEvents& from);
  void MergeFrom(const RelativeInputEvents& from);
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
  void InternalSwap(RelativeInputEvents* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "aasdk.proto.data.RelativeInputEvents";
  }
  protected:
  explicit RelativeInputEvents(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRelativeInputEventsFieldNumber = 1,
  };
  // repeated .aasdk.proto.data.RelativeInputEvent relative_input_events = 1;
  int relative_input_events_size() const;
  private:
  int _internal_relative_input_events_size() const;
  public:
  void clear_relative_input_events();
  ::aasdk::proto::data::RelativeInputEvent* mutable_relative_input_events(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aasdk::proto::data::RelativeInputEvent >*
      mutable_relative_input_events();
  private:
  const ::aasdk::proto::data::RelativeInputEvent& _internal_relative_input_events(int index) const;
  ::aasdk::proto::data::RelativeInputEvent* _internal_add_relative_input_events();
  public:
  const ::aasdk::proto::data::RelativeInputEvent& relative_input_events(int index) const;
  ::aasdk::proto::data::RelativeInputEvent* add_relative_input_events();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aasdk::proto::data::RelativeInputEvent >&
      relative_input_events() const;

  // @@protoc_insertion_point(class_scope:aasdk.proto.data.RelativeInputEvents)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aasdk::proto::data::RelativeInputEvent > relative_input_events_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_RelativeInputEventsData_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RelativeInputEvents

// repeated .aasdk.proto.data.RelativeInputEvent relative_input_events = 1;
inline int RelativeInputEvents::_internal_relative_input_events_size() const {
  return relative_input_events_.size();
}
inline int RelativeInputEvents::relative_input_events_size() const {
  return _internal_relative_input_events_size();
}
inline ::aasdk::proto::data::RelativeInputEvent* RelativeInputEvents::mutable_relative_input_events(int index) {
  // @@protoc_insertion_point(field_mutable:aasdk.proto.data.RelativeInputEvents.relative_input_events)
  return relative_input_events_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aasdk::proto::data::RelativeInputEvent >*
RelativeInputEvents::mutable_relative_input_events() {
  // @@protoc_insertion_point(field_mutable_list:aasdk.proto.data.RelativeInputEvents.relative_input_events)
  return &relative_input_events_;
}
inline const ::aasdk::proto::data::RelativeInputEvent& RelativeInputEvents::_internal_relative_input_events(int index) const {
  return relative_input_events_.Get(index);
}
inline const ::aasdk::proto::data::RelativeInputEvent& RelativeInputEvents::relative_input_events(int index) const {
  // @@protoc_insertion_point(field_get:aasdk.proto.data.RelativeInputEvents.relative_input_events)
  return _internal_relative_input_events(index);
}
inline ::aasdk::proto::data::RelativeInputEvent* RelativeInputEvents::_internal_add_relative_input_events() {
  return relative_input_events_.Add();
}
inline ::aasdk::proto::data::RelativeInputEvent* RelativeInputEvents::add_relative_input_events() {
  // @@protoc_insertion_point(field_add:aasdk.proto.data.RelativeInputEvents.relative_input_events)
  return _internal_add_relative_input_events();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aasdk::proto::data::RelativeInputEvent >&
RelativeInputEvents::relative_input_events() const {
  // @@protoc_insertion_point(field_list:aasdk.proto.data.RelativeInputEvents.relative_input_events)
  return relative_input_events_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_RelativeInputEventsData_2eproto
