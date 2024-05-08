// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ButtonEventsData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ButtonEventsData_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ButtonEventsData_2eproto

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
#include "ButtonEventData.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ButtonEventsData_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ButtonEventsData_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ButtonEventsData_2eproto;
namespace aasdk {
namespace proto {
namespace data {
class ButtonEvents;
struct ButtonEventsDefaultTypeInternal;
extern ButtonEventsDefaultTypeInternal _ButtonEvents_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> ::aasdk::proto::data::ButtonEvents* Arena::CreateMaybeMessage<::aasdk::proto::data::ButtonEvents>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class ButtonEvents final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:aasdk.proto.data.ButtonEvents) */ {
 public:
  inline ButtonEvents() : ButtonEvents(nullptr) {}
  ~ButtonEvents() override;
  explicit constexpr ButtonEvents(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ButtonEvents(const ButtonEvents& from);
  ButtonEvents(ButtonEvents&& from) noexcept
    : ButtonEvents() {
    *this = ::std::move(from);
  }

  inline ButtonEvents& operator=(const ButtonEvents& from) {
    CopyFrom(from);
    return *this;
  }
  inline ButtonEvents& operator=(ButtonEvents&& from) noexcept {
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
  static const ButtonEvents& default_instance() {
    return *internal_default_instance();
  }
  static inline const ButtonEvents* internal_default_instance() {
    return reinterpret_cast<const ButtonEvents*>(
               &_ButtonEvents_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ButtonEvents& a, ButtonEvents& b) {
    a.Swap(&b);
  }
  inline void Swap(ButtonEvents* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ButtonEvents* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ButtonEvents* New() const final {
    return new ButtonEvents();
  }

  ButtonEvents* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ButtonEvents>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ButtonEvents& from);
  void MergeFrom(const ButtonEvents& from);
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
  void InternalSwap(ButtonEvents* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "aasdk.proto.data.ButtonEvents";
  }
  protected:
  explicit ButtonEvents(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kButtonEventsFieldNumber = 1,
  };
  // repeated .aasdk.proto.data.ButtonEvent button_events = 1;
  int button_events_size() const;
  private:
  int _internal_button_events_size() const;
  public:
  void clear_button_events();
  ::aasdk::proto::data::ButtonEvent* mutable_button_events(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aasdk::proto::data::ButtonEvent >*
      mutable_button_events();
  private:
  const ::aasdk::proto::data::ButtonEvent& _internal_button_events(int index) const;
  ::aasdk::proto::data::ButtonEvent* _internal_add_button_events();
  public:
  const ::aasdk::proto::data::ButtonEvent& button_events(int index) const;
  ::aasdk::proto::data::ButtonEvent* add_button_events();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aasdk::proto::data::ButtonEvent >&
      button_events() const;

  // @@protoc_insertion_point(class_scope:aasdk.proto.data.ButtonEvents)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aasdk::proto::data::ButtonEvent > button_events_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ButtonEventsData_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ButtonEvents

// repeated .aasdk.proto.data.ButtonEvent button_events = 1;
inline int ButtonEvents::_internal_button_events_size() const {
  return button_events_.size();
}
inline int ButtonEvents::button_events_size() const {
  return _internal_button_events_size();
}
inline ::aasdk::proto::data::ButtonEvent* ButtonEvents::mutable_button_events(int index) {
  // @@protoc_insertion_point(field_mutable:aasdk.proto.data.ButtonEvents.button_events)
  return button_events_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aasdk::proto::data::ButtonEvent >*
ButtonEvents::mutable_button_events() {
  // @@protoc_insertion_point(field_mutable_list:aasdk.proto.data.ButtonEvents.button_events)
  return &button_events_;
}
inline const ::aasdk::proto::data::ButtonEvent& ButtonEvents::_internal_button_events(int index) const {
  return button_events_.Get(index);
}
inline const ::aasdk::proto::data::ButtonEvent& ButtonEvents::button_events(int index) const {
  // @@protoc_insertion_point(field_get:aasdk.proto.data.ButtonEvents.button_events)
  return _internal_button_events(index);
}
inline ::aasdk::proto::data::ButtonEvent* ButtonEvents::_internal_add_button_events() {
  return button_events_.Add();
}
inline ::aasdk::proto::data::ButtonEvent* ButtonEvents::add_button_events() {
  // @@protoc_insertion_point(field_add:aasdk.proto.data.ButtonEvents.button_events)
  return _internal_add_button_events();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aasdk::proto::data::ButtonEvent >&
ButtonEvents::button_events() const {
  // @@protoc_insertion_point(field_list:aasdk.proto.data.ButtonEvents.button_events)
  return button_events_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ButtonEventsData_2eproto
