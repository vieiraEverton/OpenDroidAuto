// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AbsoluteInputEventsData.proto

#include "AbsoluteInputEventsData.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace aasdk {
namespace proto {
namespace data {
constexpr AbsoluteInputEvents::AbsoluteInputEvents(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : absolute_input_events_(){}
struct AbsoluteInputEventsDefaultTypeInternal {
  constexpr AbsoluteInputEventsDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~AbsoluteInputEventsDefaultTypeInternal() {}
  union {
    AbsoluteInputEvents _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT AbsoluteInputEventsDefaultTypeInternal _AbsoluteInputEvents_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_AbsoluteInputEventsData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_AbsoluteInputEventsData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_AbsoluteInputEventsData_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_AbsoluteInputEventsData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::AbsoluteInputEvents, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::data::AbsoluteInputEvents, absolute_input_events_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::aasdk::proto::data::AbsoluteInputEvents)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::aasdk::proto::data::_AbsoluteInputEvents_default_instance_),
};

const char descriptor_table_protodef_AbsoluteInputEventsData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035AbsoluteInputEventsData.proto\022\020aasdk.p"
  "roto.data\032\034AbsoluteInputEventData.proto\""
  "Z\n\023AbsoluteInputEvents\022C\n\025absolute_input"
  "_events\030\001 \003(\0132$.aasdk.proto.data.Absolut"
  "eInputEvent"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_AbsoluteInputEventsData_2eproto_deps[1] = {
  &::descriptor_table_AbsoluteInputEventData_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_AbsoluteInputEventsData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AbsoluteInputEventsData_2eproto = {
  false, false, 171, descriptor_table_protodef_AbsoluteInputEventsData_2eproto, "AbsoluteInputEventsData.proto", 
  &descriptor_table_AbsoluteInputEventsData_2eproto_once, descriptor_table_AbsoluteInputEventsData_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_AbsoluteInputEventsData_2eproto::offsets,
  file_level_metadata_AbsoluteInputEventsData_2eproto, file_level_enum_descriptors_AbsoluteInputEventsData_2eproto, file_level_service_descriptors_AbsoluteInputEventsData_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_AbsoluteInputEventsData_2eproto_getter() {
  return &descriptor_table_AbsoluteInputEventsData_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_AbsoluteInputEventsData_2eproto(&descriptor_table_AbsoluteInputEventsData_2eproto);
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class AbsoluteInputEvents::_Internal {
 public:
};

void AbsoluteInputEvents::clear_absolute_input_events() {
  absolute_input_events_.Clear();
}
AbsoluteInputEvents::AbsoluteInputEvents(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  absolute_input_events_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:aasdk.proto.data.AbsoluteInputEvents)
}
AbsoluteInputEvents::AbsoluteInputEvents(const AbsoluteInputEvents& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      absolute_input_events_(from.absolute_input_events_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:aasdk.proto.data.AbsoluteInputEvents)
}

void AbsoluteInputEvents::SharedCtor() {
}

AbsoluteInputEvents::~AbsoluteInputEvents() {
  // @@protoc_insertion_point(destructor:aasdk.proto.data.AbsoluteInputEvents)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AbsoluteInputEvents::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void AbsoluteInputEvents::ArenaDtor(void* object) {
  AbsoluteInputEvents* _this = reinterpret_cast< AbsoluteInputEvents* >(object);
  (void)_this;
}
void AbsoluteInputEvents::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AbsoluteInputEvents::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void AbsoluteInputEvents::Clear() {
// @@protoc_insertion_point(message_clear_start:aasdk.proto.data.AbsoluteInputEvents)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  absolute_input_events_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AbsoluteInputEvents::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .aasdk.proto.data.AbsoluteInputEvent absolute_input_events = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_absolute_input_events(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* AbsoluteInputEvents::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:aasdk.proto.data.AbsoluteInputEvents)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .aasdk.proto.data.AbsoluteInputEvent absolute_input_events = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_absolute_input_events_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_absolute_input_events(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:aasdk.proto.data.AbsoluteInputEvents)
  return target;
}

size_t AbsoluteInputEvents::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aasdk.proto.data.AbsoluteInputEvents)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .aasdk.proto.data.AbsoluteInputEvent absolute_input_events = 1;
  total_size += 1UL * this->_internal_absolute_input_events_size();
  for (const auto& msg : this->absolute_input_events_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AbsoluteInputEvents::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:aasdk.proto.data.AbsoluteInputEvents)
  GOOGLE_DCHECK_NE(&from, this);
  const AbsoluteInputEvents* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AbsoluteInputEvents>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:aasdk.proto.data.AbsoluteInputEvents)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:aasdk.proto.data.AbsoluteInputEvents)
    MergeFrom(*source);
  }
}

void AbsoluteInputEvents::MergeFrom(const AbsoluteInputEvents& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aasdk.proto.data.AbsoluteInputEvents)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  absolute_input_events_.MergeFrom(from.absolute_input_events_);
}

void AbsoluteInputEvents::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:aasdk.proto.data.AbsoluteInputEvents)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AbsoluteInputEvents::CopyFrom(const AbsoluteInputEvents& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aasdk.proto.data.AbsoluteInputEvents)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AbsoluteInputEvents::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(absolute_input_events_)) return false;
  return true;
}

void AbsoluteInputEvents::InternalSwap(AbsoluteInputEvents* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  absolute_input_events_.InternalSwap(&other->absolute_input_events_);
}

::PROTOBUF_NAMESPACE_ID::Metadata AbsoluteInputEvents::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_AbsoluteInputEventsData_2eproto_getter, &descriptor_table_AbsoluteInputEventsData_2eproto_once,
      file_level_metadata_AbsoluteInputEventsData_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::aasdk::proto::data::AbsoluteInputEvents* Arena::CreateMaybeMessage< ::aasdk::proto::data::AbsoluteInputEvents >(Arena* arena) {
  return Arena::CreateMessageInternal< ::aasdk::proto::data::AbsoluteInputEvents >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
