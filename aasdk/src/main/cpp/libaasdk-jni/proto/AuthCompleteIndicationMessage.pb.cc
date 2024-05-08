// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AuthCompleteIndicationMessage.proto

#include "AuthCompleteIndicationMessage.pb.h"

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
namespace messages {
constexpr AuthCompleteIndication::AuthCompleteIndication(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : status_(0)
{}
struct AuthCompleteIndicationDefaultTypeInternal {
  constexpr AuthCompleteIndicationDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~AuthCompleteIndicationDefaultTypeInternal() {}
  union {
    AuthCompleteIndication _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT AuthCompleteIndicationDefaultTypeInternal _AuthCompleteIndication_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_AuthCompleteIndicationMessage_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_AuthCompleteIndicationMessage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_AuthCompleteIndicationMessage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_AuthCompleteIndicationMessage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::messages::AuthCompleteIndication, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::messages::AuthCompleteIndication, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::aasdk::proto::messages::AuthCompleteIndication, status_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::aasdk::proto::messages::AuthCompleteIndication)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::aasdk::proto::messages::_AuthCompleteIndication_default_instance_),
};

const char descriptor_table_protodef_AuthCompleteIndicationMessage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#AuthCompleteIndicationMessage.proto\022\024a"
  "asdk.proto.messages\032\020StatusEnum.proto\"H\n"
  "\026AuthCompleteIndication\022.\n\006status\030\001 \002(\0162"
  "\036.aasdk.proto.enums.Status.Enum"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_AuthCompleteIndicationMessage_2eproto_deps[1] = {
  &::descriptor_table_StatusEnum_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_AuthCompleteIndicationMessage_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AuthCompleteIndicationMessage_2eproto = {
  false, false, 151, descriptor_table_protodef_AuthCompleteIndicationMessage_2eproto, "AuthCompleteIndicationMessage.proto", 
  &descriptor_table_AuthCompleteIndicationMessage_2eproto_once, descriptor_table_AuthCompleteIndicationMessage_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_AuthCompleteIndicationMessage_2eproto::offsets,
  file_level_metadata_AuthCompleteIndicationMessage_2eproto, file_level_enum_descriptors_AuthCompleteIndicationMessage_2eproto, file_level_service_descriptors_AuthCompleteIndicationMessage_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_AuthCompleteIndicationMessage_2eproto_getter() {
  return &descriptor_table_AuthCompleteIndicationMessage_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_AuthCompleteIndicationMessage_2eproto(&descriptor_table_AuthCompleteIndicationMessage_2eproto);
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class AuthCompleteIndication::_Internal {
 public:
  using HasBits = decltype(std::declval<AuthCompleteIndication>()._has_bits_);
  static void set_has_status(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000001) ^ 0x00000001) != 0;
  }
};

AuthCompleteIndication::AuthCompleteIndication(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:aasdk.proto.messages.AuthCompleteIndication)
}
AuthCompleteIndication::AuthCompleteIndication(const AuthCompleteIndication& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  status_ = from.status_;
  // @@protoc_insertion_point(copy_constructor:aasdk.proto.messages.AuthCompleteIndication)
}

void AuthCompleteIndication::SharedCtor() {
status_ = 0;
}

AuthCompleteIndication::~AuthCompleteIndication() {
  // @@protoc_insertion_point(destructor:aasdk.proto.messages.AuthCompleteIndication)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AuthCompleteIndication::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void AuthCompleteIndication::ArenaDtor(void* object) {
  AuthCompleteIndication* _this = reinterpret_cast< AuthCompleteIndication* >(object);
  (void)_this;
}
void AuthCompleteIndication::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AuthCompleteIndication::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void AuthCompleteIndication::Clear() {
// @@protoc_insertion_point(message_clear_start:aasdk.proto.messages.AuthCompleteIndication)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  status_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AuthCompleteIndication::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required .aasdk.proto.enums.Status.Enum status = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::aasdk::proto::enums::Status_Enum_IsValid(val))) {
            _internal_set_status(static_cast<::aasdk::proto::enums::Status_Enum>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* AuthCompleteIndication::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:aasdk.proto.messages.AuthCompleteIndication)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .aasdk.proto.enums.Status.Enum status = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_status(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:aasdk.proto.messages.AuthCompleteIndication)
  return target;
}

size_t AuthCompleteIndication::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aasdk.proto.messages.AuthCompleteIndication)
  size_t total_size = 0;

  // required .aasdk.proto.enums.Status.Enum status = 1;
  if (_internal_has_status()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_status());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AuthCompleteIndication::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:aasdk.proto.messages.AuthCompleteIndication)
  GOOGLE_DCHECK_NE(&from, this);
  const AuthCompleteIndication* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AuthCompleteIndication>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:aasdk.proto.messages.AuthCompleteIndication)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:aasdk.proto.messages.AuthCompleteIndication)
    MergeFrom(*source);
  }
}

void AuthCompleteIndication::MergeFrom(const AuthCompleteIndication& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aasdk.proto.messages.AuthCompleteIndication)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_status()) {
    _internal_set_status(from._internal_status());
  }
}

void AuthCompleteIndication::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:aasdk.proto.messages.AuthCompleteIndication)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AuthCompleteIndication::CopyFrom(const AuthCompleteIndication& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aasdk.proto.messages.AuthCompleteIndication)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AuthCompleteIndication::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void AuthCompleteIndication::InternalSwap(AuthCompleteIndication* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(status_, other->status_);
}

::PROTOBUF_NAMESPACE_ID::Metadata AuthCompleteIndication::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_AuthCompleteIndicationMessage_2eproto_getter, &descriptor_table_AuthCompleteIndicationMessage_2eproto_once,
      file_level_metadata_AuthCompleteIndicationMessage_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::aasdk::proto::messages::AuthCompleteIndication* Arena::CreateMaybeMessage< ::aasdk::proto::messages::AuthCompleteIndication >(Arena* arena) {
  return Arena::CreateMessageInternal< ::aasdk::proto::messages::AuthCompleteIndication >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
